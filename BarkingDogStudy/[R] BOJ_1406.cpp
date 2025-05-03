//백준 1406번 에디터 -> erase 응용 미숙

//stl 버전
#include <iostream>
#include <list>
#include <algorithm>

using namespace std;

int main(void) {
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	string getstring;
	list<char> firstString;
	int howMany;
	
	cin >> getstring;
	cin >> howMany;


	for (int i = 0;i < getstring.length();i++) {
		firstString.push_back(getstring[i]);
	}

	list<char>::iterator t = firstString.end();

	char command;
	char addChar;
	for (int i = 0;i < howMany;i++) {
		cin >> command;
		if (command == 'L') {
			if(t !=firstString.begin()) t--;
		}

		else if (command == 'D')
		{
			if (t != firstString.end()) t++;
		}
		else if (command == 'B') {
			if (t != firstString.begin()) {
				t--;
				t = firstString.erase(t);
			}
			
		}
		else if (command == 'P') {
			cin >> addChar;
			firstString.insert(t, addChar);
		}
	}

	for (auto i : firstString) cout << i;
}

//stl 사용 안하는 풀이(바킹독)
//#include <bits/stdc++.h>
//using namespace std;
//
//const int MX = 1000005;
//int dat[MX], pre[MX], nxt[MX];
//int unused = 1;
//
//void insert(int addr, int num) {
//	dat[unused] = num;
//	pre[unused] = addr;
//	nxt[unused] = nxt[addr];
//	if (nxt[addr] != -1) pre[nxt[addr]] = unused;
//	nxt[addr] = unused;
//	unused++;
//}
//
//void erase(int addr) {
//	nxt[pre[addr]] = nxt[addr];
//	if (nxt[addr] != -1) pre[nxt[addr]] = pre[addr];
//}
//
//void traverse() {
//	int cur = nxt[0];
//	while (cur != -1) {
//		cout << dat[cur] << ' ';
//		cur = nxt[cur];
//	}
//	cout << "\n\n";
//}
//
//void insert_test() {
//	cout << "****** insert_test *****\n";
//	insert(0, 10); // 10(address=1)
//	traverse();
//	insert(0, 30); // 30(address=2) 10
//	traverse();
//	insert(2, 40); // 30 40(address=3) 10
//	traverse();
//	insert(1, 20); // 30 40 10 20(address=4)
//	traverse();
//	insert(4, 70); // 30 40 10 20 70(address=5)
//	traverse();
//}
//
//void erase_test() {
//	cout << "****** erase_test *****\n";
//	erase(1); // 30 40 20 70
//	traverse();
//	erase(2); // 40 20 70
//	traverse();
//	erase(4); // 40 70
//	traverse();
//	erase(5); // 40
//	traverse();
//}
//
//int main(void) {
//	fill(pre, pre + MX, -1);
//	fill(nxt, nxt + MX, -1);
//	insert_test();
//	erase_test();
//}
//#include <bits/stdc++.h>
//using namespace std;
//
//const int MX = 1000005;
//int dat[MX], pre[MX], nxt[MX];
//int unused = 1;
//
//void insert(int addr, int num) {
//	dat[unused] = num;
//	pre[unused] = addr;
//	nxt[unused] = nxt[addr];
//	if (nxt[addr] != -1) pre[nxt[addr]] = unused;
//	nxt[addr] = unused;
//	unused++;
//}
//
//void erase(int addr) {
//	nxt[pre[addr]] = nxt[addr];
//	if (nxt[addr] != -1) pre[nxt[addr]] = pre[addr];
//}
//
//void traverse() {
//	int cur = nxt[0];
//	while (cur != -1) {
//		cout << dat[cur] << ' ';
//		cur = nxt[cur];
//	}
//	cout << "\n\n";
//}
//
//void insert_test() {
//	cout << "****** insert_test *****\n";
//	insert(0, 10); // 10(address=1)
//	traverse();
//	insert(0, 30); // 30(address=2) 10
//	traverse();
//	insert(2, 40); // 30 40(address=3) 10
//	traverse();
//	insert(1, 20); // 30 40 10 20(address=4)
//	traverse();
//	insert(4, 70); // 30 40 10 20 70(address=5)
//	traverse();
//}
//
//void erase_test() {
//	cout << "****** erase_test *****\n";
//	erase(1); // 30 40 20 70
//	traverse();
//	erase(2); // 40 20 70
//	traverse();
//	erase(4); // 40 70
//	traverse();
//	erase(5); // 40
//	traverse();
//}
//
//int main(void) {
//	fill(pre, pre + MX, -1);
//	fill(nxt, nxt + MX, -1);
//	insert_test();
//	erase_test();
//}
