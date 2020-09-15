#ifndef User_details22  //begin header guard
#define User_details22
#include<stdio.h>
#include<conio.h>
#include<string.h>
#include "userStructHeader.h"

FILE *file;
void input_user(struct user *u);
void display(struct user u1);
int check_user(char user[20],char password[20]);
int check_username(char user[20]);
void write_user();
void display_all();
void display_sp(char user1[20]);
void modify_user();
void delete_user();
void class_result();
void entry_menu();

void input_user(struct user *u)
{
	char name[20],password[20];
	char c,a;
	int i,k,j,index = 0 ;
	char cnfpassword[20];
	int is_valid = 0 ;
	do{
	gotoxy(45,11);
	scanf("%s",&u->name);
	if(check_username(u->name)==1){
		gotoxy(45,11);
		printf("                            ");
		gotoxy(39,18);
		printf(" \"Username Already Exist\"");
		gotoxy(45,20);
		printf(" Press any key to countinue...");
		getch();
		gotoxy(39,18);
		printf("                              ");
		gotoxy(45,20);
		printf("                              ");
	}
	}while(check_username(u->name)==1);
	fflush(stdin);
	gotoxy(45,13);
	while((c = getch()) != 13){
       if(index < 0){
           index = 0;
           gotoxy(45,13);
       }

       if(c == 8){
           putch('\b');
           putch(NULL);
           putch('\b');
           index--;
       continue;
       }
       u->password[index++] = c;
       putch('*');
   	}
    u->password[index] = '\0';
    index = 0;
    fflush(stdin);
	gotoxy(53,15);
	while((a = getch()) != 13){
       if(index < 0){
           index = 0;
           gotoxy(53,15);
    	}

       if(a == 8){
           putch('\b');
           putch(NULL);
           putch('\b');
           index--;
       	continue;
       }
       cnfpassword[index++] = a;
       putch('*');
   	}
    cnfpassword[index] = '\0';
    index = 0;
	if(strcmp(u->password,cnfpassword)==0){
			gotoxy(30,18);
			printf(" \"\"Congratulations !! Your Account is created\"\" ");
			gotoxy(45,20);
			printf("Press any key to countinue...");
			getch();
		}
	else{
		do{
			gotoxy(30,18);
			printf("       \"\"OOPS... !! Both passwords aren't same\"\" ");
			gotoxy(45,20);
			printf("Press any to try again...");
			getch();
			gotoxy(45,13);
			printf("                     ");
			gotoxy(53,15);
			printf("                      ");
			gotoxy(30,18);
			printf("                                                 ");
			gotoxy(45,20);
			printf("                          ");
			gotoxy(45,13);
		while((c = getch()) != 13){
	       if(index < 0){
	           index = 0;
	           gotoxy(45,13);
	       }

	       if(c == 8){
	           putch('\b');
	           putch(NULL);
	           putch('\b');
	           index--;
	       continue;
	       }
	       u->password[index++] = c;
	       putch('*');
	   	}
	    u->password[index] = '\0';
	    index = 0;
	    fflush(stdin);
		gotoxy(53,15);
		while((a = getch()) != 13){
	       if(index < 0){
	           index = 0;
	           gotoxy(53,15);
	       }

	       if(a == 8){
	           putch('\b');
	           putch(NULL);
	           putch('\b');
	           index--;
	       continue;
	       }
	       cnfpassword[index++] = a;
	       putch('*');
	   } 
	    cnfpassword[index] = '\0';
	    index = 0;
	    if(strcmp(u->password,cnfpassword)==0){
	    	is_valid = 0;
			gotoxy(30,18);
			printf(" \"\"Congratulations !! Your Account is created\"\" ");
			gotoxy(45,20);
			printf("Press any key to countinue...");
			getch();
			for(i=0;i<10;i++){
				printf("\n");
			}						
		}
	  }while(strcmp(u->password,cnfpassword)!=0);
	}
	return;
} 

void display(struct user u1)
{
	if(strcmp(u1.name,"admin")!=0){
    	printf("\nName of User : %s", u1.name);    	
	}
} 

void write_user()
{
    struct user data;
    input_user(&data);
    file = fopen("User.txt", "a+");
    fwrite(&data, sizeof(data), 1, file);
    fclose(file);
    return;
    
}

void display_all()
{
	system("CLS");
    struct user data;
    printf("\n\nDISPLAY ALL RECORD !!!\n");
    file = fopen("User.txt", "r+");
    printf("\n====================================\n");
    while ((fread(&data, sizeof(data), 1, file)) > 0)
    {
        display(data);
        
    } fclose(file);
}

void display_sp(char user1[20])
{
    struct user data;
    int flag = 0;
    file = fopen("User.txt", "r");
    while ((fread(&data, sizeof(data), 1, file)) > 0)
    {
        if (strcmp(data.name,user1)==0)
        {
            display(data);
            flag = 1;
        } 
    }
    fclose(file);
    if (flag == 0)
        printf("\nRecord not exist");
}

int check_user(char user[20],char password[20])
{	
	int is_valid = 0;
    struct user data;
    file = fopen("User.txt", "r");
    while ((fread(&data, sizeof(data), 1, file)) > 0)
    {
        if (strcmp(data.name,user)==0)
        {
        	if (strcmp(data.password,password)==0)
        	{
            is_valid=1;
    		}
        } 
    }
    fclose(file);       
    return is_valid;
}

int check_username(char user[20])
{	
	int is_valid = 0;
    struct user data;
    file = fopen("User.txt", "r");
    while ((fread(&data, sizeof(data), 1, file)) > 0)
    {
        if (strcmp(data.name,user)==0)
        {
            is_valid=1;
        } 
    }
    fclose(file);       
    return is_valid;
}


void modify_user()
{
	system("CLS");    
    char name1[20], password[20];
    struct user data, currentUser;
    int found = 0,i, isValidPassword = 1;
    FILE *file2;
    for(i=0;i<5;i++){
    	printf("\n");
	}
	printf("\n");
	for(i=0;i<5;i++){
    	printf("  ");
	}
    printf("Please Enter The Username: ");
    scanf("%s", &name1);
    file = fopen("User.txt", "r+");
    file2 = fopen("temp.txt", "w");
    rewind(file);
    while ((fread(&data, sizeof(data), 1, file)) > 0)
    {
        if (strcmp(data.name,name1)==0)
        {
        	found = 1;
        	currentUser = data;
        } else {
        	fwrite(&data, sizeof(data), 1, file2);
		}
    }
    if(found == 1) {
    	printf("\n");
		for(i=0;i<5;i++){
    		printf("  ");
		}
    	printf("User %s is found", name1);
    	do {
    		printf("\n\n");
			for(i=0;i<5;i++){
    			printf("  ");
			}
    		printf("Enter New Password : ");
    		scanf("%s", &password);
    		if(password == "" || strlen(password) == 0) {
    			isValidPassword = 0;
			} else {
				isValidPassword = 1;
			}
			if(!isValidPassword) {
				printf("\nInvalid Password!!\n");
			}
		}while(isValidPassword != 1);
    	strcpy(currentUser.password, password);
    	fwrite(&currentUser, sizeof(currentUser), 1, file2);
	}
    fclose(file2);
    fclose(file);
    remove("User.txt");
    rename("temp.txt", "User.txt");
    if (found == 0)
        printf("\n Record Not Found ");
    else
    	printf("\nRecord Updated.");
    getch();
}

void delete_user()
{
    char name1[20];
    struct user data;
    FILE *file2;
    printf("\n\nDelete Record");
    printf("\nPlease Enter The Username: ");
    scanf("%s", &name1);
    file = fopen("User.txt", "r");
    file2 = fopen("temp.txt", "w");
    rewind(file);
    while ((fread(&data, sizeof(data), 1, file)) > 0)
    {
        if (strcmp(data.name,name1)!=0)
        {
            fwrite(&data, sizeof(data), 1, file2);
        } 
    }
    fclose(file2);
    fclose(file);
    remove("User.txt");
    rename("temp.txt", "User.txt");
    printf("\nRecord deleted.");
}


void input_user1(struct user *u)
{
	char name[20],password[20];
	char c,a,i;
	int index = 0 ;
	char cnfpassword[20];
	int is_valid = 0 ;
	do{
	gotoxy(5,9);
	printf("Enter New Username :");
	scanf("%s",&u->name);
	if(check_username(u->name)==1){
		gotoxy(5,9);
		printf("                            ");
		gotoxy(39,18);
		printf(" \"Username Already Exist\"");
		gotoxy(45,20);
		printf(" Press any key to countinue...");
		getch();
		gotoxy(39,18);
		printf("                              ");
		gotoxy(45,20);
		printf("                              ");
	}
	}while(check_username(u->name)==1);
	fflush(stdin);
	gotoxy(5,11);
	printf("Enter New Password :");
	while((c = getch()) != 13){
       if(index < 0){
           index = 0;
           gotoxy(5,11);
       }

       if(c == 8){
           putch('\b');
           putch(NULL);
           putch('\b');
           index--;
       continue;
       }
       u->password[index++] = c;
       putch('*');
   	}
    u->password[index] = '\0';
    index = 0;
    fflush(stdin);
    gotoxy(5,13);
	printf("Enter Confirm Password :");
	while((a = getch()) != 13){
       if(index < 0){
           index = 0;
           gotoxy(5,13);
    	}

       if(a == 8){
           putch('\b');
           putch(NULL);
           putch('\b');
           index--;
       	continue;
       }
       cnfpassword[index++] = a;
       putch('*');
   	}
    cnfpassword[index] = '\0';
    index = 0;
	if(strcmp(u->password,cnfpassword)==0){
			gotoxy(35,17);
			printf(" \"\"Congratulations !! Your New Account is created\"\" ");
			gotoxy(35,19);
			printf("Press any key to countinue...");
			getch();
		}
	else{
		do{
			gotoxy(35,18);
			printf("       \"\"OOPS... !! Both passwords aren't same\"\" ");
			gotoxy(35,20);
			printf("Press any to try again...");
			getch();
			gotoxy(17,11);
			printf("                     ");
			gotoxy(17,13);
			printf("                      ");
			gotoxy(35,18);
			printf("                                                 ");
			gotoxy(35,20);
			printf("                          ");
			gotoxy(5,11);
		while((c = getch()) != 13){
	       if(index < 0){
	           index = 0;
	           gotoxy(5,11);
	       }

	       if(c == 8){
	           putch('\b');
	           putch(NULL);
	           putch('\b');
	           index--;
	       continue;
	       }
	       u->password[index++] = c;
	       putch('*');
	   	}
	    u->password[index] = '\0';
	    index = 0;
	    fflush(stdin);
		gotoxy(5,13);
		while((a = getch()) != 13){
	       if(index < 0){
	           index = 0;
	           gotoxy(5,13);
	       }

	       if(a == 8){
	           putch('\b');
	           putch(NULL);
	           putch('\b');
	           index--;
	       continue;
	       }
	       cnfpassword[index++] = a;
	       putch('*');
	   } 
	    cnfpassword[index] = '\0';
	    index = 0;
	    if(strcmp(u->password,cnfpassword)==0){
	    	is_valid = 0;
			gotoxy(35,17);
			printf(" \"\"Congratulations !! Your New Account is created\"\" ");
			gotoxy(35,19);
			printf("Press any key to countinue...");
			getch();
			for(i=0;i<10;i++){
				printf("\n");
			}						
		}
	  }while(strcmp(u->password,cnfpassword)!=0);
	}
	return;
} 
#endif 
