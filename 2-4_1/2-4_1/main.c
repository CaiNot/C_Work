#include <stdio.h>
#include <math.h>

#define S(a,b,c) (((a)+(b)+(c))/2)
#define AREA(a,b,c) (sqrt(S(a,b,c)*(S(a,b,c)-(a))*(S(a,b,c)-(b))*(S(a,b,c)-(c))))

void main() {
	double a = 0, b = 0, c = 0;

	printf("Please input the length of Triangle:\n");
	scanf("%lf %lf %lf", &a, &b, &c);
	printf("%lf\n", AREA(a, b, c));
}