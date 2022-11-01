#include <iostream>
#include <conio.h>
#include <windows.h>

#define UP 72
#define	DOWN 80
#define LEFT 75
#define RIGHT 77

using namespace std;

void gotoxy(int x, int y);
void cursor(int n);

int main()
{
    int key = 0, x = 0, y = 0;
    while (1)
    {
        cursor(0);
        system("cls");
        gotoxy(x, y);
        cout << "▶";
        gotoxy(0, 12);
        cout << "key 값 : " << key << ", 좌표 :  << (" << x << ", " << y << ")";

        key = _getch();
        // 방향키는 복합 키워드기 때문에 if를 통해서 224를 걸러줘야한다.
        if (key == 224)
        {
            key = _getch();            
        }
        if (key == UP)
        {
            y--;
            if (y < 0)
            {
                y = 0;
            }
        }
        else if (key == DOWN)
        {
            y++;
            if (y > 10)
            {
                y = 10;
            }
        }
        else if (key == LEFT)
        {
            x--;
            if (x < 0)
            {
                x = 0;
            }
        }
        else if (key == RIGHT)
        {
            x++;
            if (x > 10)
            {
                x = 10;
            }
        }
    }
	return 0;
}

void gotoxy(int x, int y) { //x, y 축으로 좌표 위치 지정
    COORD Pos;
    Pos.X = x;
    Pos.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), Pos);
}
void cursor(int n) {  // 커서 보이기 & 숨기기
    HANDLE hConsole;
    CONSOLE_CURSOR_INFO ConsoleCursor; //구조체 선언 
    hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    ConsoleCursor.bVisible = n; //커서 노출여부 1:보임, 0:안보임 
    ConsoleCursor.dwSize = 1; //커서 사이즈 
    SetConsoleCursorInfo(hConsole, &ConsoleCursor);
}


