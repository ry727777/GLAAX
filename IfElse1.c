#include<stdio.h>

int main(){
	printf("Enter you age: ");
	int age;
	scanf("%d",&age);
	
	if(age >= 18){
		printf("You can vote");
	}else{
		printf("You can not vote");
	}
}
