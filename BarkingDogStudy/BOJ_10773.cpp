// 백준 10773번 제로 [정답]

#include <iostream>
#include <stack>

using namespace std;

int main(void) {
	int count;
	cin >> count;

	stack <int> s;
	int total = 0;
	while (count--) {
		int insert;
		cin >> insert;

		if (insert) {
			total += insert;
			s.push(insert);
		}
		else {
			if (!s.empty()) {
				total -= s.top();
				s.pop();
			}
		}
		//cout << total << "\n";
	}
	cout << total;
}

//바킹독 풀이(나주엥 pop하면서 한번에 더해줌
// Authored by : OceanShape
// Co-authored by : -
// http://boj.kr/572b87aed4eb43d9b9084797f5fbace2
//#include <bits/stdc++.h>
//using namespace std;
//
//int K, ans = 0;
//stack<int> s;
//
//int main(void) {
//	ios::sync_with_stdio(0);
//	cin.tie(0);
//
//	cin >> K;
//	while (K--) {
//		int n;
//		cin >> n;
//		if (n == 0) s.pop(); // 0을 입력할 경우, 가장 최신값(s.top()) 제거
//		else s.push(n);     // 0 이외의 수를 입력할 경우, 스택에 추가
//	}
//
//	// 스택에 쌓여 있는 모든 값을 더해줌
//	while (!s.empty()) {
//		ans += s.top();
//		s.pop();
//	}
//	cout << ans;
//}