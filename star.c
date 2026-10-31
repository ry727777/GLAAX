#include<stdio.h>

int main(){
	long long int num1, num2;
	scanf("%lld%lld",&num1, &num2);
	
    

	long long int i;
	long long int gcd = 1;
	for(i = 1; i<= num1; i++){
		if(num1 % i == 0 && num2 % i == 0){
			gcd = i;
		}
	}
	printf("%lld",gcd);
}