#include <iostream>
#include <windows.h>
#include <time.h>

#define scount 80
#define screen_x 80
#define screen_y 25

HANDLE rHnd;
DWORD fdwMode;

HANDLE wHnd;
CHAR_INFO consoleBuffer[screen_x * screen_y];
COORD bufferSize = { screen_x, screen_y };
COORD characterPos = { 0, 0 };
SMALL_RECT windowSize = { 0, 0, screen_x - 1, screen_y - 1 };
COORD star[scount];
COORD ship;
using namespace std;

int posX = screen_x / 2;
int posY = screen_y - 1;
int check = 0;
bool play = true;
int colorCode = 7;

void setcursor(bool visible)
{
	HANDLE console = GetStdHandle(STD_OUTPUT_HANDLE);
	CONSOLE_CURSOR_INFO lpCursor;
	lpCursor.bVisible = visible;
	lpCursor.dwSize = 20;
	SetConsoleCursorInfo(console, &lpCursor);
}

int setMode()
{
	rHnd = GetStdHandle(STD_INPUT_HANDLE);
	fdwMode = ENABLE_EXTENDED_FLAGS | ENABLE_WINDOW_INPUT | ENABLE_MOUSE_INPUT;
	SetConsoleMode(rHnd, fdwMode);
	return 0;
}

int setConsole(int x, int y)
{
	wHnd = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleWindowInfo(wHnd, TRUE, &windowSize);
	SetConsoleScreenBufferSize(wHnd, bufferSize);
	return 0;
}
void clear_buffer()
{
	for (int y = 0; y < screen_y; ++y)
	{
		for (int x = 0; x < screen_x; ++x)
		{
			consoleBuffer[x + screen_x * y].Char.AsciiChar = ' ';
			consoleBuffer[x + screen_x * y].Attributes = 7;
		}
	}
}
void fill_buffer_to_console()
{
	WriteConsoleOutputA(wHnd, consoleBuffer, bufferSize, characterPos,
		&windowSize);
}
void init_star()
{
	for (int i = 0; i < scount; i++)
	{
		star[i] = { SHORT(rand() % screen_x), SHORT(rand() % screen_y) };
	}
}
void star_fall()
{
	for (int i = 0; i < scount; i++)
	{
		if (star[i].Y >= screen_y - 1)
		{
			star[i] = { SHORT(rand() % screen_x), 1 };
		}
		else
		{
			star[i] = { star[i].X, SHORT(star[i].Y + 1) };
		}
	}
}
void draw_ship(int x, int y, int color)
{
	ship = { SHORT(x), SHORT(y) };
	consoleBuffer[ship.X + screen_x * ship.Y].Char.AsciiChar = '<';
	consoleBuffer[ship.X + 1 + screen_x * ship.Y].Char.AsciiChar = '-';
	consoleBuffer[ship.X + 2 + screen_x * ship.Y].Char.AsciiChar = '>';
	consoleBuffer[ship.X + screen_x * ship.Y].Attributes = color;
	consoleBuffer[ship.X + 1 + screen_x * ship.Y].Attributes = color;
	consoleBuffer[ship.X + 2 + screen_x * ship.Y].Attributes = color;
}

void fill_star_to_buffer()
{
	for (int i = 0; i < scount; i++)
	{
		consoleBuffer[star[i].X + screen_x * star[i].Y].Char.AsciiChar = '*';
		consoleBuffer[star[i].X + screen_x * star[i].Y].Attributes = 7;
	}
}
void checkCollision()
{
	for (int i = 0; i < scount; i++)
	{
		if ((star[i].X == ship.X || star[i].X == ship.X + 1 || star[i].X == ship.X + 2) && star[i].Y == ship.Y)
		{
			star[i] = { SHORT(rand() % screen_x), 1 };
			check++;
		}
		if (check == 10)
		{
			play = false;
		}
	}
}
int main()
{
	srand(time(NULL));
	setcursor(0);
	DWORD numEvents = 0;
	DWORD numEventsRead = 0;
	setConsole(screen_x, screen_y);
	init_star();
	setMode();
	while (play)
	{
		GetNumberOfConsoleInputEvents(rHnd, &numEvents);
		if (numEvents != 0)
		{
			INPUT_RECORD* eventBuffer = new INPUT_RECORD[numEvents];
			ReadConsoleInput(rHnd, eventBuffer, numEvents, &numEventsRead);
			for (DWORD i = 0; i < numEventsRead; ++i)
			{
				if (eventBuffer[i].EventType == KEY_EVENT &&
					eventBuffer[i].Event.KeyEvent.bKeyDown == true)
				{
					if (eventBuffer[i].Event.KeyEvent.wVirtualKeyCode == VK_ESCAPE)
					{
						play = false;
					}
					else if (eventBuffer[i].Event.KeyEvent.uChar.AsciiChar == 99)
					{
						colorCode = rand() % 255 + 1;
					}
				}
				else if (eventBuffer[i].EventType == MOUSE_EVENT)
				{
					int posx = eventBuffer[i].Event.MouseEvent.dwMousePosition.X;
					int posy = eventBuffer[i].Event.MouseEvent.dwMousePosition.Y;
					if (eventBuffer[i].Event.MouseEvent.dwButtonState &
						FROM_LEFT_1ST_BUTTON_PRESSED)
					{
						colorCode = rand() % 255 + 1;
					}
					else if (eventBuffer[i].Event.MouseEvent.dwEventFlags & MOUSE_MOVED)
					{
						posX = posx;
						posY = posy;
					}
				}
			}
			delete[] eventBuffer;
		}
		star_fall();
		checkCollision();
		clear_buffer();
		fill_star_to_buffer();
		draw_ship(posX, posY, colorCode);
		fill_buffer_to_console();
		Sleep(100);
	}
	return 0;
}