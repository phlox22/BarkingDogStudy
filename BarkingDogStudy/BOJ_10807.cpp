//백준 10807번 개수 세기 [정답]

#include <iostream>

using namespace std;

int main(void) {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int N;
	cin >> N;
	int number;

	int v1[201] = {};
	for (int i = 0; i < N; i++) {
		cin >> number;
		v1[number+100]++;
	}
	
	int v;
	cin >> v;

	cout << v1[v+100];
}