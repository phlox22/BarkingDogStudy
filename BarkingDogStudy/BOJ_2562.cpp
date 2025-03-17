//백준 2562번 최댓값 [정답]
#include <iostream>

using namespace std;

int main(void) {
	int arr[9], maxNum = 0,maxOrder=0;
	for (int i = 0; i < 9; i++)
	{
		cin >> arr[i];
		if (arr[i] > maxNum)
		{
			maxOrder = i + 1;
			maxNum = arr[i];
		}
	}

	cout << maxNum << '\n' << maxOrder;

}

/* 바킹독 풀이 (max_element는 #include <algorithm>
// Authored by : BaaaaaaaaaaarkingDog
// Co-authored by : -
// http://boj.kr/359583ea75ef49f7acf7c5564827ebba
#include <bits/stdc++.h>
using namespace std;

int a[9];
int main(void){
  ios::sync_with_stdio(0);
  cin.tie(0);

  for(int i = 0; i < 9; i++) cin >> a[i];
  cout << *max_element(a, a+9) << '\n';
  cout << max_element(a, a+9) - a + 1;
}

/*
max_element 함수를 이용한 풀이
*/
*/