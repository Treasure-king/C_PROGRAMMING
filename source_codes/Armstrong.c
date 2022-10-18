#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main() {
	int C, a, b=0, j, h;
	printf("enter any number\n");
	scanf("%d",&C);
	h = C;
	while (C != 0) {
		a = C % 10;
		j = a * a * a;
		b += j;
		C = C / 10;
	}
		if (h == b) {
			printf("%d is an armstrong\n", h);
		}
		else {
			printf("%d is not an armstrong number\n", h);
		}
}