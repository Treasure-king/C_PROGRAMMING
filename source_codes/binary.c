//create a program to convert decimal number into binary number in reverse order
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
void main() {
	int a;
	printf("enter the number you want to convert");
	scanf("%d", &a);
	for (int i = a; i >=1;)
	{
		if (a % 2 == 0) {
			printf("0");
		}
		else if (a % 2 == 1) {
			printf("1");
		}
		a = a / 2;
		i = a;
	}
	printf("  \b<-- READ FROM HERE");
}
