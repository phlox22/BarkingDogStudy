//백준 2587번 대표값2 [정답]
#include <iostream>
#include <algorithm>
using namespace std;

int main(void) {
	int num[5];
	int sum = 0;
	for (int i = 0; i < 5; i++)
	{
		cin >> num[i];
		sum += num[i];
	}
	sort(num, num + 5);
	cout << sum / 5 << '\n' << num[2];
}