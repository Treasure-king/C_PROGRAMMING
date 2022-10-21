#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main() {
	int n;
	char c;
	printf("how many rows you want:-  ");
	scanf("%d", &n);
    printf("\nwhich symbol you want to print:-  ");
	getchar();
	scanf("%c",&c);
	for (int i = 1; i<=n;	i = i + 2)
	{
		printf("\t\t\t\t\t\t\t");
		for (int j = 0; j <(n-i)/2; j++)
		{
			printf(" ");
		}
		for (int j =0; j<i ; j++)
		{
			printf("%c",c);

		}
		printf("\n");
	}
}


             
