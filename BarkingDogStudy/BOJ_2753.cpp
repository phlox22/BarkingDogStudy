//���� 2753�� ���� [����]

//����:4�� ����̸鼭, 100�� ����� �ƴ� �� �Ǵ� 400�� ����� ��

#include <iostream>

using namespace std;

int main(void) {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int year;
	cin >> year;
	if ((year % 4 == 0 && year % 100) || !(year % 400)) cout << '1';
	else cout << '0';
}