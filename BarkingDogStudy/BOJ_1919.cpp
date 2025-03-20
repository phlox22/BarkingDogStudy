//백준 1919번 애너그램 만들기

#include <iostream>
#include <cmath>
using namespace std;

int main(void) {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int arr1[26]{}, arr2[26]{};
	string str1, str2;

	cin >> str1 >> str2;

	for (int i = 0; i < str1.length(); i++) arr1[str1[i] - 'a']++;
	for (int i = 0; i < str2.length(); i++) arr2[str2[i] - 'a']++;
	
	int count=0;
	for (int i = 0; i < str2.length(); i++) {
		count += abs(str1[i] - str2[i]);
	}

	cout << count;
}