#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main() {
	int n;
	printf("how many rows you want:-  ");
	scanf("%d", &n);
	for (int i = 1; i <= n; i = i ++)
	{
		printf("\t\t\t\t\t\t\t");
		for (int j = 1; j <=(n - i); j++)
		{
			printf(" ");
		}
		for (int j = 1; j <=i; j++)
		{
				printf("%d", j);
		}
		for (int j = i-1; j >=1; j--)
		{
			printf("%d", j);
		}
		printf("\n");
	}
}


