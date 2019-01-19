#include <iostream>
#include <windows.h>
#include "mmsystem.h"
#include <conio.h>
#include "Draw.h"
#include "Play_Main.h"

using namespace std;

void DrawPiano()
{
	// Ve ria tren va 2 ben
	setcolor(8);
	gotoxy(x-2,y-2);
	cout<<"ллллллллллллллллллллллллллллллллллллллллллллллллллллллллллллллллллллллллллллллллллллллллллллл";
	gotoxy(x-1,y-1);
	cout<<"ллллллллллллллллллллллллллллллллллллллллллллллллллллллллллллллллллллллллллллллллллллллллллл";
	for(int i=y;i<y+7;i++)
	{
		gotoxy(x-1,i);
		cout<<"л";
	}
	for(int i=y-1;i<=y+7;i++)
	{
		gotoxy(x-2,i);
		cout<<"л";
	}
	for(int i=y;i<y+7;i++)
	{
		gotoxy(x+89,i);
		cout<<"л";
	}
	for(int i=y-1;i<=y+7;i++)
	{
		gotoxy(x+90,i);
		cout<<"л";
	}

		// Ve ban phim
	gotoxy(x,y);
	setcolor(15);
 	cout<<"ллл  ллл  ллл  ллллоллл  ллл  ллллоллл  ллл  ллл  ллллоллл  ллл  ллллоллл  ллл  ллл  лллл";
 	gotoxy(x,y+1);
 	cout<<"ллл  ллл  ллл  ллллоллл  ллл  ллллоллл  ллл  ллл  ллллоллл  ллл  ллллоллл  ллл  ллл  лллл";
 	gotoxy(x,y+2);
 	cout<<"ллл  ллл  ллл  ллллоллл  ллл  ллллоллл  ллл  ллл  ллллоллл  ллл  ллллоллл  ллл  ллл  лллл";
 	gotoxy(x,y+3);
 	cout<<"ллллоллллоллллоллллоллллоллллоллллоллллоллллоллллоллллоллллоллллоллллоллллоллллоллллолллл";
 	gotoxy(x,y+4);
 	cout<<"ллллоллллоллллоллллоллллоллллоллллоллллоллллоллллоллллоллллоллллоллллоллллоллллоллллолллл";
 	gotoxy(x,y+5);
 	cout<<"ллллоллллоллллоллллоллллоллллоллллоллллоллллоллллоллллоллллоллллоллллоллллоллллоллллолллл";
 	gotoxy(x,y+6);
 	cout<<"ллллоллллоллллоллллоллллоллллоллллоллллоллллоллллоллллоллллоллллоллллоллллоллллоллллолллл";

 		// Ve ria duoi
 	setcolor(8);
 	gotoxy(x-2,y+8);
 	cout<<"ллллллллллллллллллллллллллллллллллллллллллллллллллллллллллллллллллллллллллллллллллллллллллллл";
 	gotoxy(x-1,y+7);
	cout<<"ллллллллллллллллллллллллллллллллллллллллллллллллллллллллллллллллллллллллллллллллллллллллллл";

		// Ve chu thich phim den
	setcolor(142);
 	gotoxy(x+3,y-1);
  	cout<<"1";
  	gotoxy(x+8,y-1);
  	cout<<"2";
  	gotoxy(x+13,y-1);
  	cout<<"3";
  	gotoxy(x+23,y-1);
  	cout<<"4";
  	gotoxy(x+28,y-1);
  	cout<<"5";
  	gotoxy(x+38,y-1);
  	cout<<"6";
  	gotoxy(x+43,y-1);
  	cout<<"7";
  	gotoxy(x+48,y-1);
  	cout<<"8";
  	gotoxy(x+58,y-1);
  	cout<<"9";
  	gotoxy(x+63,y-1);
  	cout<<"0";
  	gotoxy(x+73,y-1);
  	cout<<"-";
  	gotoxy(x+78,y-1);
  	cout<<"=";
  	gotoxy(x+83,y-1);
  	cout<<"/";

  		// Ve chu thich phim trang
  	gotoxy(x+1,y+7);
  	cout<<"q";
  	gotoxy(x+6,y+7);
  	cout<<"w";
  	gotoxy(x+11,y+7);
  	cout<<"e";
  	gotoxy(x+16,y+7);
  	cout<<"r";
  	gotoxy(x+21,y+7);
  	cout<<"t";
  	gotoxy(x+26,y+7);
  	cout<<"y";
  	gotoxy(x+31,y+7);
  	cout<<"u";
  	gotoxy(x+36,y+7);
  	cout<<"a";
  	gotoxy(x+41,y+7);
  	cout<<"s";
  	gotoxy(x+46,y+7);
  	cout<<"d";
  	gotoxy(x+51,y+7);
  	cout<<"f";
  	gotoxy(x+56,y+7);
  	cout<<"g";
  	gotoxy(x+61,y+7);
  	cout<<"h";
  	gotoxy(x+66,y+7);
  	cout<<"j";
  	gotoxy(x+71,y+7);
  	cout<<"k";
  	gotoxy(x+76,y+7);
  	cout<<"l";
  	gotoxy(x+81,y+7);
  	cout<<";";
  	gotoxy(x+86,y+7);
  	cout<<"'";
}

// Tao hieu ung phim den
void ChangeColorBlack(int a)
{
	setcolor(5);
  	gotoxy(x+a,y);
  	cout<<"лл";
	gotoxy(x+a,y+1);
  	cout<<"лл";
  	gotoxy(x+a,y+2);
  	cout<<"лл";
  	Sleep(50);
  	setcolor(0);
  	gotoxy(x+a,y);
  	cout<<"лл";
  	gotoxy(x+a,y+1);
  	cout<<"лл";
  	gotoxy(x+a,y+2);
  	cout<<"лл";
}

// Tao hieu ung phim trang
void ChangeColorWhite1(int a)
{
	setcolor(12);
	gotoxy(x+a,y);
  	cout<<"ллл";
	gotoxy(x+a,y+1);
  	cout<<"ллл";
  	gotoxy(x+a,y+2);
  	cout<<"ллл";
  	gotoxy(x+a,y+3);
  	cout<<"лллл";
  	gotoxy(x+a,y+4);
  	cout<<"лллл";
  	gotoxy(x+a,y+5);
  	cout<<"лллл";
  	gotoxy(x+a,y+6);
  	cout<<"лллл";
  	Sleep(50);
  	setcolor(15);
  	gotoxy(x+a,y);
  	cout<<"ллл";
	gotoxy(x+a,y+1);
  	cout<<"ллл";
  	gotoxy(x+a,y+2);
  	cout<<"ллл";
  	gotoxy(x+a,y+3);
  	cout<<"лллл";
  	gotoxy(x+a,y+4);
  	cout<<"лллл";
  	gotoxy(x+a,y+5);
  	cout<<"лллл";
  	gotoxy(x+a,y+6);
  	cout<<"лллл";
}

void ChangeColorWhite2(int a)
{
	setcolor(12);
	gotoxy(x+a,y);
  	cout<<"лллл";
	gotoxy(x+a,y+1);
  	cout<<"лллл";
  	gotoxy(x+a,y+2);
  	cout<<"лллл";
  	gotoxy(x+a,y+3);
  	cout<<"лллл";
  	gotoxy(x+a,y+4);
  	cout<<"лллл";
  	gotoxy(x+a,y+5);
  	cout<<"лллл";
  	gotoxy(x+a,y+6);
  	cout<<"лллл";
  	Sleep(50);
  	setcolor(15);
  	gotoxy(x+a,y);
  	cout<<"лллл";
	gotoxy(x+a,y+1);
  	cout<<"лллл";
  	gotoxy(x+a,y+2);
  	cout<<"лллл";
  	gotoxy(x+a,y+3);
  	cout<<"лллл";
  	gotoxy(x+a,y+4);
  	cout<<"лллл";
  	gotoxy(x+a,y+5);
  	cout<<"лллл";
  	gotoxy(x+a,y+6);
  	cout<<"лллл";
}
