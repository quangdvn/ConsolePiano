#include <iostream>
#include <windows.h>
#include "mmsystem.h"
#include <conio.h>
#include "Draw.h"
#include "Play_Main.h"
using namespace std;

// An con tro man hinh console
void Nocursortype()
{
	CONSOLE_CURSOR_INFO Info;
	Info.bVisible = FALSE;
	Info.dwSize = 20;
	SetConsoleCursorInfo(GetStdHandle(STD_OUTPUT_HANDLE), &Info);
}

// Di chuyen con tro chuot trong console
void gotoxy(short x,short y)
{
    HANDLE hConsoleOutput;
    COORD Cursor_an_Pos = { x,y};
    hConsoleOutput = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleCursorPosition(hConsoleOutput , Cursor_an_Pos);
}

// Dat mau cho console
void setcolor(int k)
{
	HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(hConsole, k);
}

void Play()
{
	while(1)
	{


	char c;
	if(kbhit())
	{
		c=getch();

			if(c=='1') PlaySound("library/f#2.wav", NULL, SND_ASYNC);
			else if (c=='2') PlaySound("library/g#2.wav", NULL, SND_ASYNC);
			else if (c=='3') PlaySound("library/a#2.wav", NULL, SND_ASYNC);
			else if (c=='4') PlaySound("library/c#3.wav", NULL, SND_ASYNC);
			else if (c=='5') PlaySound("library/d#3.wav", NULL, SND_ASYNC);
			else if (c=='6') PlaySound("library/f#3.wav", NULL, SND_ASYNC);
			else if (c=='7') PlaySound("library/G#3.wav", NULL, SND_ASYNC);
			else if (c=='8') PlaySound("library/A#3.wav", NULL, SND_ASYNC);
			else if (c=='9') PlaySound("library/C#4.wav", NULL, SND_ASYNC);
			else if (c=='0') PlaySound("library/D#4.wav", NULL, SND_ASYNC);
			else if (c=='-') PlaySound("library/F#4.wav", NULL, SND_ASYNC);
			else if (c=='=') PlaySound("library/G#4.wav", NULL, SND_ASYNC);
			else if (c=='/') PlaySound("library/a#4.wav", NULL, SND_ASYNC);
			else if (c=='q') PlaySound("library/f2.wav", NULL, SND_ASYNC);
			else if (c=='w') PlaySound("library/g2.wav", NULL, SND_ASYNC);
			else if (c=='e') PlaySound("library/a2.wav", NULL, SND_ASYNC);
			else if (c=='r') PlaySound("library/b2.wav", NULL, SND_ASYNC);
			else if (c=='t') PlaySound("library/c3.wav", NULL, SND_ASYNC);
			else if (c=='y') PlaySound("library/d3.wav", NULL, SND_ASYNC);
			else if (c=='u') PlaySound("library/e3.wav", NULL, SND_ASYNC);
			else if (c=='a') PlaySound("library/f3.wav", NULL, SND_ASYNC);
			else if (c=='s') PlaySound("library/g3.wav", NULL, SND_ASYNC);
			else if (c=='d') PlaySound("library/A3.wav", NULL, SND_ASYNC);
			else if (c=='f') PlaySound("library/B3.wav", NULL, SND_ASYNC);
			else if (c=='g') PlaySound("library/C4.wav", NULL, SND_ASYNC);
			else if (c=='h') PlaySound("library/D4.wav", NULL, SND_ASYNC);
			else if (c=='j') PlaySound("library/E4.wav", NULL, SND_ASYNC);
			else if (c=='k') PlaySound("library/F4.wav", NULL, SND_ASYNC);
			else if (c=='l') PlaySound("library/G4.wav", NULL, SND_ASYNC);
			else if (c==';') PlaySound("library/a4.wav", NULL, SND_ASYNC);
			else if (c=='\'') PlaySound("library/b4.wav", NULL, SND_ASYNC);
			//else if (c=='`') PlaySound(NULL,NULL,NULL);
			else if (c=='z') break;

			if(c=='1') ChangeColorBlack(3);
  		else if(c=='2') ChangeColorBlack(8);
  		else if(c=='3') ChangeColorBlack(13);
  		else if(c=='4') ChangeColorBlack(23);
  		else if(c=='5') ChangeColorBlack(28);
  		else if(c=='6') ChangeColorBlack(38);
  		else if(c=='7') ChangeColorBlack(43);
  		else if(c=='8') ChangeColorBlack(48);
  		else if(c=='9') ChangeColorBlack(58);
  		else if(c=='0') ChangeColorBlack(63);
  		else if(c=='-') ChangeColorBlack(73);
  		else if(c=='=') ChangeColorBlack(78);
  		else if(c=='/') ChangeColorBlack(83);
  		else if(c=='q') ChangeColorWhite1(0);
  		else if(c=='w') ChangeColorWhite1(5);
  		else if(c=='e') ChangeColorWhite1(10);
  		else if(c=='r') ChangeColorWhite2(15);
  		else if(c=='t') ChangeColorWhite1(20);
  		else if(c=='y') ChangeColorWhite1(25);
  		else if(c=='u') ChangeColorWhite2(30);
  		else if(c=='a') ChangeColorWhite1(35);
  		else if(c=='s') ChangeColorWhite1(40);
  		else if(c=='d') ChangeColorWhite1(45);
  		else if(c=='f') ChangeColorWhite2(50);
  		else if(c=='g') ChangeColorWhite1(55);
  		else if(c=='h') ChangeColorWhite1(60);
  		else if(c=='j') ChangeColorWhite2(65);
  		else if(c=='k') ChangeColorWhite1(70);
  		else if(c=='l') ChangeColorWhite1(75);
  		else if(c==';') ChangeColorWhite1(80);
  		else if(c=='\'') ChangeColorWhite2(85);
	}
}



}


