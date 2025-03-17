//백준 2752번 세수정렬 [정답]

#include <iostream>
#include <algorithm>
using namespace std;

int main(void) {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int A[3];
	cin >> A[0]>>A[1]>>A[2];
	sort(A, A + 3);
	cout << A[0] <<' ' << A[1] << ' ' << A[2];
}
/*[바킹독 풀이]
#include <bits/stdc++.h>
using namespace std;

int main(void){
  ios::sync_with_stdio(0);
  cin.tie(0);

  int a, b, c; // 입력
  cin >> a >> b >> c;
  int d, e, f; // 크기 순으로 출력할 세 수
  d = min({a,b,c});
  f = max({a,b,c});
  e = a+b+c-d-f;
  cout << d << ' ' << e << ' ' << f;
}
*/