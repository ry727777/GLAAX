#include<stdio.h>

int main(){
	int price;
	printf("Enter price value: ");
	scanf("%d",&price);
	
	if(price >= 2000){
		price = price - price*0.1;
	}
	
	printf("Total bill %d",price);
}
