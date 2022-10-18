#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main() {
	int n;
	printf("how many rows you want:- ");
	scanf("%d", &n);
	for (int i = 0; i<=n-1; i++)
	{
		printf("\t\t\t\t\t\t\t");
		for (int j =0; j<=i ; j++)
		{
			printf("*");
		}
		printf("\n");
	}
}
