//���� 3272�� �� ���� �� -> �ٽ� Ǯ��� | �޸� �Ҵ�

#include <iostream>
#include <algorithm>
using namespace std;

int main(void) {
	int N;
	cin >> N;
	int* arr = new int[N];

	for (int i = 0; i < N; i++) {
		cin >> arr[i];
	}

	int x;
	cin >> x;
	int* checkX = new int[2000001]();

	int count = 0;

	for (int i = 0; i < N; i++) {
		if (x-arr[i]>0 && checkX[x - arr[i]]) count++;
		checkX[arr[i]]++;
	}
	cout << count;

	delete[] arr;
	delete[] checkX;

	return 0;
}
/*��ŷ�� Ǯ�� 1
* // Authored by : BaaaaaaaaaaarkingDog
// Co-authored by : -
// http://boj.kr/fc842a288ef843e49e2fe5b6a8bbcf5e
#include <bits/stdc++.h>
using namespace std;

int a[1000001]={};
// �� �ڿ����� ���� ���θ� �����ϴ� �迭, �Ʒ����� x-a[i]�� 1000000���� ū ��츦 ����ó���ϱ� �Ⱦ �׳� �迭�� �ִ� 200������ ����
bool occur[2000001];
int n, x;

int main(void){
  ios::sync_with_stdio(0);
  cin.tie(0);

  int ans = 0;
  cin >> n;
  for(int i = 0; i < n; i++) cin >> a[i];
  cin >> x;

  for (int i = 0; i < n; i++) {
    // x-a[i]�� �����ϴ��� Ȯ��
    if(x-a[i] > 0 && occur[x-a[i]]) ans++;
    occur[a[i]] = true;
  }
  cout << ans;
}

/*
�������⵵ O(2000000), �ð����⵵ O(n)�� Ǯ�̰� ����. ���� �Է� ���Ŀ���
x�� a �迭���� ���� �־����ٸ� int a[] �迭�� �ʿ䰡 ������.
*/

/*��ŷ�� Ǯ�� 2
* // Authored by : OceanShape
// Co-authored by : BaaaaaaaaaaarkingDog
// http://boj.kr/2c0c9a326c174019bdaca18ea29b2be8
#include <bits/stdc++.h>
using namespace std;

// �� �ڿ����� ���� ���θ� �����ϴ� �迭, �迭�� ũ�⸦ 200������ �ξ�
// 25��° �ٿ��� x-i�� ������ ������ üũ���� �ʾƵ� �ǰԲ� �ߴ�.
int a[2000001]={};

int main(void){
  ios::sync_with_stdio(0);
  cin.tie(0);

  int n, t, x, ans=0;
  cin >> n;
  for (int i=0; i<n; ++i) {
    cin >> t;
    a[t]++;
  }

  cin >> x;
  for (int i = 1; i < (x+1)/2; ++i) {
    // ���� x�� �Ǵ� ���� �ٸ� �ڿ��� (i,x-i)�� ������ ���
    if (a[i]==1 && a[x-i]==1) ans++;
  }
  cout << ans;
}

/*
x�� ¦���� ������ (x/2 - 1)����, Ȧ���� ������ (x-1)/2���� Ž���� �� �ֵ��� �ϱ� ���ؼ�
i < (x+1)/2�� ����. ���� x�� 10�� �� / 11�� ���� �����غ��� ���� ����
�� �ڵ�� O(n+x)�� ����, x�� �ִ� 200���̹Ƿ� ������� ������ ������ O(n)�� ���ؼ��� ����.
*/
*/