void login(){
	int i,j,k,c;
	system("CLS");
	for(i=0;i<5;i++){
		printf("\n");
	}
	for(i=0 ;i<27;i++){
		printf(" ");
	}
	for(i =0 ;i<31;i++){
		printf("%c",178);
		Sleep(10);
		if(i==16){
			printf("  Log  In  Screen  ");
			Sleep(10);
		}	
	}
	for(i=0;i<15;i++){
		printf("\n");
		for(j=0;j<27;j++){
			printf(" ");
		}
		printf("%c",178);
		Sleep(10);
		if(i==2){
			for(k=0;k<4;k++){
				printf(" ");
			}
			printf("***** WELCOME TO CAR RENTAL SYSTEM *****");
			printf("    %c",178);
		}
		if(i==3){
			for(k=0;k<7;k++){
				printf(" ");
			}
			for(k=0;k<34;k++){
				printf("%c",196);
			}
			printf("       %c",178);			
		}
		if(i==5){
			for(k=0;k<4;k++){
				printf(" ");
			}
			printf("1.Signup :- As a new member");	
			printf("                 %c",178);	
		}
		if(i==7){
			for(k=0;k<4;k++){
				printf(" ");
			}
			printf("2.Sigin  :- As a Admin or Registered User");	
			printf("   %c",178);	
		}
		if(i==9){
			for(k=0;k<4;k++){
				printf(" ");
			}
			printf("3.Exit   :- To Terminate Program");	
			printf("            %c",178);	
		}
		if(i==12){
			for(k=0;k<4;k++){
				printf(" ");
			}
			printf("Select an option : ");	
			printf("                         %c",178);	
		}
		if(i!=2 && i!=3 && i!=5 && i!=7 && i!=9 && i!=12){
			for(k=0;k<48;k++){
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
	for(i =0 ;i<50;i++){
		printf("%c",178);
		Sleep(10);	
	}
	for(i=0;i<5;i++){
		printf("\n");
	}
}

