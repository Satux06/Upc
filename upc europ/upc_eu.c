#include <stdio.h>
// this is a programming project to study of what i learned so far 

int main(void){
	int n1 ,n2 ,n3 ,n4 ,n5 ,n6 ,n7;
	int n8 ,n9 ,n10 ,n11 ,n12 ,n13;

		printf("Enter the upc digit number (12 numbers only) : ");
		scanf("%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d",&n1,&n2,&n3,&n4,&n5,&n6,&n7,&n8,&n9,&n10,&n11,&n12);

	int first_sum = n2 + n4 + n6 + n8 + n10 + n12;
	int second_sum = n1 + n3 + n5 + n7 + n9 + n11 + n11;
	int total = ((first_sum * 3) + second_sum); total--;
	int upc = (total % 10);
		
	printf("The check digit number is : %d \n",9 - upc);

return 0; }
