//���� 2752�� �������� [����]

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
/*[��ŷ�� Ǯ��]
#include <bits/stdc++.h>
using namespace std;

int main(void){
  ios::sync_with_stdio(0);
  cin.tie(0);

  int a, b, c; // �Է�
  cin >> a >> b >> c;
  int d, e, f; // ũ�� ������ ����� �� ��
  d = min({a,b,c});
  f = max({a,b,c});
  e = a+b+c-d-f;
  cout << d << ' ' << e << ' ' << f;
}
*/