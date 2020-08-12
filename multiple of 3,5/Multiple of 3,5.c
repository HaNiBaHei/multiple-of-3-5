#include<stdio.h>

main() {
	int x;
	for (x = 1; x < 1000; x++) {
		if (x % 3 == 0 || x % 5 == 0) {
			printf("%d\n", x);

		}
	}
}