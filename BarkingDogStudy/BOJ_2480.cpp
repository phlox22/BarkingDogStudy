//백준 2480번 주사위 세개 [정답]
#include <iostream>
#include <algorithm>
using namespace std;

int main(void) {
	int d[3];
	cin >> d[0] >> d[1] >> d[2];
	if (d[0] == d[1] && d[1] == d[2]) cout << 10000 + d[0] * 1000;
	else if (d[0] == d[1]) cout << 1000 + d[0] * 100;
	else if (d[0] == d[2]) cout << 1000 + d[0] * 100;
	else if (d[1] == d[2]) cout << 1000 + d[1] * 100;
	else
	{
		sort(d, d + 3);
		cout << d[2] * 100;
	}
}
/*바킹독
#include <bits/stdc++.h>
using namespace std;

int main(void){
  ios::sync_with_stdio(0);
  cin.tie(0);

  int a, b, c;
  cin >> a >> b >> c;
  if(a == b && b == c) cout << 10000 + a*1000;
  else if(a == b || a == c) cout << 1000 + a*100;
  else if(b == c) cout << 1000 + b*100;
  else cout << max({a,b,c}) * 100;
}
*/