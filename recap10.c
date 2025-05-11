#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
bool Prime(int n) {
	if(n <= 2) return false;
	for(int i = 2; i * i <= n; ++i) {
		if(n % i == 0){
		   return false;
		}
	}
	return true;
}
int* primeNumbers (int ** matrix, int n, int m) {
	int*arr = (int*)malloc(n * m * sizeof(int));
	if(!arr) {
	  return 0;
	}
	int idx = 0;
	for (int i = 0; i < m; ++i) {
		for (int j = 0; j < n; ++j) {
			if(Prime(matrix[i][j])){
			   arr[idx++] = matrix[i][j];
			}
		}
	}
	return arr;
}
