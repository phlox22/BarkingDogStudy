//백준 10828번 스택 [정답]

////stl 사용
//#include <iostream>
//#include <stack>
//
//using namespace std;
// 
//int main(void) {
//	ios::sync_with_stdio(0);
//	cin.tie(0);
//
//	int count;
//	cin >> count;
//
//	string command;
//
//	stack<int> s;
//
//	while (count--) {
//		cin >> command;
//
//		if (command == "push") {
//			int x;
//			cin >> x;
//			s.push(x);
//		}
//		else if (command == "pop") {
//			if (s.empty()) cout << -1 << "\n";
//			else {
//				cout<<s.top() << "\n";
//				s.pop();
//			}
//		}
//		else if (command == "empty") {
//			cout << (s.empty()) << "\n";
//		}
//		else if (command == "size") {
//			cout << s.size() << "\n";
//		}
//		else if (command == "top") {
//			if (s.empty()) cout << -1 << "\n";
//			else {
//				cout << s.top() << "\n";
//			}
//		}
//	}
//}

//stl 사용없이

#include <iostream>

using namespace std;

int main(void) {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int count;
	cin >> count;

	string command;

	int s[100005];
	
	int pos = 0;
	while (count--) {
		cin >> command;

		if (command == "push") {
			int x;
			cin >> x;
			s[pos++] = x;
		}
		else if (command == "pop") {
			if (!pos) cout << -1 << "\n";
			else {
				cout << s[pos - 1] << "\n";
				pos--;
			}
		}
		else if (command == "empty") {
			cout << (!pos) << "\n";
		}
		else if (command == "size") {
			cout << pos << "\n";
		}
		else if (command == "top") {
			if (!pos) cout << -1 << "\n";
			else {
				cout << s[pos-1] << "\n";
			}
		}
	}
}
