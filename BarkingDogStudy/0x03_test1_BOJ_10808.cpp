//백준 10808번 알파벳 개수 [정답]

#include <iostream>
#include <algorithm>

using namespace std;

int main(void) {
	string N;
	int alphabet[26] = { 0, };
	int j;

	cin >> N;
	for (int i = 0; i < N.length(); i++) {
		j = N[i] - 'a';
		alphabet[j]++;
	}
	for (int i = 0; i < 26; i++) cout << alphabet[i] << ' ';
}