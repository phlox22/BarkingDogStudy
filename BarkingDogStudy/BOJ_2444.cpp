//백준 2444번 별찍기-7 [정답]
#include <iostream>

using namespace std;

int main(void) {
	int N;
	cin >> N;
	for (int i = 1; i <= N; i++) {
		int j = 0;
		for (; j < N - i; j++) cout << ' ';
		for (int j = 0; j < 2*i-1; j++) cout << '*';
		cout << '\n';
	}
	for (int i = N-1; i > 0; i--) {
		int j = 0;
		for (; j < N - i; j++) cout << ' ';
		for (int j = 0; j < 2 * i- 1; j++) cout << '*';
		cout << '\n';
	}
}