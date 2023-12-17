#include <stdio.h>

void G3(int n);

void F3(int n) {
	if (n > 0)
		G3(n - 1);
}

void G3(int n) {
	printf("+0");
	if (n > 1)
		F3(n - 3);
}

void main() {
	F3(11);
}