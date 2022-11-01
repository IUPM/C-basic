// 배열에 대한 이해를 다시 정립한다.
#pragma warning(disable:4996)


// 문자열의 경우에는 array에 대한 것 이외에도, 
//std::string을 이용하여 바로 대입하는 방법도 있다.
#include <iostream>
#include <string>
using std::cout;
using std::endl;
/*int main()
{
	char name[] = { 'S','M','H' };
	for (int i = 0; i < 3; i++)
	{
		cout << name[i] << " ";
	}
}
*/
// 다차원 배열

// 2차원 배열도 물리적으로는 1차원적으로 저장

// 다차원 배열의 형식은 int x = [열][행] ex) int array = [2][3], 2열 3행이 된다.

int main()
{
	char s1[5];
	char s2[5] = "soft";
	strcpy(s1, s2);
	cout << "s1= " << s1 << ", s2 = " << s2 << endl;
}