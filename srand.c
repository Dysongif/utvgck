#include <stdio.h>

int count(int values[], int size, int n);

int main() {
	int a[] = {1, 2, 7, 1, 2, 4, 1};

	printf("%d compare %d volte\n", 1 , count(a, 7, 1));
	return 0;
}

int count(int values[], int size, int n) {
	int tot = 0;

	for (int i = 0; i < size; i++) {
		if (values[i] == n) {
			tot++;
		}
	}

	return tot;

}
