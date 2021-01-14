#include <iostream>
using namespace std;

const static int N = 100001;

long calculateSum(long arr[], int n) {
	long sum = 0;
	for (int i = 0; i < n; i++) {
		sum += arr[i];
	}
	return sum;
}

long calculateSum_2(long arr[], int n) {
	long sum = 0;
	int size = n;
	while (size > 1) {
		if (size % 2 == 1) {
			arr[0] += arr[size - 1];
			size -= 1;
		}
		for (int i = 0; i < size / 2; i++) {
			arr[i] += arr[size - i - 1];
		}
		size /= 2;
	}
	sum = arr[0];
	return sum;
}

int main()
{
	long arr[N];
	for (int i = 0; i < N; i++) {
		arr[i] = i + 1;
	}
	cout << "Sum by first method is  " << calculateSum(arr, N) << endl;
	cout << "Sum by second method is  " << calculateSum_2(arr, N) << endl;
}

