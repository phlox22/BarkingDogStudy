//백준 5397번 키로거 [정답]
#include <iostream>
#include <list>

using namespace std;

int main(void) {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int number;
	cin >> number;

	while(number--){
		string InsertPWD;
		cin >> InsertPWD;

		list<char> answer;

		auto cursor = answer.begin();

		for (auto i:InsertPWD) {
			if (i == '>') {
				if (cursor != answer.end()) cursor++;
			}
			else if (i == '<') {
				if (cursor != answer.begin()) cursor --;
			}
			else if (i == '-') {
				if (cursor != answer.begin()) {
					cursor--;
					cursor = answer.erase(cursor);
				}
			}
			else {
				answer.insert(cursor,i);
			}
		}

		for (auto i : answer) cout << i;
		cout << '\n';
	}

}
