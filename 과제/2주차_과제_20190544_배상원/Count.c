#include "Header.h"

int** Count(int N, int i, int** arr) {
	int t, temp;

	for(t=1; t<=N; t++) {
		for(temp = t; temp > 0; temp /= 10) {
			arr[i][temp % 10]++;
		}
	}

	return arr;
}
