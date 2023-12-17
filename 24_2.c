#include <stdio.h>
//
////Задача 2.1
//
//void f(int n) {
//	printf(" %d", n);
//	if (n > 1) {
//		f(n - 2);
//	}
//}
//


////Задача 2.2
//
//void f2(int n) {
//	
//	if (n > 1) {
//		f2(n - 2);
//	}
//	printf(" %d", n);
//}

//Задача 2.3

void f3(int n) {
	printf(" %d", n);

	if (n > 2) {
		f3(n - 2);
	}

	if (n > 1)
	    printf(" %d", n);
}


void main() {

	/*f(11);
	printf(" f1 FINISH\n");*/

	/*f2(11);
	printf(" f2 FINISH\n");*/

	f3(7);
	printf(" f3 FINISH\n");
}



