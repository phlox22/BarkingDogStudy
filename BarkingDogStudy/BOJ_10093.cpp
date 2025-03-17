//백준 10093번 숫자 [정답]

#include <iostream>
#include <algorithm>

using namespace std;

int main(void)
{
	long long A, B;
	cin >> A >> B;
	if (B > A) {
		cout << B - A - 1 << '\n';
		for (long long i = A + 1; i < B; i++) cout << i << ' ';
	}
	else if (B < A) {
		cout << A - B - 1 << '\n';
		for (long long i = B + 1; i < A; i++) cout << i << ' ';
	}
	else cout << 0;
}

/* 바킹독 풀이
// Authored by : pha-ran (soft18)
// Co-authored by : BaaaaaaaaaaarkingDog
// http://boj.kr/c6e91442976c4a2a8e6c626462aceced
#include <bits/stdc++.h>
using namespace std;

int main(void){
  ios::sync_with_stdio(0);
  cin.tie(0);

  long long a, b;
  cin >> a >> b;
  if (a > b) swap(a,b);
  if (a == b || b - a == 1) cout << 0;
  else {
	cout << b - a - 1 << "\n";
	for(long long i = a+1; i < b; i++)
	  cout << i << " ";
  }
}
*/