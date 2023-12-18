#include <stdio.h>

int main() {
	/* BEGIN USER MODIFIED CODE */

	int x[] = {1, 2, 3, 4};
	int y[] = {1, 2, 3, 4};

	/* END USER MODIFIED CODE */
	
	int N = sizeof(x) / sizeof(x[0]);
	int Ny = sizeof(y) / sizeof(y[0]);

	if(N != Ny) {
		printf("array lengths not equal\n");
		return 1;
	} else if(N % 4 != 0 || Ny % 4 != 0) {
		printf("array lengths not a factor of 4\n");
		return 1;
	}

	int z1 = 0; int z2 = 0; int z3 = 0; int z4 = 0;
	for(int i = 0; i < N/4; i++) {
		z1 += x[i] * y[i];
		z2 += x[i + 1] * y[i + 1];
		z3 += x[i + 2] * y[i + 2];
		z4 += x[i + 3] * y[i + 3];
	}
	int z = z1 + z2 + z3 + z4;

	printf("%d\n", z);
}
