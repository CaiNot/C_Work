#include <stdio.h>
#define SUM (a+b)
#define DIF (a-b)
#define SWAP(a,b)  (a)=(b)+(a),(b)=(a)-(b),(a)=(a)-(b)
int main(void) {
	int b, a;
	printf("Input two integers a, b:");
	scanf("%d %d", &a, &b);
	printf("\nSUM=%d\n the difference between square of a and square of b is:%d", SUM, SUM*DIF);
	SWAP(a, b);
	printf("\nNow a=%d,b=%d\n", a, b);
	return 0;
}
