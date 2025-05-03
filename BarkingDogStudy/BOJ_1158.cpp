//백준 1158번 요세푸스 문제[정답]

#include <iostream>
#include <list>
#include <vector>

using namespace std;

int main(void) {
	int CircleNumber;
	int K;
	cin >> CircleNumber>>K;

	vector<int> answer{};
	list<int> circle;

	for (int i = 0;i < CircleNumber;i++) {
		circle.push_back(i + 1);
	}

	auto cursor = circle.begin();
	
	for (int i = 0;i < CircleNumber;i++) {
		for (int j = 0;j < K; j++) {
			if (cursor == circle.end()) cursor = circle.begin();
			cursor++;
		}
		if (cursor == circle.begin()) {
			cursor = circle.end();
		}
		cursor--;
		answer.push_back(*cursor);
		cursor = circle.erase(cursor);
	}


	cout << "<";
	for (int i = 0;i < CircleNumber - 1;i++) cout << answer[i] << ", ";
	cout << answer[CircleNumber - 1] << ">";
}