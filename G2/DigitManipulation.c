#include<stdio.h>

int main(){
	int num = 278;
	// Logic
	int ones = num%10;
	int tens = (num/10)%10;
	int hundreds = (num/10)/10;
	
	printf("Hundreds = %d\n",hundreds);
	printf("Tens = %d\n",tens);
	printf("Ones = %d\n", ones);
	printf("Sum = %d",(ones + tens + hundreds));
}
