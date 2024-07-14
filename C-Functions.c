/* ######################################################################################################
write a function do the following::

EXI: Prime Numbers Between two Intervals by Making User-defined
Function
Description: program that find and print the prime numbers between two intervals entered by the user.

#include "stdio.h"

int prime_number_finder(int number_to_check){
    int remainder,out;
    for (int i=2; i<number_to_check;i++){
    remainder = number_to_check % i;
    if (remainder == 0){
        out=0;
        break;
    }
    else out=1;
    }
    return out;
}

int main(){
    //Define the interval
    int interval[2];

    //Scanning The interval
    printf("Give two intervals: ");
    for (int i=0;i<2;i++) {
        scanf("\n %d",&interval[i]);
    }

    printf("The prime numbers between the two intervals [%d...%d] = [ ",interval[0],interval[1]);

    if (interval[0]>interval[1]) {
        interval[2]=interval[1];
        interval[1]=interval[0];
        interval[0]=interval[2];  
    }

    
    for(int i = interval[0]; i <= interval[1];i++){
        if (prime_number_finder(i) == 1) printf("%d ",i);

    }

    printf("]");

}

*/

/*  ######################################################################################################
#include <stdio.h>

// Declaring Functions(Functions Prototypes)
void getPrimeNumbers(int firstNumber, int secondNumber);

// Main Function
int main()
{
	int firstNumber, secondNumber ; 							// declare variables for the range. 

	printf("Enter two numbers(intervals) : "); 				// asking the user to enter the range.
	fflush(stdin); fflush(stdout);
	scanf("%d %d", &firstNumber, &secondNumber); 				// scan and store the range from the user.

	getPrimeNumbers(firstNumber,secondNumber); 					// call the function to find all prime numbers in range user entered.

	return 0;
}

// ----------------------------------------------------------------------- 
// ---------------------- Functions Definition ---------------------------
// ----------------------------------------------------------------------- 

void getPrimeNumbers(int firstNumber, int secondNumber)
{
	int i, arrayCounter = 0, j, k, flag = 0;
	int array[100]; // Declaring an array to store the prime numbers in it  

	// check which number is bigger to compare it right
	if(firstNumber > secondNumber) // if ture we will swap it to get in first number the lower one
	{
		int temp;  // Temporary variable to contain the first number
		temp = firstNumber;
		firstNumber = secondNumber;
		secondNumber = temp;
	}

	// check if the range is between 0 and 1.
	if(firstNumber <= 1 && secondNumber == 1)  // Back Here
	{
		printf("There is no prime numbers between %d and %d", firstNumber, secondNumber);
	}

	// check if the range is between  0 or 1 and 2.
	else if(firstNumber <= 1 && secondNumber == 2)  // Back Here
	{
		printf("The prime numbers between %d and %d are: %d", firstNumber, secondNumber, secondNumber);
	}



	// What is a prime number?
	 // 	 A prime number is a number greater than 1 with only two factors – themselves and 1.
	 // 	 A prime number cannot be divided by any other numbers without leaving a remainder.
	 //   An example of a prime number is 13. It can only be divided by 1 and 13.
	 //   Dividing a prime number by another number results in numbers left over e.g. 13 ÷ 6 = 2 remainder 1.

	// get the prime number in the range
	else
	{
		for (i = firstNumber+1; i < secondNumber; i++) // looping through the range from first number + 1 to second number
		{
			if(i == 2)
			{
				array[arrayCounter] = i;
				arrayCounter++;
			}
			else if ((i % 2) != 0 && i > 2) // exclude all even number & bigger than 2
			{
				for(k = 3; k <= i ; k++) // divide each number in the range on 3 till the number itself
				{
					if(i % k == 0) // each prime number is divided on itself
					{
						flag = 1;
					}
				}
				if (flag == 1)
				{
					array[arrayCounter] = i;
					arrayCounter++;
				}
			}
		} // end of for

		// After checking all number between range, print the array of prime number

		printf("The Prime numbers between %d and %d are: ", firstNumber, secondNumber);

		for (j = 0; j < arrayCounter; j++)
		{
			printf("%d ", array[j]); //print each single value in the array
		}
	}

} ######################################################################################################
*/

/* ######################################################################################################
EX2_C_Program_to_Calculate_Factorial_of_a_Number_Using_Recursion.c
 Description: This program calculates the factorial of a specific number entered by the user using recursion */

/*
#include "stdio.h"

int factorial(int number){

	if (number == 0) return 1;
	else if(number < 0) printf ("No negative for factorial yet :)");
	else return number*factorial(number-1);
    
}

int main(){
	int n;
	printf("Give a number: ");
	scanf("%d",&n);
	
	printf("\n the factorial of %d = %d",n,factorial(n));
}*/

/* ######################################################################################################
#include <stdio.h>

// ----------------------------------------------------------------------- 
// ---------------------- Functions Declaration ---------------------------
// -----------------------------------------------------------------------

int calculateFactorial(int number);

// Main Function
int main()
{
	int number, result;			// declaring the required variables

	// Asking the user to enter a specific number
	printf("Enter an positive integer : ");
	fflush(stdin); fflush(stdout);
	scanf("%d", &number);

	result = calculateFactorial(number); // call the function to calculate the factorial

	printf("Factorial of %d : %d", number, result);	// print the factorial

	return 0;
} // End of Main Function

// ----------------------------------------------------------------------- 
// ---------------------- Functions Definition ---------------------------
// ----------------------------------------------------------------------- 

int calculateFactorial(int number)
{
	if(number == 1)
	{
		return 1; // in case of factorial of 1
	}
	else
	{
		return number * calculateFactorial(number-1); // getting the factorial using recursion function 
	}
} //End of calculateFactorial Function
 ######################################################################################################
*/



 /*
 ######################################################################################################
 EX3_C_Program_to_Reverse_a_Sentence_Using_Recursion.c
  Description: This program prints a sentences entered by the user in a reverse order using recursion.

#include "stdio.h"
#include "string.h"

char reverse_text(char string[],int i,int length)
{   
	return string[length-i];
}

int main(){

	char string[100];int i;

	printf("Give a text to reverse: ");
	fgets(string,100,stdin);
	int length = strlen(string);

	printf("\nReversed text: ");
	for(i=0;i<=length+1;i++){;
	printf("%c",reverse_text(string,i,length));}

}
 ######################################################################################################



#include <stdio.h>

// ----------------------------------------------------------------------- 
// ---------------------- Functions Declaration --------------------------
// ----------------------------------------------------------------------- 
void reverseSentence();

// Main Function 
int main()
{

	// Asking the user to enter any sentence as reversed 
	printf ("Enter a sentence: ");
	fflush(stdin);	fflush(stdout);
	reverseSentence(); // calling the function to reverse the sentence

	return 0;
} // End of Main Function 

// ----------------------------------------------------------------------- 
// ---------------------- Functions Definition ---------------------------
// -----------------------------------------------------------------------

void reverseSentence()
{
	char c;
	scanf("%c", &c);
	if (c != '\n') // to stop the recursion if getting null
	{
		reverseSentence(); // calling again 
		printf("%c", c);
	}
}
*/

  
  /*EX4_C_Program_to_Calculate_the_Power_of_a_Number_Using_Recursion.c
  Description: This program calculates the power of a number using recursion. The number will be entered by the user
  and then the power will be calculated and printed on the screen



#include "stdio.h"

float power(float num, int pow)
{   
	if(pow == 0) return 1;
	else if (pow == 1) return num;
	else return num*power(num,pow-1);
}

int main(){

	float number;
	int pow;

	printf("What's the number and the power: ");
	scanf("%f",&number);
	scanf("%d",&pow);
	printf("The power %d of %.2f is %.2f.",pow,number,power(number,pow));


}
######################################################################################################

*/
/*

# include <stdio.h>
# include <string.h>


// -----------------------------------------------------------------------
// ---------------------- Functions Declaration --------------------------
// -----------------------------------------------------------------------

int power(int number, int toPower) ;

// Main Function
int main ()
{
	int number, toPower ;					// declaring the required variables

	printf ("Enter base number: ");			// read and store the base number from the user 
	fflush(stdin);	fflush(stdout);
	scanf ("%d", &number);

	printf ("Enter power number(Positive integer: ");			// read and store the power from user
	fflush(stdin);	fflush(stdout);
	scanf ("%d", &toPower);

	printf ("%d^%d = %d", number, toPower, power(number, toPower));	// print the result using function recursion

	return 0;
} // End of Main Function 

// ----------------------------------------------------------------------- 
// ---------------------- Functions Definition ---------------------------
// ----------------------------------------------------------------------- 

int power(int number, int toPower)
{
	if (toPower == 0)
		return 1;				// case power of zero
	else if (toPower == 1)
		return number;			// case of power one
	else
		return (number * power(number, toPower-1));		// power calculation
}		// End of power function
*/