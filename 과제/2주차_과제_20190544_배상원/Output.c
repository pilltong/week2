#include "Header.h"

int Output(int i, int** arr) {
	int p;

	for(p=0; p<10; p++) {
		printf("%d ", arr[i][p]);
	}
	return 0;
}
