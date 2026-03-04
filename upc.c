#include <stdio.h>
// A program to count upc code check digit :)
int main(void){
	int n1; // the first digit
	int n2, n3, n4, n5, n6; // the second digit
	int n7, n8 ,n9 ,n10 ,n11; // the third digit
	int n12; //the fourth digit 

		printf("enter the firts digit one number only : ");	
			scanf("%d",&n1);
		printf("enter the seconf digit 5 numbers only: ");
			scanf("%1d%1d%1d%1d%1d",&n2,&n3,&n4,&n5,&n6);
		printf("enter the third digit 5 numbers only : ");
			scanf("%1d%1d%1d%1d%1d",&n7,&n8,&n9,&n10,&n11);
		printf("enter the final digit 1 number only : ");
			scanf("%d",&n12);
	
        int total ,first_sum ,second_sum ,check_digit;
                first_sum  = n1 + n3 + n5 + n7 + n9 + n11;
                second_sum = n2 + n4 + n6 + n8 + n10;
        total = (first_sum * 3) + second_sum;
        --total;
        total %= 10;
        check_digit += 9 - total;

	
		
		printf("the check digit is : %d \n",check_digit);
return 0; }

