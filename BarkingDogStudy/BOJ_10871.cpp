//���� 10871�� X���� ���� �� [����]

/*
��°�� N X
��°�� ���� A (���� N ���� �̷����)
X���� ���� �� ���
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