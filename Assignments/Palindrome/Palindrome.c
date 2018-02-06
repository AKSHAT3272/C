/* This program calculates the largest palindrome made from the product of two 3-digit numbers..
*
* Author: Akshat Patel
*
* Date: 09/09/2017
*/
/****************************************
 * Note: I was getting a negative value so I took helped from stackOverflow and it suggested me to use unsigned int
 * and it works fine.
 *
 ****************************************
 */

//Header files
#include <stdio.h>
#include <stdlib.h>

//Implicit Decelaration
int reverse (unsigned int input);

/* Description: Main function. It has two for loops with run from 100 to 999 and multiply every 3 digit number
 * to get the largest palindrome. It calls the function reverse.
 *
*  Pre/Postcondition: None.
*
*  Returns 0
*/
int main(void)
{
	//Variables
	unsigned int i,j,n,n1,LargestP = 0;

   //Loop to multiply every 3 digit numbers find the largest palindrome.
	for(i = 100; i < 1000 ; i++){
		for(j = 100; j < 1000; j++){
			unsigned int product = i*j;
			if(reverse(product) && product > LargestP){
           //Gives us the numbers 913 and 993 which gives us the largest palindrome for 3 digit multiples.
				n =i;
		       n1=j ;
				LargestP = product;
			}
		}
	}

	//Prints the number and the product.
	printf("%d, %d, %d\n",n,n1, LargestP);

return 0;
}

/*
* Description: Reverses the given product and compares product with reverse product
*
*  Pre/Postcondition: None
*
*  Returns 0 if its a palindrome and Retuns 1 if its not a palindrome.
*/
int reverse(unsigned int input){
	unsigned int reverseNumber = 0, number = input;

	while(number > 0)
	{
		reverseNumber = reverseNumber*10 + number%10;
		number /= 10;
	}

		return input == reverseNumber;
	}
