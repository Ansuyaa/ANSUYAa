#include <stdio.h>

int main() {
	int num,sum=0,r;
	printf("enter a number:");
	scanf("%d",&num);
	
	for(;num!=0;num=num/10){
		r=num%10;
		sum=sum+r;
	}
	printf("sum of digits of number: %d",sum);
	return 0;
}
