// snake.cpp: Definiert den Einstiegspunkt für die Konsolenanwendung.
//

#include "stdafx.h"
#include <iostream>
#include <conio.h>
#include <windows.h>

using namespace std;
bool gameOver;
const int width = 20;
const int height = 20;
int x, y, fruitX, fruitY, score;
int tailX[100], tailY[100];
int nTail;
int play;
enum eDirecton { STOP = 0, LEFT, RIGHT, UP, DOWN };
eDirecton dir;


bool Menu()
{
	int MenuSelect;

	cout << " __        _______ _     ____ ___  __  __ _____   _____ ___    ____  _   _    _    _  _______  " << endl;
	cout << " \ \      / / ____| |   / ___/ _ \|  \/  | ____| |_   _/ _ \  / ___|| \ | |  / \  | |/ / ____| " << endl;
	cout << "  \ \ /\ / /|  _| | |  | |  | | | | |\/| |  _|     | || | | | \___ \|  \| | / _ \ | ' /|  _|  " << endl;
	cout << "   \ V  V / | |___| |__| |__| |_| | |  | | |___    | || |_| |  ___) | |\  |/ ___ \| . \| |___  " << endl;
	cout << "    \_/\_/  |_____|_____\____\___/|_|  |_|_____|   |_| \___/  |____/|_| \_/_/   \_\_|\_\_____| " << endl;
                                                                                              

	cout << " __        ___ _ _                                                      ____              _         " << endl;
	cout << " \ \      / (_) | | _____  _ __ ___  _ __ ___   ___ _ __    _____   _  / ___| _ __   __ _| | _____ " << endl;
	cout << "  \ \ /\ / /| | | |/ / _ \| '_ ` _ \| '_ ` _ \ / _ \ '_ \  |_  / | | | \___ \| '_ \ / _` | |/ / _ \ " << endl;
	cout << "   \ V  V / | | |   < (_) | | | | | | | | | | |  __/ | | |  / /| |_| |  ___) | | | | (_| |   <  __/ " << endl;
	cout << "    \_/\_/  |_|_|_|\_\___/|_| |_| |_|_| |_| |_|\___|_| |_| /___|\__,_| |____/|_| |_|\__,_|_|\_\___| " << endl;
                                                                                                   
	cout << "Um das Spiel zu spielen, druecke '1'" << endl;
	cout << "Um das Spiel zu beenden, druecke '2'" << endl;

	cin >> MenuSelect;

	if (menu = 1) {		//cant tell if this is correct

		play;
	}
	else {
		Return 1;
	}
}	
void Setup()
{
	gameOver = false;
	dir = STOP;
	x = width / 2;
	y = height / 2;
	fruitX = rand() % width;
	fruitY = rand() % height;
	score = 0;
}
void Draw()
{
	system("cls"); 
	for (int i = 0; i < width + 2; i++)
		cout << "#";
	cout << endl;

	for (int i = 0; i < height; i++)
	{
		for (int j = 0; j < width; j++)
		{
			if (j == 0)
				cout << "#";
			if (i == y && j == x)
				cout << "O";
			else if (i == fruitY && j == fruitX)
				cout << "F";
			else
			{
				bool print = false;
				for (int k = 0; k < nTail; k++)
				{
					if (tailX[k] == j && tailY[k] == i)
					{
						cout << "o";
						print = true;
					}
				}
				if (!print)
					cout << " ";
			}


			if (j == width - 1)
				cout << "#";
		}
		cout << endl;
	}

	for (int i = 0; i < width + 2; i++)
		cout << "#";
	cout << endl;
	cout << "Score:" << score << endl;
}
void Input()
{
	if (_kbhit())
	{
		switch (_getch())
		{
		case 'a':
			dir = LEFT;
			break;
		case 'd':
			dir = RIGHT;
			break;
		case 'w':
			dir = UP;
			break;
		case 's':
			dir = DOWN;
			break;
		case 'x':
			gameOver = true;
			break;
		}
	}
}
void Logic()
{
	int prevX = tailX[0];
	int prevY = tailY[0];
	int prev2X, prev2Y;
	tailX[0] = x;
	tailY[0] = y;
	for (int i = 1; i < nTail; i++)

	{
		prev2X = tailX[i];
		prev2Y = tailY[i];
		tailX[i] = prevX;
		tailY[i] = prevY;
		prevX = prev2X;
		prevY = prev2Y;
	}
	switch (dir)
	{
	case LEFT:
		x--;
		break;
	case RIGHT:
		x++;
		break;
	case UP:
		y--;
		break;
	case DOWN:
		y++;
		break;
	default:
		break;
	}
	
	if (x >= width) x = 0; else if (x < 0) x = width - 1;
	if (y >= height) y = 0; else if (y < 0) y = height - 1;

	for (int i = 0; i < nTail; i++)
		if (tailX[i] == x && tailY[i] == y)
			gameOver = true;

	if (x == fruitX && y == fruitY)
	{
		score += 10;
		fruitX = rand() % width;
		fruitY = rand() % height;
		nTail++;
	}

}
int main()
{
	Menu(play); //the programm seems to have problems with this section
	while(!play)
	{
		Setup();
		while (!gameOver)
		{
			Draw();
			Input();
			Logic();
			Sleep(10);
		}
	}
	
	return 0;
}

