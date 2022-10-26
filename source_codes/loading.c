//loading function which includes my own user defined dealy and setCurser function
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<windows.h>
#include<process.h>
void delay() {
	for (int i = 0; i <= 1000000; i++)
	{
		printf("");
	}
}
void setCurser(int i,int j) {
	while (i) {
		printf("\n");
		i--;
		if (!i)
		{
			while (j)
			{
				printf(" ");
				j--;
			}
		}
	}
}
int main() {
	int r;
	setCurser(32, 36);
	printf("\t\t\tL O A D I N G . . .\n");
	printf("\t\t\t\t\t\t\t");
	system("color 0C");
	for (r = 0; r <= 20; r++) {
		printf("%c", 177);
		delay();
	}
	printf("\n\n\t\t\t\t\t\t");
}