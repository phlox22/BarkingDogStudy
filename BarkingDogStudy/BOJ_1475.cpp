//���� 1475�� ���ȣ
#include <iostream>
#include <cmath>

using namespace std;
const int MAXNUMBER=10;

int main(void) {
	ios::sync_with_stdio(0);
	cin.tie(0);

	long long N;
	int arr[MAXNUMBER] = {0,};

	cin >> N;
	while(N>0) {
		/*cout << N % 10<<'\n';*/
		arr[N % 10]++;
		N /= 10;
	}
	
	/*for(int i=0;i<MAXNUMBER;i++) cout << arr[i] << '\n';*/
	int maxNumber = 0, maxElement = 0;
	if(arr[6]>=arr[9])
	{
		maxNumber = arr[6];
		maxElement = 6;
	}
	else {
		maxNumber = arr[9];
		maxElement = 9;
	}
	
	for (int i = 0; i < MAXNUMBER; i++)
	{
		
		if (i == 6 || i == 9) continue;
		else if (arr[i] >= maxNumber)
		{
			maxNumber = arr[i];
			maxElement = i;
		}
	}

	if (maxElement == 6 || maxElement == 9) cout << ceil(((double)(arr[6] + arr[9])) / 2);
	else cout << maxNumber;
}

/* ��ŷ�� ���� Ǯ��
* // Authored by : OceanShape
// Co-authored by : BaaaaaaaaaaarkingDog, kiiimiiin
// http://boj.kr/a7a4aa95c4ee446990f868f926993161
#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  
  int N, a[10] = {}, ans = 0;
  cin >> N;
  
  // �ڸ��� ����
  while(N){
    a[N%10]++;
    N /= 10;
  }

  for(int i = 0; i < 10; i++){
    if(i == 6 || i == 9) continue;
    ans = max(ans, a[i]);
  }
  // (a[6]+a[9])/2�� �ø��� ���� 6, 9�� ���� �ʿ��� ��Ʈ�� ���̹Ƿ� (a[6]+a[9]+1)/2�� ���
  ans = max(ans, (a[6]+a[9]+1)/2);
  cout << ans;
}
*/