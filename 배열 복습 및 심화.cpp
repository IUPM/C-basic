// �迭�� ���� ���ظ� �ٽ� �����Ѵ�.
#pragma warning(disable:4996)


// ���ڿ��� ��쿡�� array�� ���� �� �̿ܿ���, 
//std::string�� �̿��Ͽ� �ٷ� �����ϴ� ����� �ִ�.
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
// ������ �迭

// 2���� �迭�� ���������δ� 1���������� ����

// ������ �迭�� ������ int x = [��][��] ex) int array = [2][3], 2�� 3���� �ȴ�.

int main()
{
	char s1[5];
	char s2[5] = "soft";
	strcpy(s1, s2);
	cout << "s1= " << s1 << ", s2 = " << s2 << endl;
}