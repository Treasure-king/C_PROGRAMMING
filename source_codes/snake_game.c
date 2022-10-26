#define _crt_secure_no_warnings
#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<windows.h>
#include<process.h>
int height = 30, width = 100,x,y,fruitx,fruity,flag,gameend,score;
int tailx[100], taily[100];
int piece=0;
void delay() {
	for (int i = 0; i <= 1000000; i++)
	{
		printf("");
	}
}
void setcurser(int i, int j) {
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
void loading() {
	int r;
	setcurser(32, 36);
	printf("\t\t\tl o a d i n g . . .\n");
	printf("\t\t\t\t\t\t\t");
	system("color 0c");
	for (r = 0; r <= 20; r++) {
		printf("%c", 177);
		delay();
	}
	printf("\n\n\t\t\t\t\t\t");
}
void makelogic() {
	int i;
	int prevx, prevy, prev2x, prev2y;
	prevx = tailx[0];
	prevy = taily[0];
	tailx[0] = x;
	taily[0] = y;
	for (i = 1; i <= piece; i++) {
		prev2x = tailx[i];
		prev2y = taily[i];
		tailx[i] = prevx;
		taily[i] = prevy;
		prevx = prev2x;
		prevy = prev2y;
	}
	switch (flag) {
	case 1: {
		x--;
		break;
		}
	case 2: {
		x++;
		break;
	}
	case 3: {
		y--;
		break;
	}
	case 4: {
		y++;
		break;
	}
	}
	if (x == 0 || x == height || y == 0 || y == width) {
		gameend = 1;
	}
	if (x == fruitx && y == fruity) {
	label3:
		fruitx = rand() % 30;
		if (fruitx == 0)
			goto label3;
	label4:
		fruity = rand() % 100;
		if (fruity == 0)
			goto label4;
		score = score + 10;
		piece++;
	}
}
void input() {
	if (_kbhit()) {
		switch (getch()) {
		case 'w': {
			flag = 1;
			break;
			}
		case 's': {
			flag = 2;
			break;
		}
		case 'a': {
			flag = 3;
			break;
		}
		case 'd': {
			flag = 4;
			break;
		}
		}
	}
}
void setup() {
	x = height / 2;
	y = width / 2;
label1:
	fruitx = rand() % 30;
	if (fruitx == 0)
		goto label1;
label2:
	fruity = rand() % 100;
	if (fruity == 0)
		goto label2;
	gameend = 0;
	score = 0;
}
void draw() {
	system("cls");
	system("color 0a");
	int i, j,k,ch;
	for (i = 0; i <= height; i++){
		printf("\t\t\t\t\t\t\t\t");
		for (j = 0; j <= width; j++) {
			if (i == 0 || i == height || j == 0 || j == width) {
				printf("*");
			}
			else {
				if (i == x && j == y) {
					printf("%c%c",3,3);
				}
				else if (i == fruitx && j == fruity) {
					printf("%c%c",3,3);
				}
				else {
					ch = 0;
					for (k = 0; k < piece; k++) {
						if (i == tailx[k] && j == taily[k]) {
							printf("%c%c",3,3);
							ch = 1;
						}
					}
					if(ch==0)
					printf(" ");
				} 
			}
		}
		printf("\n");

	}
	printf("your score is\t %d", score);
}
int main() {
	loading();
	setup();
	while (gameend != 1) {
		input();
		draw();
		makelogic();
	}
}