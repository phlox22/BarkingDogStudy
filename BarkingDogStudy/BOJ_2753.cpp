//백준 2753번 윤년 [정답]

//윤년:4의 배수이면서, 100의 배수가 아닐 때 또는 400의 배수일 때

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