#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main() {
	int a;
	printf("enter any number");
	scanf("%d", &a);
	for (int i = 0; i <= 2 * a - 1; i++)
	{
		if (i <= a) {
			for (int s = 1; s <=a-i ; s++)
			{
				printf(" ");
			}
			for (int j = 0; j < i; j++)
			{
				printf("*");
			}
		}
		else if (i > a) {
			for (int s = 0; s < i-a; s++)
			{
				printf(" ");
			}
			for (int k = 0; k < 2 * a - i; k++)
			{
				printf("*");
			}
		}
		printf("\n");
	}
}