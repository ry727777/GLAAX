#include<stdio.h>
#include<limits.h>

int main(){
	
	// char ASCII
	char ch = 127;
	printf("%c\n",ch);
	
	int ab = 65;
	printf("%c\n",ab);
	
	
	printf("\n");
	int max_value = INT_MAX;
	int min_value = INT_MIN;
	printf("Max value %d: \n", max_value);
	printf("Min value %d: \n", min_value);
	
	long long int a = 2147483648;
	printf("%lld\n",a);
	
	long long long_max_val = LLONG_MAX;
	long long long_min_val = LLONG_MIN;
	printf("Long max value: %lld",long_max_val);
	printf("Long min value: %lld",long_min_val);
}





