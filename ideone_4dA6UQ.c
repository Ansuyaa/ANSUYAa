#include <stdio.h>

int main() {
	int a,b,temp;
	
	printf("enter any two integers:");
	scanf("%d%d",&a,&b);
	printf("before swapping: a = %d,b = %d",a,b);
	
	temp=a;
	a=b;
	b=temp;
	printf("\nafter swapping:a = %d,b = %d",a,b);
	
	return 0;
}
