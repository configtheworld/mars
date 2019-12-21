#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include "kayit.h"
#include "menu.h"
FILE* fperm, * ftemp;


int main() {
	int selection, button;

	do {
		printf("***********************************************\n");
		printf("***********************************************\n");
		printf("**********WELCOME TO MARS REAL ESTATE**********\n");
		printf("***********************************************\n");
		printf("***********************************************\n");
		printf("*Press [1] to login \n");
		printf("*Press [2] to sign in \n");
		printf("enter your selection===>");
		scanf_s("%d", &selection);

		switch (selection) {
		case 1:login(); break;
		case 2:signin(); break;
		default:printf("Please enter a number between 1-2");
		}
		printf("Press [0] to exit");
		scanf_s("%d", &button);
	} while (button != 0);





	return 0;

}
