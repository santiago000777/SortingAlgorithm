#include "common.h"

int main() {
	int arr[11] = {8, 4, 9, 6, -4, 1, 54, 7, -10, -11, 534};
	int min, minPos, pom;

	for (int k = 0; k < sizeof(arr) / sizeof(int); k++) {
		min = arr[k];
		minPos = k;
		for (int i = k; i < sizeof(arr) / sizeof(int); i++) {
			if (min > arr[i]) {
				min = arr[i];
				minPos = i;
			}
		}
		pom = arr[k];
		arr[k] = min;
		arr[minPos] = pom;
	}

	for (int i = 0; i < sizeof(arr) / sizeof(int); i++) {
		printf("%d\n", arr[i]);
	}
}