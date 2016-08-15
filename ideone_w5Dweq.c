#include <stdio.h>

int main() {
	int a,b,c,big;
	printf("\nenter the three number:");
	scanf("%d %d %d",&a,&b,&c);
	
	big=(a>b&&a>c?a:b>c?b:c);
	printf("\nenter the biggest number is: %d",big);
	
	return 0;
}
