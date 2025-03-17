//백준 2576번 홀수 [정답]

#include<iostream>
using namespace std;

int main(void)
{
	int min = 100;
	int sum = 0,count = 0;
	int inputNum;
	for (int i = 0; i < 7; i++) {
		cin>>inputNum;
		if (inputNum % 2) {
			sum += inputNum;
			if (inputNum < min) min = inputNum;
			count++;
		}
	}
	if (!count) cout << -1;
	else cout << sum << '\n' << min;
}