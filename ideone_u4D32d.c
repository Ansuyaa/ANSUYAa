#include <stdio.h>

int main(void) {
	double a,b,c;
	printf("enter the two numbers:");
	scanf("%lf %lf",&a,&b);
	c=a*b;
	printf("product=%.2lf",c);
	
	return 0;
}
