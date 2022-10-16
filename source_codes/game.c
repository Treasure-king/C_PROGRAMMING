#define _CRT_SECURE_NO_WARNINGS
//GAME:- find a number between 1 to 100
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main(){
	int a, guess, b= 1;
	srand(time(0));
	a = rand() % 100 + 1;
	do
	{
		printf("enter you guess\n");
		scanf("%d",&guess);
		if (a<guess)
		{
			printf("try a lower number \n");
		}
		else if (a>guess)
		{
			printf("try a higher number \n");
		}
		else
		{
			printf("you guessed the number in %d attempts \n",b);
		}
		b++;
	} 
	while (a!=guess);
	return 0;
}