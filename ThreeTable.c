#include<stdio.h>

int main(){
	// Table of three and skip odd values.
	int a = 1;
	while(a<=10){
		if(a*3 % 2!= 0) {
			a++;
			continue;
		}
		printf("3 x %d = %d\n",a,a*3);
		a++;
	}
}
