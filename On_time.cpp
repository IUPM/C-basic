#include<iostream>
#include<ctime>
#include<cstdlib>

using namespace std;
void createArray(int* num);
void extractEvenArray(int* input1, int* ev);
void extractOddArray(int* input2, int* od);              // 함수 원형

int main() {

    int num[10];

    int evenArr[10];

    int oddArr[10];                                 // 배열 초기화



    //5~50사이의 랜덤한 정수를 10개가지는 가지는 배열 생성

    createArray(num);
    cout << "Random Array Elements = ";
    for (int i = 0; i < 10; i++) {
        cout << " " << num[i];
    }
    cout << endl;



    //랜덤한 정수를 가지는 배열을 입력받아, 짝수인 원소를 추출하는 배열 생성

    extractEvenArray(num, evenArr);


    ////랜덤한 정수를 가지는 배열을 입력받아, 홀수인 원소를 추출하는 배열 생성

    extractOddArray(num, oddArr);

    return 0;
}

void createArray(int* num)
{
    srand(time(NULL));                              // 실행할 때마다 시간이 다른것을 이용하여 난수를 발생시키는 srand
    for (int i = 0; i < 10; i++)
        num[i] = (rand() % 46) + 5;                     // 46으로 나눈 나머지는 항상 0~45이고 그 나머지에 5를 더하면 5~50의 범위가 설정됨


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