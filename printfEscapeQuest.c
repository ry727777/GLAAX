/*
Question 3: Write a Program
Write a C program that prints the following output exactly as 
shown (using appropriate escape sequences):

Name    Age     City
Aman    21      Delhi
Priya   22      Mumbai

(Hint: Use \t for spacing and \n for new lines, 
all within a single printf statement.)
*/

#include<stdio.h>

int main(){
//	printf("Name\tAge\tCity\n");
//	printf("Aman\t21\tDelhi\n");
//	printf("Priya\t22\tMumbai");

	printf("Name\tAge\tCity\nAman\t%d\tDelhi\nPriya\t%d\tMumbai",21,22);
	return 0;
}


