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
        cout << "��";
        gotoxy(0, 12);
        cout << "key �� : " << key << ", ��ǥ :  << (" << x << ", " << y << ")";

        key = _getch();
        // ����Ű�� ���� Ű����� ������ if�� ���ؼ� 224�� �ɷ�����Ѵ�.
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

void gotoxy(int x, int y) { //x, y ������ ��ǥ ��ġ ����
    COORD Pos;
    Pos.X = x;
    Pos.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), Pos);
}
void cursor(int n) {  // Ŀ�� ���̱� & �����
    HANDLE hConsole;
    CONSOLE_CURSOR_INFO ConsoleCursor; //����ü ���� 
    hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    ConsoleCursor.bVisible = n; //Ŀ�� ���⿩�� 1:����, 0:�Ⱥ��� 
    ConsoleCursor.dwSize = 1; //Ŀ�� ������ 
    SetConsoleCursorInfo(hConsole, &ConsoleCursor);
}


