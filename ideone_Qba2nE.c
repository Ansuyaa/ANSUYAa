#include <stdio.h>

int main() {
	long int num,sum,r;
	printf("\nenter a number:-");
	scanf("%ld",&num);
	
	while(num>10){
		sum=0;
		while(num){
			r=num%10;
			num=num/10;
			sum+=r;
		}	
		if(sum>10)
		num=sum;
		else
	    	break;
	}
	printf("\nsum of the digits in single digit is: %ld",sum);
	return 0;
}
