//백준 2309번 일곱난쟁이

#include <iostream>
#include <algorithm>

using namespace std;

int main(void) {
	int num[9];
	for (int i = 0; i < 9; i++) {
		cin >> num[i];
	}
	sort(num, num + 9);

	int sum = num[0] + num[1] + num[2] + num[3] + num[4] + num[5] + num[6] + num[7] + num[8];
	int nn1, nn2;
	for (int i = 0; i < 9; i++) {
		for(int j=0;j<9;j++)
			if (j != i && sum - num[i] - num[j] == 100)
			{
				nn1 = i;
				nn2 = j;
			}
	}
	
	for (int i = 0; i < 9; i++)
	{
		if (i == nn1 || i == nn2) continue;
		else cout << num[i]<<'\n';
	}
}

/*바킹독 풀이
// Authored by : wogha95
// Co-authored by : -
// http://boj.kr/ca6967094ffc44a9887b331a045d8509
#include <bits/stdc++.h>
using namespace std;

int num[9], result[7];

int main(void) {
  ios::sync_with_stdio(0);
  cin.tie(0);
    
  for(int i = 0; i < 9; i++) cin >> num[i];
    
  // 9명 중 2명을 뺀 모든 조합 고려
  for(int a = 0; a < 8; a++) {
    int total = 0;
        
    for(int b = a + 1; b < 9; b++) {
      total = 0;
            
      // 나머지 7명 저장
      for(int c = 0, i = 0; c < 9; c++) if(c != a && c != b) result[i++] = num[c];
      for(int i = 0; i < 7; i++) total += result[i];
            
      // 7명 키의 합이 100인 경우
      if(total == 100) break;
    }
    if(total == 100) break;
  }
    
  // 정렬 후 출력
  sort(result, result + 7);
  for(int i = 0; i < 7; i++) cout << result[i] << "\n";
}
*/