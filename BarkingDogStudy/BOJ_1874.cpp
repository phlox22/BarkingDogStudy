// ���� 1874�� ���� ���� [����]

#include <iostream>
#include <stack>
#include <vector>

using namespace std;

int main(void) {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int N;
	cin >> N;

	vector<int> getvec;
	getvec.resize(N);

	int i = 0;
	while (i < N) {
		cin >> getvec[i];
		i++;
	}

	vector<char> plusOrMinus;
	stack<int> s;

	int count = 0;
	int number = 1;

	s.push(number);
	number++;
	plusOrMinus.push_back('+');

	while(count < N) {
		if (!s.empty() && s.top() == getvec[count]) {
			plusOrMinus.push_back('-');
			count++;
			s.pop();
		}
		else {
			if (number <= N) {
				s.push(number);
				plusOrMinus.push_back('+');
				number++;
			}
			else break;
			/*cout << number << "/" << count << endl;*/
		}
	}

	if (s.empty()) {
		for (auto i : plusOrMinus) cout << i << '\n';
	}
	else cout << "NO";
}


//��ŷ�� Ǯ��
// Authored by : haneulkimdev
// Co-authored by : BaaaaaaaaaaarkingDog
// http://boj.kr/7a18dc82bd4041aaa59c745f06d4ba60
//#include <bits/stdc++.h>
//using namespace std;
//
//int main(void) {
//	ios::sync_with_stdio(0);
//	cin.tie(0);
//	int n;
//	cin >> n;
//	stack<int> S;
//	int cnt = 1;
//	string ans;
//	while (n--) {
//		int t;
//		cin >> t;
//		while (cnt <= t) {
//			S.push(cnt++);
//			ans += "+\n";
//		}
//		if (S.top() != t) {
//			cout << "NO\n";
//			return 0;
//		}
//		S.pop();
//		ans += "-\n";
//	}
//	cout << ans;
//}

/*
���� ó���� �ʿ�� �ϴ� ���� cnt�̴�. cnt �̻��� �� t�� �־����� �� ���� pop�� �� �ְ� cnt�� t��
�� �� ���� push�� �ؾ� �Ѵ�(18-21��). ���� 22��° �ٰ� ���� S.top()�� t�� ��ġ���� �ʴ´ٸ�
�ùٸ��� ���� �����̴�.
*/