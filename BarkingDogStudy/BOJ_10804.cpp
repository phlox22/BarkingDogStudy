//���� 10804�� ī�� ����ġ

#include <iostream>

using namespace std;

int main(void) {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int arr[20] = { 1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20 };
	for (int i = 0; i < 10; i++)
	{
		int A, B;
		cin >> A >> B;
		for (int j = A-1,k=B-1 ;j !=k && j-k!=1;j++,k--)
		{
			int t = arr[k];
			arr[k] = arr[j];
			arr[j] = t;
		
		}
	}
	for (int i = 0; i < 20; i++) cout << arr[i] << ' ';
}

/* ��ŷ�� Ǯ�� 1
* // Authored by : wogha95
// Co-authored by : BaaaaaaaaaaarkingDog
// http://boj.kr/443a4e33d87c4916956eb95218bad0ac
#include <bits/stdc++.h>
using namespace std;

int num[21];

// ī�带 �������� ���� �Լ�
void reverse(int a, int b){
  for(int i = 0; i < (b - a + 1) / 2; i++)
    swap(num[a+i], num[b-i]);
}

int main(void){
  ios::sync_with_stdio(0);
  cin.tie(0);
    
  for(int i = 1; i <= 20; i++) num[i] = i;
    
  for(int i = 1; i <= 10; i++) {
    int a, b;
    cin >> a >> b;        
    reverse(a, b);
  }
    
  for(int i = 1; i <= 20; i++) cout << num[i] << ' ';
}
*/

/*��ŷ�� Ǯ�� 2
// Authored by : BaaaaaaaaaaarkingDog
// Co-authored by : -
// http://boj.kr/4c29334a05624e9b88fde38677834a97
#include <bits/stdc++.h>
using namespace std;

int num[21];

int main(void){
  ios::sync_with_stdio(0);
  cin.tie(0);

  for(int i = 1; i <= 20; i++) num[i] = i;

  for(int i = 1; i <= 10; i++) {
	int a, b;
	cin >> a >> b;
	reverse(num+a, num+b+1);
  }

  for(int i = 1; i <= 20; i++) cout << num[i] << ' ';
}


//STL reverse�� �̿��� Ǯ��
*/
