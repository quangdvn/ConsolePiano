#include <iostream>
#include <windows.h>
#include "mmsystem.h"
#include <conio.h>
#include "Draw.h"
#include "Play_Main.h"


using namespace std;

int main()
{
	system("color 98");
	Nocursortype();
	DrawPiano();
    {
        char c;
        Play();
    }
	return 0;
}
