//�ٽ� Ǯ���
#include <iostream>

using namespace std;

int func2(int arr[], int N) {
    int occur[101] = {};
    for (int i = 0; i < N; i++) {
        if (occur[100 - arr[i]] == 1)
            return 1;
        occur[arr[i]] = 1;
    }
    return 0;
}
int main(void) {
	int arr[] = { 1,52,48 };
	cout << func2(arr,3);
}

//���� ���θ� ǥ���ϴ� �迭 �����