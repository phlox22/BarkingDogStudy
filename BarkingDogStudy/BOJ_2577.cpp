//���� 2577�� ������ ���� [����]

#include <iostream>

using namespace std;

const int MAX_NUMBER = 10;

int main(void) {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int arr[MAX_NUMBER] = {};
	int A, B, C;
	int product;
	
	cin >> A >> B >> C;
	product = A * B * C;
	//cout << product<<'\n';

	while (product >= 10) {
		/*cout << product % 10 << '\n';*/
		arr[product%10]++;
		product /= 10;
	}
	arr[product]++;

	for (int i = 0; i < MAX_NUMBER; i++) cout << arr[i] << '\n';
}

/* ��ŷ�� ���� Ǯ��
// Authored by : BaaaaaaaaaaarkingDog
// Co-authored by : OceanShape
// http://boj.kr/fefbce1d30c9442db611909c690df1a8
#include <bits/stdc++.h>
using namespace std;

int main(void) {
  ios::sync_with_stdio(0);
  cin.tie(0);
  int A, B, C;
  cin >> A >> B >> C;
  int t=A*B*C;
  int d[10] = {};
  // ��� ����� �ڸ������� Ȯ���Ͽ� ����
  while (t>0) {
	d[t%10]++;
	t/=10;
  }
  for (int i=0; i<10; ++i) cout << d[i] << '\n';
}
*/