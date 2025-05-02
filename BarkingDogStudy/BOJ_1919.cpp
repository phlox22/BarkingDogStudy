//백준 1919번 애너그램 만들기 [정답]

#include <iostream>
#include <cmath>
using namespace std;

int main(void) {
	ios::sync_with_stdio(0);
	cin.tie(0);

	const int ALPHABET_LENGTH = 26;
	int arr1[ALPHABET_LENGTH]{}, arr2[ALPHABET_LENGTH]{};
	string str1, str2;

	cin >> str1 >> str2;

	for (int i = 0; i < str1.length(); i++) arr1[str1[i] - 'a']++;
	for (int i = 0; i < str2.length(); i++) arr2[str2[i] - 'a']++;

	int count=0;
	for (int i = 0; i < ALPHABET_LENGTH ; i++) {
		count += abs( arr1[i] - arr2[i]);

	}

	cout << count;
}

// 2차원 배열로 arr 한개만 만들어도 됨

// 바킹독 정답 코드
// Authored by : twinkite
// Co-authored by : BaaaaaaaaaaarkingDog
// http://boj.kr/ae5d8d2f69f04530b4df0c591e9b07d5
//#include <bits/stdc++.h>
//using namespace std;
//
//int arr[2][26], res;
//string s1, s2;
//
//int main(void) {
//	ios::sync_with_stdio(0);
//	cin.tie(0);
//
//	cin >> s1 >> s2;
//	for (char c : s1)
//		arr[0][c - 'a']++;
//
//	for (char c : s2)
//		arr[1][c - 'a']++;
//
//	for (int i = 0; i < 26; i++)
//		res += abs(arr[0][i] - arr[1][i]);
//
//	cout << res;
//}