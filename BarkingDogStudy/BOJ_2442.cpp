//백준 2442번 별 찍기-5 [정답]

#include <iostream>

using namespace std;

int main(void) {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int N;
	cin >> N;
	for (int i = 1; i <= N; i+=1) {
		for (int j = 0; j < N-i; j++) cout << ' ';
		for (int j = 0; j < (2 * i - 1) ; j++) cout << '*';
		
		cout << '\n';
	}
}