#include<stdio.h>
int main(){
	long long int num;
	scanf("%lld", &num);
	
	long long int sum = 0;
	//int sum = (num*(num+1))/2;
	long long int start;
	for(start = 1; start <= num; start++){
		sum += start;
	}
	
	printf("%lld",sum);
}
