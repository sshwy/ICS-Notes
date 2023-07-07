// This program verify the "sign extension"
#include<stdio.h>

int main() {
	int a = -1;
	unsigned b = -1;
	a >>= 1;
	b >>= 1;
	// a = 4294967295, b = 2147483647
	printf("a = %u, b = %u\n", (unsigned)a, (unsigned)b);
}
