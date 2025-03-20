//���� 13300�� ����� [����]

#include <iostream>
#include <cmath>
using namespace std;

int main(void) {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int arr[13]{};
	int N;//�л���
	int S, Y; //����, �г�
	int K; //�ѹ� �ִ� �ο���
	
	cin >> N >> K;

	for (int i = 0; i < N; i++)
	{
		cin >> S >> Y;
		if (S) arr[6 + Y]++;
		else arr[Y]++;
	}

	int count = 0;
	for (int i = 1; i < 13; i++) {
		count += ceil((float)arr[i]/(float)K);
	}
	cout << count;
	
}

/* ��ŷ�� Ǯ�� - 2���� �迭
// Authored by : OceanShape
// Co-authored by : -
// http://boj.kr/da61fda65b7d4d7c96fde827da8d1834
#include <bits/stdc++.h>
using namespace std;

int N, K, ans=0;
int s[2][7]={};  // ����/�ݺ� �л� ���� �����ϴ� �迭

int main(void){
  ios::sync_with_stdio(0);
  cin.tie(0);

  cin >> N >> K;
  // �л� �� ����
  for (int i=0; i<N; ++i) {
	int a, b;
	cin >> a >> b;
	s[a][b]++;
  }

  // �ʿ��� ���� ���� ���
  for (int i=0; i<2; ++i) {
	for (int j=1; j<7; ++j) {
	  // ������ �ʿ��� ��ŭ ���� ���� �߰�
	  ans += s[i][j] / K;
	  // �л��� ���� ���, �ϳ��� ���� �� �ʿ��ϹǷ� ���� ���� �߰�
	  if (s[i][j] % K) ++ans;
	}
  }
  cout << ans;
}
*/