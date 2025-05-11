#include <stdio.h>
int * sort(int* arr, int n) {
	for (int i = 0; i < n; ++i) {

	   for (int j = 0; j < n; ++j) {

		if (arr[j] < arr[j + 1]) {
			int tmp = arr[j];
			arr[j] = arr[j + 1];
			arr[j + 1] = tmp;			
		}
	   }

	}
	return arr;
}
int main() {
	const int n = 5;
	int arr[n];

	for (int i = 0; i < n; ++i) {
	      scanf("%d", &arr[i]);
	}

	int * ptr = sort(arr, n);

	for (int i = 0; i < n; ++i) {
		printf("%d\n", ptr[i]);
	}
}
