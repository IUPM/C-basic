#include<iostream>
#include<ctime>
#include<cstdlib>

using namespace std;
void createArray(int* num);
void extractEvenArray(int* input1, int* ev);
void extractOddArray(int* input2, int* od);              // �Լ� ����

int main() {

    int num[10];

    int evenArr[10];

    int oddArr[10];                                 // �迭 �ʱ�ȭ



    //5~50������ ������ ������ 10�������� ������ �迭 ����

    createArray(num);
    cout << "Random Array Elements = ";
    for (int i = 0; i < 10; i++) {
        cout << " " << num[i];
    }
    cout << endl;



    //������ ������ ������ �迭�� �Է¹޾�, ¦���� ���Ҹ� �����ϴ� �迭 ����

    extractEvenArray(num, evenArr);


    ////������ ������ ������ �迭�� �Է¹޾�, Ȧ���� ���Ҹ� �����ϴ� �迭 ����

    extractOddArray(num, oddArr);

    return 0;
}

void createArray(int* num)
{
    srand(time(NULL));                              // ������ ������ �ð��� �ٸ����� �̿��Ͽ� ������ �߻���Ű�� srand
    for (int i = 0; i < 10; i++)
        num[i] = (rand() % 46) + 5;                     // 46���� ���� �������� �׻� 0~45�̰� �� �������� 5�� ���ϸ� 5~50�� ������ ������


}
void extractEvenArray(int* input1, int* ev) {

    int size = sizeof(ev) / sizeof(int);
    for (int i = 0; i < size; i++) {
        if (input1[i] % 2 == 0)
            ev[i] = input1[i];


    }
    cout << "Even Array Elements = ";

    for (int i = 0; i < size; i++) {

        cout << " " << ev[i];
    }
    cout << endl;


}
void extractOddArray(int* input2, int* od) {

    int size = sizeof(od) / sizeof(int);
    for (int i = 0; i < size; i++) {
        if (input2[i] % 2 == 1)
            od[i] = input2[i];

    }
    cout << "Odd Array Elements = ";

    for (int i = 0; i < size; i++) {

        cout << " " << od[i];
    }

    cout << endl;
}