//백준 2440번 별 찍기-3 [정답]

#include <iostream>

using namespace std;

int main(void) {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int N;
	cin >> N;

	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N-i; j++) cout << '*';
		cout << '\n';
	}
	
}