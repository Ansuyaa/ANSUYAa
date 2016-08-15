#include <stdio.h>
#include<stdio.h>

int main(void) {
	double base,exponent,result;
	
	printf("enter the base number:");
	scanf("%.lf",&base);
	
	printf("enter the exponent number:");
	scanf("%lf",&exponent);
	
	result=pow(base,exponent);
	
	printf("%.1lf^%.1lf=%.2lf",base,exponent,result);
	
	return 0;
}
