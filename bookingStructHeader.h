#ifndef STRUCT_BOOKING  //begin header guard
#define STRUCT_BOOKING
#include<time.h>

struct booking
{
    char carName[30];
    char username[20];
    int days;
    int qty;
    struct tm creation;
    struct tm booking_on;
};

#endif //STRUCT_HEADER //end header guard
