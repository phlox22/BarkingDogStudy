//���� 2490�� ������ [���� | Ǯ�� ����]

//��(0) ��(1) �� - ��1��

#include <iostream>

using namespace std;

int main(void) {
	ios::sync_with_stdio(0);
	cin.tie(0);
	for (int i = 0; i < 3; i++) {
		int sum = 0;
		int num[4];
		cin >> num[0] >> num[1] >> num[2] >> num[3];
		sum = num[0] + num[1] + num[2] + num[3];
		if (sum == 1) cout << 'C';
		else if (sum == 2) cout << 'B';
		else if (sum == 3) cout << 'A';
		else if (!sum) cout << 'D';
		else cout << 'E';

		cout << '\n';
	}
	
}

/* ��ŷ�� Ǯ��
#include <bits/stdc++.h>
using namespace std;

int result, input;
string res = "DCBAE";

int main(void){
  ios::sync_with_stdio(0);
  cin.tie(0);
    
  for(int r = 0; r < 3; r++) {
    result = 0;
    for(int c = 0; c < 4; c++) {
      cin >> input;
      result += input;
    }
    cout << res[result] << '\n';
  }
}
*/