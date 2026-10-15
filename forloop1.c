#include<stdio.h>

int main(){
	int start;
	int end = 20;
	for(start = 1; start <= end; start++){
		if(start % 2 == 0){
			printf("%d ", start);	
		}
	}
}
