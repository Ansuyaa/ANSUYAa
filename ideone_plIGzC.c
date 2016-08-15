#include <stdio.h>

int main() {
	int a,b;
	int sum;
	
	printf("enter any two integers:");
	scanf("%d%d",&a,&b);
	sum= a - ~b - 1;
	
	printf("sum of two integers: %d",sum);
	
	return 0;
}
