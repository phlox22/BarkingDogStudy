//백준 2441번 별찍기-4 [정답]

#include <iostream>

using namespace std;

int main(void) {
	ios::sync_with_stdio;
	cin.tie(0);

	int N;
	cin >> N;
	for (int i = 0; i < N; i++) {
		
		for (int j = 0; j < i; j++) cout << ' ';
		for (int j = 0; j < N - i; j++) cout << '*';
		cout << '\n';
	}
}
/*바킹독 풀이
// Authored by : wogha95
// Co-authored by : BaaaaaaaaaaarkingDog
// http://boj.kr/286ff628320c410e9e691600014cd18d
#include <bits/stdc++.h>
using namespace std;

int main(void){
  ios::sync_with_stdio(0);
  cin.tie(0);

  int N;
  cin >> N;

  for(int i = 0; i < N; i++) {
	int j = 0;
	for( ; j < i; j++)  cout << ' ';
	for( ; j < N; j++)  cout << '*';
	cout << "\n";
  }
}
*/