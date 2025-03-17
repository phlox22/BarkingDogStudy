//백준 1267번 핸드폰 요금

/*
* 영식 요금제 - 30초마다 10원(29초 이하 사용시 10원)
* 민식 요금제 - 60초마다 15원(59초 이하 15원)
* 
* 저번 달 사용 통화 개수 N(20이하 자연수)
* 통화시간 N개
*/

#include <iostream>

using namespace std;

int main(void) {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int N;
	int price[2]{}; //첫번째 영식 , 두번째 만식

	cin >> N;
	for (int i = 0; i < N; i++)
	{
		int num;
		cin >> num;
		price[0] += (num / 30 + 1) * 10;
		price[1] += (num / 60 + 1) * 15;
	}
	

	if (price[0] == price[1]) cout <<"Y M " << price[0];
	else if (price[0] < price[1]) cout<< "Y " << price[0];
	else cout<< "M " << price[1];
}