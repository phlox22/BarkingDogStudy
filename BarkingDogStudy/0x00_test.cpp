//문제 1
int func1(int N){
	int sum = 0;
	for (int i = 1; i < N+1; i++)
	{
		if (i % 3 == 0 || i % 5 == 0) sum+=i;
	}
	return sum;
}
/* 시간복잡도 : O(N)*/

//문제 2
int func2(int arr[], int N){
	for (int i = 0; i < N; i++) {
		for (int j = i + 1; j < N; j++) {
			if (arr[i] + arr[j] == 100) return 1;
		}
	}
	return 0;
}
/*시간복잡도 : (N^2-N)/2 , O(N^2)*/

//문제 3 [못풀었음]
int func3(int N) {
	for (int i = 1; i * i < N; i++) {
		if (i * i == N) return 1;
	}
	return 0;
}
/*시간복잡도 O(N^0.5)*/

//문제 4
int func4(int N) {
	int result = 1;
	while (2 * result <= N) result *= 2;
	return result;
}
/*시간복잡도 : O(lgN)*/