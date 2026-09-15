#include<stdio.h>

int main(){
	int roll_number = 101;
	char grade = 'A';
	float marks1=85.50,marks2=90.00,marks3=78.38;
	
	printf("--------- REPORT CARD 1 ---------\n");
	printf("Roll Number\t: %d\n",roll_number);
	printf("Subject 1\t: %.2f\n",marks1);
	printf("Subject 2\t: %.2f\n",marks2);
	printf("Subject 3\t: %.2f\n",marks3);
	printf("Grade\t\t: %c\n",grade);
	printf("-------------------------------\n");
	
	// make another report and change the values
	
	roll_number = 102;
	marks1 = 80.56;
	marks2 = 75.45;
	marks3 = 78.90;
	grade = 'B';
	
	printf("--------- REPORT CARD 2 ---------\n");
	printf("Roll Number\t: %d\n",roll_number);
	printf("Subject 1\t: %.2f\n",marks1);
	printf("Subject 2\t: %.2f\n",marks2);
	printf("Subject 3\t: %.2f\n",marks3);
	printf("Grade\t\t: %c\n",grade);
	printf("-------------------------------\n");
	
	return 0;
}
