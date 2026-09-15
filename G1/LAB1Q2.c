/*
input: 101 S 87.5

Expected Output 

Roll No: 101 | Initial: S | Marks: 87.50
*/

#include<stdio.h>

int main(){
	int a;
	char b;
	float c;
	printf("input: ");
	scanf("%d %c%f",&a,&b,&c);
	printf("Roll No: %d | Initial: %c | Marks: %.2f",a,b,c);
}


