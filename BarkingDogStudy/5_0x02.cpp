#include <stack>
#include <iostream>

using namespace std;

int main(void) {
	stack<int> S;

	S.push(10); // 10
	S.push(20); // 10 20
	S.push(30); // 10 20 30

	cout << S.size() << '\n'; // 3

	if (S.empty()) cout << "S is empty\n";
	else cout << "S is not empty\n"; // S is not empty

	S.pop(); // 10 20
	cout << S.top() << '\n'; // 20
	
	S.pop(); // 10
	cout << S.top() << '\n'; // 10��