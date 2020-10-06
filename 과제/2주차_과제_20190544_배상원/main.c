#include "Header.h"

int main(void) {
	int** arr;
	int tcase = 0, N = 0;
	int i, j;

	printf("Enter test case : ");
	scanf("%d", &tcase);

	arr = (int**)malloc(sizeof(int) * tcase);
	for (i=0; i < tcase; i++) {
		arr[i] = (int*)malloc(sizeof(int) * 10);
	}
	for (i=0; i < tcase; i++) {
		for (j=0; j < i; j++) {
			arr[i][j] = 0;
		}
	}

	for(i=0; i < tcase; i++) {
		printf("Enter page numeber : ");
		scanf("%d", &N);
		arr = Count(N, i, arr);
	}
	for(i=0; i < tcase; i++) {
		Output(i, arr);
		printf("\n");
	}
	
	for(i=0; i < tcase; i++) {
		free(arr[i]);
	}
	free(arr);
	return 0;
}
