// write a program to find the biggest number out of three
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main() {
	float a, b, c;
	printf("enter 1st number");
	scanf("%f", &a);
	printf("\n enter 2nd number");
	scanf("%f", &b);
	printf("\n enter 3rd number");
	scanf("%f", &c);
	if (a > b) {
		if (a > c) {
			printf("\n 1st is the biggest number %f",a);
		}
		else {
			printf("\n 3rd is the biggest number %f",c);
		}
	}
	else if(b > a) {
		if (b > c) {
			printf("\n 2nd is the biggest number %f",b);
		}
		else {
			printf("\n 3rd is the biggest number %f",c);
		}
	}
}