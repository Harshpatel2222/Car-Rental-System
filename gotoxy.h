#ifndef GOTO_XY  //begin header guard
#define GOTO_XY
#include<Windows.h>
void gotoxy(int x, int y);
void gotoxy(int x, int y){
	COORD coord;
	coord.X = x;
	coord.Y = y;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}

#endif //end header guard
