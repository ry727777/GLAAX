#include<stdio.h>

int main(){
	printf("Enter your marks: ");
	int marks;
	scanf("%d",&marks);
	
	if(marks >= 90){
		printf("Garde A");
	}
	if(marks >= 80){
		printf("grade B");
	}
	if(marks >= 70){
		printf("Grade C");
	}
	if(marks >= 55){
		printf("Grade D");
	}
}
