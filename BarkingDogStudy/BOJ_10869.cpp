//백준 10869번 사칙연산 [정답]
#include <iostream>
using namespace std;

int main(void) {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int A, B;

	cin >> A >> B;
	cout << A + B << '\n';
	cout << A - B << '\n';
	cout << A * B << '\n';
	cout << A / B << '\n';
	cout << A % B;

}