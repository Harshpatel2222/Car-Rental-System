#include<stdio.h>
#include<conio.h>
#include<Windows.h>
#include<stdlib.h>
#include "userStructHeader.h"
#include "signin.h"
#include "login.h"
#include "signup.h"
#include "gotoxy.h"

void main(){
	int c,i;
	system("COLOR 57");
	do{
		login(); // dashboard
		gotoxy(51,18);
		scanf("%d",&c);
		if(c==1){
			Signup();
		}
		else if(c==2){
			Signin();
		}
		else if(c==3){
			for(i=0;i<5;i++){
				printf("\n");
			}
			exit(0);			
		}
		else{
			gotoxy(52,17);
			printf(" ");
			gotoxy(40,19);
			printf("Enter valid number");
			getch();
			gotoxy(40,19);
			printf("                  ");
			
		}
	}while(1);
}

