//백준 11328번 Strfry [정답]

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
/* 바킹독 문제 풀이
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
    int a[26] = {}; // 각 문자의 개수를 저장하는 배열
    string s1, s2;
    cin >> s1 >> s2;

    for (auto c : s1) a[c-'a']++; // 첫 번째 문자열의 각 문자는 개수+1
    for (auto c : s2) a[c-'a']--; // 두 번째 문자열의 각 문자는 개수-1

    // 0이 아닌 배열의 요소가 있을 경우, 개수가 다른 문자가 존재하므로 false
    bool isPossible = true;
    // 중괄호가 없어도 문제는 없으나 가독성을 위해 삽입
    for (int i : a){
      if (i != 0) isPossible = false;
    }

    if(isPossible) cout << "Possible\n";
    else cout << "Impossible\n";
  }
}
*/