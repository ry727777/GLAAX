#include<stdio.h>

int main(){
	
	// unary ope increment and decrement
	
	int g = 10;
	int f = ++g;
	printf("%d\n",f);
	
	int a = 10;
	int b = 20;
	int c = a++ * --b;
	printf("%d \n",c);
	printf("%d \n",a);
	printf("%d ",b);
	
}
