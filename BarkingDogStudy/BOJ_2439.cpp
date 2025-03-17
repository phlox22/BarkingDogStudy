//백준 2439번 별찍기-2 [정답]

#include <iostream>

using namespace std;

int main(void) {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int N;
	cin >> N;
	for (int i = 1; i < N+1; i++) {
		for (int j = 0; j < N-i ; j++) {
			cout << ' ';
		}
		for (int j = 0; j < i; j++) {
			cout << '*';
		}
		cout << '\n';
	}
}

/*바킹독 풀이
// Authored by : wogha95
// Co-authored by : -
// http://boj.kr/24752bdbcfe543f9b4fbad61b5c3e46c
#include <bits/stdc++.h>
using namespace std;

int main(void){
  ios::sync_with_stdio(0);
  cin.tie(0);

  int N;
  cin >> N;

  for(int i = 0; i < N; i++) {
	int j = 0;
	for( ; j < N - i - 1; j++)  cout << ' ';
	for( ; j < N; j++)  cout << '*';
	cout << "\n";
  }
}
*/