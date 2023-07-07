// This program prints the byte ordering of the OS
#include<stdio.h>

// Castng pointer to `unsigned char *` allows treatment as a byte array
void show_bytes(unsigned char * ptr, size_t len) {
	for(size_t i = 0; i < len; i++) {
		printf("%p: 0x%02x\n", ptr + i, ptr[i]);
	}
}

int main() {
	int a = 15213;
	show_bytes((unsigned char *) & a, sizeof(int));
}

/*
outputs (MacOS):

0x16f03f4ec: 0x6d
0x16f03f4ed: 0x3b
0x16f03f4ee: 0x00
0x16f03f4ef: 0x00

i. e. little endian
*/
