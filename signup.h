#include<conio.h>
#include<stdio.h>
#include "userStructHeader.h"

void Signup(){
	int i,j,k;
	int is_valid;
	system("CLS"); 
	for(i=0;i<5;i++){
		printf("\n");
	}
	for(i=0 ;i<27;i++){
		printf(" ");
	}
	for(i =0 ;i<32;i++){
		printf("%c",178);
		Sleep(10);
		if(i==16){
			printf("  Signup  In  Screen  ");
			Sleep(10);
		}	
	}
	for(i=0;i<16;i++){
		printf("\n");
		for(j=0;j<27;j++){
			printf(" ");
		}
		printf("%c",178);
		Sleep(10);
		
		if(i==2){
			for(k=0;k<8;k++){
				printf(" ");
			}
			printf("       **** User details ****");
			printf("               %c",178);
		}
		if(i==3){
			for(k=0;k<10;k++){
				printf(" ");
			}
			for(k=0;k<34;k++){
				printf("%c",196);
			}
			printf("        %c",178);			
		}
		if(i==5){
			for(k=0;k<4;k++){
				printf(" ");
			}
			printf("1.Username :");	
			printf("                                    %c",178);	
		}
		if(i==7){
			for(k=0;k<4;k++){
				printf(" ");
			}
			printf("2.Password :");	
			printf("                                    %c",178);	
		}
		if(i==9){
			for(k=0;k<4;k++){
				printf(" ");
			}
			printf("3.Confirm Password :");	
			printf("                            %c",178);	
		}
		if(i!=2 && i!=3 && i!=5 && i!=7 && i!=9){
			for(k=0;k<52;k++){
				printf(" ");	
			}
			printf("%c",178);
			Sleep(10);
		}
	}
	printf("\n");
	for(i=0 ;i<27;i++){
		printf(" ");
	}	
	for(i =0 ;i<54;i++){
		printf("%c",178);
		Sleep(10);	
	}
	for(i=0;i<10;i++){
		printf("\n");
	}
	write_user();	
}
