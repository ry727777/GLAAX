#include<stdio.h>

int main(){
	int a,b;
	scanf("%d%d",&a,&b);
	
	int lcm = b;
	int i;
	for(i=b; i<=a*b; i++){
		if(i % a == 0 && i % b == 0){
			lcm = i;
			break;
		}
	}
	printf("%d",lcm);
}
