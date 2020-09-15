#ifndef Booking_details22  //begin header guard
#define Booking_details22
#include "bookingStructHeader.h"
#include "User_data.h"
#include<string.h>
FILE *file2;
void carlist();
void selectCar(struct booking *b);
void selectdate(struct booking *b);
void display_data_booking(struct booking b, int booking_no);
void delete_booking(char name[20]);
void display_all_booking();

void makebooking(struct booking *b){
		int hours, minutes, seconds, day, month, year;
		time_t t;   
    	time(&t);
    	b->creation = *localtime(&t);
    	b->creation.tm_mon += 1;
    	b->creation.tm_year += 1900;
		carlist();
		selectCar(b);
		selectdate(b);
		gotoxy(33,19);
		printf("\" Congratulation You Have Made Your Booking");
		gotoxy(35,21);
		printf(" Sucessfully on %s \"",ctime(&t));
		gotoxy(38,23);
		printf("Press any key to countinue...");
		getch();	
}

void selectCar(struct booking *b) {
	int n;
	gotoxy(52,22);
	scanf("%d",&n);
	switch(n) {
			case 1:
			strcpy(b->carName, "Convertible Audi A3 Cabriolet");
			return;
			case 2:
			strcpy(b->carName, "Bugatti Veyron");
			return;
			case 3:
			strcpy(b->carName, "Lamborghini Veneno Roadster");
			return;
			case 4:
			strcpy(b->carName, "Mercedes Benz Maybach Exelero");
			return;
			case 5:
			strcpy(b->carName, "Rolls Royce Sweptail");
			return;
			default:
			strcpy(b->carName, "MARUTI");
			return;
	}
}
	
void write_userbooking(char name[20])
{
    struct booking data;
    makebooking(&data);
    strcpy(data.username, name);
    file2 = fopen("Booking.txt", "a+");
    fwrite(&data, sizeof(struct booking), 1, file2);
    fclose(file2);
    return;
    
}

void carlist(){
	int choice;
	system("CLS");  
	int i,j,k=0;
	for(i=0;i<6;i++){
		printf("\n");
	}
	for(i=0 ;i<27;i++){
		printf(" ");
	}
	for(i =0 ;i<38;i++){
		printf("%c",178);
		Sleep(10);
		if(i==19){
			printf("  Booking Page  ");
			Sleep(10);
		}	
	}
	for(i=0;i<18;i++){
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
			printf("          **** Car list **** ");
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
			printf("1.Convertible Audi A3 Cabriolet");	
			printf("                 %c",178);	
		}
		if(i==7){
			for(k=0;k<4;k++){
				printf(" ");
			}
			printf("2.Bugatti Veyron");	
			printf("                                %c",178);	
		}
		if(i==9){
			for(k=0;k<4;k++){
				printf(" ");
			}
			printf("3.Lamborghini Veneno Roadster");	
			printf("                   %c",178);	
		}
		if(i==11){
			for(k=0;k<4;k++){
				printf(" ");
			}
			printf("4.Mercedes Benz Maybach Exelero");	
			printf("                 %c",178);	
		}
		
		if(i==13){
			for(k=0;k<4;k++){
				printf(" ");
			}
			printf("5.Rolls Royce Sweptail");	
			printf("                          %c",178);	
		}
		
		if(i==15){
			for(k=0;k<4;k++){
				printf(" ");
			}
			printf("Enter Your Choice :");	
			printf("                             %c",178);	
		}
		
		
		if(i!=2 && i!=3 && i!=5 && i!=7 && i!=9 && i!=11 && i!=13 && i!=15){
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
}

void selectdate(struct booking *b){
	int i,j,k;
	system("CLS");  
	for(i=0;i<6;i++){
		printf("\n");
	}
	for(i=0 ;i<27;i++){
		printf(" ");
	}
	for(i =0 ;i<40;i++){
		printf("%c",178);
		Sleep(10);
		if(i==21){
			printf("  Booking Page  ");
			Sleep(10);
		}	
	}
	for(i=0;i<18;i++){
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
			printf("  **** Info About Date And Time **** ");
			printf("         %c",178);
		}
		if(i==3){
			for(k=0;k<10;k++){
				printf(" ");
			}
			for(k=0;k<34;k++){
				printf("%c",196);
			}
			printf("          %c",178);			
		}
		if(i==5){
			for(k=0;k<4;k++){
				printf(" ");
			}
			printf("1.Enter Booking date (dd/mm/yy)    : ");	
			printf("             %c",178);	
		}
		if(i==7){
			for(k=0;k<4;k++){
				printf(" ");
			}
			printf("2.How many car do you want to rent :");	
			printf("              %c",178);	
		}
		if(i==9){
			for(k=0;k<4;k++){
				printf(" ");
			}
			printf("3.For how many days you want car  :");	
			printf("               %c",178);	
		}
							
		if(i!=2 && i!=3 && i!=5 && i!=7 && i!=9){
			for(k=0;k<54;k++){
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
		for(i =0 ;i<56;i++){
			printf("%c",178);
			Sleep(10);	
		}
		for(i=0;i<10;i++){
			printf("\n");
		}
		gotoxy(69,12);
		scanf("%d",&b->booking_on.tm_mday);
		gotoxy(72,12);
		printf("/");
		gotoxy(74,12);
		scanf("%d",&b->booking_on.tm_mon);
		gotoxy(77,12);
		printf("/");
		gotoxy(79,12);
		scanf("%d",&b->booking_on.tm_year);
		gotoxy(69,14);
		scanf("%d",&b->qty);
		gotoxy(69,16);
		scanf("%d",&b->days);
}

void display_booking(char user1[20])
{	
	system("CLS"); 
    struct booking data;
    int flag = 0;
    file2 = fopen("Booking.txt", "r+");
    rewind(file2);
    int booking_no = 1;
    while (fread(&data, sizeof(data), 1, file2))
    {
        if (strcmp(data.username,user1)==0)
        {
            display_data_booking(data, booking_no);
            flag = 1;
            booking_no++;
        } 
       
    }
    fclose(file2);
    if (flag == 0)
        printf("\nRecord not exist");
        
}

void display_data_booking(struct booking b, int booking_no)
{
	printf("\n        ----------Booking deatils-----------");
	printf("\n       Booking No.   : %d              ",booking_no);
    printf("\n       Booked car    : %s              ", b.carName);
    printf("\n       Car quantity  : %d              ",b.qty);
    printf("\n       Days for rent : %d              ",b.days);
    printf("\n       creation date : %02d/%02d/%d    ",b.creation.tm_mday,b.creation.tm_mon,b.creation.tm_year);
    printf("\n       Booking date  : %02d/%02d/20%02d    ",b.booking_on.tm_mday,b.booking_on.tm_mon,b.booking_on.tm_year);
    printf("\n      -------------------------------------");
    printf("\n");
} 

void display_bookings(struct booking b, int booking_no)
{
	printf("\n        ----------Booking deatils-----------");
	printf("\n       Booking No.   : %d              ",booking_no);
	printf("\n       User name     : %s              ",b.username);
    printf("\n       Booked car    : %s              ",b.carName);
    printf("\n       Car quantity  : %d              ",b.qty);
    printf("\n       Days for rent : %d              ",b.days);
    printf("\n       creation date : %02d/%02d/%d    ",b.creation.tm_mday,b.creation.tm_mon,b.creation.tm_year);
    printf("\n       Booking date  : %02d/%02d/20%02d    ",b.booking_on.tm_mday,b.booking_on.tm_mon,b.booking_on.tm_year);
    printf("\n      -------------------------------------");
    printf("\n");
} 

void delete_booking(char name[20])
{
    int index;
    int booking_no = 1;
    struct booking data;
    FILE *file3;
    system("CLS");
    display_booking(name);
    printf("\n\nDelete Record");
    printf("\nPlease Enter The Index No: ");
    scanf("%d", &index);
    file2 = fopen("Booking.txt", "r");
    file3 = fopen("temp2.txt", "a");
    rewind(file2);
    while ((fread(&data, sizeof(data), 1, file2)) > 0)
    {
        if (index != booking_no)
        {
            fwrite(&data, sizeof(data), 1, file3);
        } 
        booking_no ++;
    }
    
    fclose(file3);
    fclose(file2);
    remove("Booking.txt");
    rename("temp2.txt", "Booking.txt");
    printf("\nRecord deleted.");
}

void display_all_booking()
{
	system("CLS"); 
    struct booking data;
    int flag = 0;
    file2 = fopen("Booking.txt", "r+");
    rewind(file2);
    int booking_no = 1;
    while (fread(&data, sizeof(data), 1, file2))
    {
            display_bookings(data, booking_no);
            flag = 1;
            booking_no++;
       
    }
    fclose(file2);
    getch();
}

void display_result()
{
	system("CLS"); 
    struct booking data;
    int flag = 0;
    file2 = fopen("Booking.txt", "r+");
    rewind(file2);
    int car_no_1 = 1;
    int car_no_2 = 1;
    int car_no_3 = 1;
    int car_no_4 = 1;
    int car_no_5 = 1;
    while (fread(&data, sizeof(data), 1, file2))
    {
        if (strcmp(data.carName,"Convertible Audi A3 Cabriolet")==0)
        {
            car_no_1 ++;
        }
        if (strcmp(data.carName,"Bugatti Veyron")==0)
        {
            car_no_2 ++;
        }
        if (strcmp(data.carName,"Lamborghini Veneno Roadster")==0)
        {
            car_no_3 ++;
        }
        if (strcmp(data.carName,"Mercedes Benz Maybach Exelero")==0)
        {
            car_no_4 ++;
        }
        if (strcmp(data.carName,"Rolls Royce Sweptail")==0)
        {
            car_no_5 ++;
        }
    }
    	printf("\n");
    	printf("\n");
    	printf("\n");
    	printf("\n");
    	printf("\n        -------Overall Result Of Rented Cars--------\n");
    	printf("\n            1.Convertible Audi A3 Cabriolet : %d",car_no_1);
        printf("\n            2.Bugatti Veyron                : %d",car_no_2);
        printf("\n            3.Lamborghini Veneno Roadste    : %d",car_no_3);
        printf("\n            4.Mercedes Benz Maybach Exelero : %d",car_no_4);
        printf("\n            5.Rolls Royce Sweptail          : %d",car_no_5);
    fclose(file2);
    getch();
}

void display_sp_booking()
{
    struct booking data;
    int flag = 0;
    display_all();
    char name[20];
    int booking_no = 1;
    printf("\n\nPlease enter the username: ");
    scanf("%s", &name);
    file2 = fopen("Booking.txt", "r");
    rewind(file2);
    while (fread(&data, sizeof(data), 1, file2))
    {
        if (strcmp(data.username,name)==0)
        {
            display_data_booking(data, booking_no);
            flag = 1;
            booking_no++;
        } 
       
    }
    fclose(file2);
    if (flag == 0)
        printf("\nRecord not exist");
}
#endif 
