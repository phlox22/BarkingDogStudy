//���� 11328�� Strfry [����]

#include <iostream>
#include <algorithm>
using namespace std;

int main(void) {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int N;
	cin >> N;
	
	string str1, str2;
	int alphabet[26]{};
	int count = 0;
	string check[2] = { "Possible","Impossible"};

	while(N--) {
		fill(alphabet, alphabet + 26, 0);

		count = 0;
		cin >> str1 >> str2;

		for (int i = 0; i < str1.length(); i++) {
			alphabet[str1[i] - 'a']++;
		}
		
	   /*for (int i = 0; i < 26; i++) cout << alphabet[i];
		cout << '\n';*/
		
		for (int i = 0; i < str2.length(); i++) {
			alphabet[str2[i] - 'a']--;
		}

		/*for (int i = 0; i < 26; i++) cout << alphabet[i];
		cout << '\n';*/
		
		for (int i = 0; i < 26; i++) {
			/*cout << alphabet[i] ;*/
			if (alphabet[i] != 0) {
				count = 1;
				break;
			}
		}
	/*	cout << '\n';*/

		cout << check[count] << '\n';
	}
}
/* ��ŷ�� ���� Ǯ��
* // Authored by : OceanShape
// Co-authored by : BaaaaaaaaaaarkingDog
// http://boj.kr/a3d03c0124b544759d306668e55bbf4b
#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);

  int N;
  cin >> N;
  while (N--) {
    int a[26] = {}; // �� ������ ������ �����ϴ� �迭
    string s1, s2;
    cin >> s1 >> s2;

    for (auto c : s1) a[c-'a']++; // ù ��° ���ڿ��� �� ���ڴ� ����+1
    for (auto c : s2) a[c-'a']--; // �� ��° ���ڿ��� �� ���ڴ� ����-1

    // 0�� �ƴ� �迭�� ��Ұ� ���� ���, ������ �ٸ� ���ڰ� �����ϹǷ� false
    bool isPossible = true;
    // �߰�ȣ�� ��� ������ ������ �������� ���� ����
    for (int i : a){
      if (i != 0) isPossible = false;
    }

    if(isPossible) cout << "Possible\n";
    else cout << "Impossible\n";
  }
}
*/