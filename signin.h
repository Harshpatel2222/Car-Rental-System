#include "userStructHeader.h"
#include "adminpage.h"
#include "userpage.h"

void Signin();
void Signin(){
	int i,j,k;
	char name[10],c,a;
	char password[55];
	int index = 0;
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
			printf("  Signin  In  Screen  ");
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
			for(k=0;k<52;k++){
				printf("%c",196);	
			}
			printf("%c",178);
		}
			
		if(i==3){
			for(k=0;k<8;k++){
				printf(" ");
			}
			printf("       **** User details ****");
			printf("               %c",178);
		}
		if(i==4){
			for(k=0;k<52;k++){
				printf("%c",196);
			}
			printf("%c",178);
		}
		if(i==6){
			for(k=0;k<4;k++){
				printf(" ");
			}
			printf("1.Username :");	
			printf("                                    %c",178);	
		}
		if(i==8){
			for(k=0;k<4;k++){
				printf(" ");
			}
			printf("2.Password :");	
			printf("                                    %c",178);	
		}
		if(i!=2 && i!=3 && i!=4 && i!=6 && i!=8){
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
	gotoxy(45,12);
	scanf("%s",&name);
	gotoxy(45,14);
	while((c = getch()) != 13){
       if(index < 0){
           index = 0;
           gotoxy(45,14);
    	}

       if(c == 8){
           putch('\b');
           putch(NULL);
           putch('\b');
           index--;
       continue;
       }
       password[index++] = c;
       putch('*');
   	}
    password[index] = '\0';
    index = 0;
	if(check_user(name,password)==1){
			gotoxy(47,16);
			printf(" \"\" WELCOME BACK !!!! %s \"\"",name);
			gotoxy(51,18);
			printf(" You are logged in ");
			gotoxy(45,20);
			printf("    Press any key to countinue...");
			getch();
			for(i=0;i<10;i++){
				printf("\n");
			}
			if(strcmp(name,"admin")==0 && strcmp(password,"admin")==0){
					Admin();
			}	
			else{
				Userpage(name);
			}
		}
	else{
		do{
			gotoxy(28,17);
			printf("     \"\"OOPS... !! Username or Password  is wrong\"\" ");
			gotoxy(45,19);
			printf("Press any to try again...");
			getch();
			gotoxy(45,12);
			printf("                     ");
			gotoxy(45,14);
			printf("                     ");
			gotoxy(28,17);
			printf("                                                  ");
			gotoxy(45,19);
			printf("                          ");
			gotoxy(45,12);
			scanf("%s",&name);
			gotoxy(45,14);
			while((c = getch()) != 13){
	       		if(index < 0)
	           		index = 0;

	       	if(c == 8){
	           putch('\b');
	           putch(NULL);
	           putch('\b');
	           index--;
	       	continue;
	       }
	       password[index++] = c;
	       putch('*');
	   	}
	    password[index] = '\0';
	    index = 0;
		
	    if(check_user(name,password)==1){
			gotoxy(47,16);
			printf(" \"\" WELCOME BACK !!!! %s \"\"",name);
			gotoxy(51,18);
			printf(" You are logged in ");
			gotoxy(45,20);
			printf("    Press any key to countinue...");
			getch();
			for(i=0;i<10;i++){
				printf("\n");
			}
		}
	  	}while(check_user(name,password)!=1);
		if(strcmp(name,"admin")==0){
			if(strcmp(password,"admin")==0){
				Admin();
			}
		}
		else{
			Userpage(name);
		}
			
	}
}
