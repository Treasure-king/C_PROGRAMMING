#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
void main()
{
	int count = 0,vowel=0;
	char a[100],c;
	printf("ENTER THE STRING:- ");
	scanf("%s", &a);
	while (a[count]!=0)
	{
		c =a[count];
		if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u'||c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U') {
			vowel++;
		}
		count++;
	}
	printf("\n\n\t\t\t\t\t*******************************\n");
	printf("\t\t\t\t\t*    NUMBER OF VOWELS= %d      *", vowel);
	printf("\n\t\t\t\t\t*******************************");
}