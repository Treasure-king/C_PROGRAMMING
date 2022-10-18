#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main() {
	int n;
	printf("how many rows you want:- ");
	scanf("%d", &n);
	for (int i = n; i >= 0; i--)
	{
		printf("\t\t\t\t\t\t\t");
		for (int j = i; j >= 0; j--)
		{
			printf("*");
		}
		printf("\n");
	}
}