// Solar Fox.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "iostream"
#include "conio.h"
#include "windows.h"

using namespace std;

/*Lista de Funciones*/
void Menu();
void Portada();
void gotoxy(int x, int y);
void SetColor(int Color);
void Mapa1();
void Mapa2();
void Mapa3();
void Mapa4();
void Mapa5();
void Mapa6();
void Mapa7();
void Mapa8();
void PintarMapa();

///////

int _tmain(int argc, _TCHAR* argv[])
{
	Portada();
	_getch();
	return 0;
}
void gotoxy(int x, int y)
{
	_COORD pos;
	pos.X = x;
	pos.Y = y;

	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
}
void SetColor(int color)
{
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), color);
}

