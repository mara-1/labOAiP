#include <stdio.h>

void F2(int n) {
	printf("%d\n", n);
	if (n < 5) {
		F2(n + 1);
		F2(n + 3);
	}
}
void main() {
	F2(1);
}