#ifndef User_page  //begin header guard
#define User_page
#include "booking.h"
#include "User_data.h"

void Userpage(char name[20]){
	do{
	int choice;
	system("CLS");  
	int i,j,k;
	for(i=0;i<5;i++){
		printf("\n");
	}
	for(i=0 ;i<27;i++){
		printf(" ");
	}
	for(i =0 ;i<41;i++){
		printf("%c",178);
		Sleep(10);
		if(i==20){
			printf("  User Page  ");
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
			printf("       **** Car details **** ");
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
		if(i==4){
			for(k=0;k<4;k++){
				printf(" ");
			}
			printf("1.Get Cars on rental   ");	
			printf("                         %c",178);	
		}
		if(i==6){
			for(k=0;k<4;k++){
				printf(" ");
			}
			printf("2.See your booking list   ");	
			printf("                      %c",178);	
		}
		if(i==8){
			for(k=0;k<4;k++){
				printf(" ");
			}
			printf("3.Cancel your booking  ");	
			printf("                         %c",178);	
		}
		if(i==10){
			for(k=0;k<4;k++){
				printf(" ");
			}
			printf("4.Change password      ");	
			printf("                         %c",178);	
		}
		
		if(i==12){
			for(k=0;k<4;k++){
				printf(" ");
			}
			printf("5.Exit ");	
			printf("                                         %c",178);	
		}
		
		if(i==14){
			for(k=0;k<4;k++){
				printf(" ");
			}
			printf("Enter Your Choice :");	
			printf("                             %c",178);	
		}
		
		
		if(i!=2 && i!=3 && i!=4 && i!=6 && i!=8 && i!=10 && i!=12 && i!=14){
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
		gotoxy(52,20);
		scanf("%d",&choice);
		if(choice == 1){
			write_userbooking(name);
		}
		else if(choice == 2){
			display_booking(name);
			printf("Press any key to countinue...");
			getch();
		}
		else if(choice == 3){
			delete_booking(name);
		}
		else if(choice == 4){
			modify_user();
		}
		else if(choice == 5){
			break;
		}
	}while(1);
}
#endif
