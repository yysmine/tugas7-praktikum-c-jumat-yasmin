#include <stdio.h>
int main() {
	
	int A[11];
	
	int dataDokumen[] = {12, 15, 7, 10, 5, 2, 17, 25, 9, 20, 35};
	
	int indexA = 0;
	int i;
	for ( i = 0; i < 11; ++i) {
		if (dataDokumen[i] % 2 == 0) {
			A[indexA] = dataDokumen[i];
			indexA++;
		}
	}
	
	printf("Isi array A setelah input nilai genap:\n");
	int i2;
	for ( i2 = 0; i2 < indexA; ++i2 ) {
		printf("A[%d] = %d\n", i2, A[i2]);
	}
	
	return 0;
}
