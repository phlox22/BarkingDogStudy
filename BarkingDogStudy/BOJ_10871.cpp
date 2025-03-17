//백준 10871번 X보다 작은 수 [정답]

/*
젓째줄 N X
둘째둘 수열 A (정수 N 개로 이루어짐)
X보다 작은 수 출력
*/

#include <iostream>
using namespace std;

int main(void)
{
	ios::sync_with_stdio(0);
	cin.tie(0);

	int N, X;
	int A;

	cin >> N >> X;
	for (int i = 0; i < N; i++)
	{
		cin >> A;
		if (A < X) cout << A<<' ';
	}

}