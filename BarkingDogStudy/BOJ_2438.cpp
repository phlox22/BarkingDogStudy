//백준 2438번 별찍기-1 [정답]

#include <iostream>

using namespace std;

int main(void) {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int N;
	cin >> N;
	for (int i = 1; i < N+1; i++) {
		for(int j=0;j<i;j++) cout << '*';
		cout << '\n';
	}
}