//���� 1267�� �ڵ��� ���

/*
* ���� ����� - 30�ʸ��� 10��(29�� ���� ���� 10��)
* �ν� ����� - 60�ʸ��� 15��(59�� ���� 15��)
* 
* ���� �� ��� ��ȭ ���� N(20���� �ڿ���)
* ��ȭ�ð� N��
*/

#include <iostream>

using namespace std;

int main(void) {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int N;
	int price[2]{}; //ù��° ���� , �ι�° ����

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