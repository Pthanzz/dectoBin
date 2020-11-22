#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

struct MyStruct{
	int i = 0;
}ez;

void converttoBin(int dec) {
	static int numBin[128];
	while (dec != 0) {
		numBin[ez.i] = dec % 2;
		dec /= 2;
		ez.i++;
	}
	for (ez.i; ez.i >= 0; ez.i--) {
		printf("%d", numBin[ez.i]);
	}
}

int main() {
	int numnum;
	printf("Enter positive integer : ");
	scanf("%d", &numnum);
	if (numnum > 0 && numnum != NULL) {
		converttoBin(numnum);
	}
}