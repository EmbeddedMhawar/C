/* EX1:

Write C Program to Print a Sentence

i should see the Console as following:
##########Console-output###
C Programming
###########################

########################################################################

EX2:

Write C Program to Print a Integer Entered by a User
i should see the Console as following:
##########Console-output###
Enter a integer: 25
You entered: 25
###########################

########################################################################


EX3:

Write C Program to Add Two Integers

i should see the Console as following:
##########Console-output###
Enter two integers: 12
11
Sum: 23
###########################

########################################################################


EX4:

Write C Program to Multiply two Floating Point Numbers
i should see the Console as following:
##########Console-output###

###########################
Enter two numbers: 2.4
1.1
Product: 2.640000
########################################################################



EX5:

Write C Program to Find ASCII Value of a Character

#########Console_output######
Enter a character: G
ASCII value of G = 71
#############################


########################################################################

EX6:

Write Source Code to Swap Two Numbers

#########Console_output######
Enter value of a: 1.20
Enter value of b: 2.45

After swapping, value of a = 2.45
After swapping, value of b = 1.2
#############################
########################################################################

EX7:
it is an interview trick

Write Source Code to Swap Two Numbers without temp variable.*/



/* ########################################################################
EX1:

Write C Program to Print a Sentence

i should see the Console as following:

C Programming

*/

/*#include "stdio.h"
int not_main(){
    printf("C Programming");
}########################################################################
*/

/* ########################################################################
EX2:

Write C Program to Print a Integer Entered by a User
i should see the Console as following:

Enter a integer: 25
You entered: 25


*/
/*
#include "stdio.h"
int main(){

    int i;
    printf("Enter a integer:");
    scanf("%d",&i);
    printf("You entered: %d", i);

}########################################################################
*/
/*########################################################################


EX3:

Write C Program to Add Two Integers

i should see the Console as following:
##########Console-output###
Enter two integers: 12
11
Sum: 23
###########################

#include "stdio.h"

int main(){
int i,j;
    printf("Enter two integers:");
    scanf("%d",&i);
    scanf("%d",&j);
    printf("Sum: %d", i+j);

}
########################################################################

########################################################################


EX4:

Write C Program to Multiply two Floating Point Numbers
i should see the Console as following:
##########Console-output###

###########################
Enter two numbers: 2.4
1.1
Product: 2.640000
########################################################################



#include "stdio.h"

int main(){
float i,j;
printf("Enter two numbers: ");
    scanf("%f",&i);
    scanf("%f",&j);
    printf("Product: %f", i*j);
}

########################################################################



EX5:

Write C Program to Find ASCII Value of a Character

#########Console_output######
Enter a character: G
ASCII value of G = 71
#############################


########################################################################
#include "stdio.h"

int main(){
char i;
printf("Enter a character: ");
    scanf("%s",&i);
    printf("ASCII value of G = %d", i);
}
########################################################################

EX6:

Write Source Code to Swap Two Numbers

#########Console_output######
Enter value of a: 1.20
Enter value of b: 2.45

After swapping, value of a = 2.45
After swapping, value of b = 1.2
-----------------------------------

#include "stdio.h"

int main(){
float i,j,k;
    printf("Enter value of a: ");
    scanf("%f",&i);
    printf("Enter value of b: ");
    scanf("%f",&j);
    k=i;
    i=j;
    j=k;
    printf("After swapping, value of a = %.2f \n", i);
    printf("After swapping, value of b = %.1f", j);

}
########################################################################

EX7:
it is an interview trick

Write Source Code to Swap Two Numbers without temp variable.

#include "stdio.h"

int main(){
float i,j;
    printf("Enter value of a: ");
    scanf("%f",&i);
    printf("Enter value of b: ");
    scanf("%f",&j);
    i=i+j;
    j=i-j;
    i=i-j;
    printf("2After swapping, value of a = %.2f \n", i);
    printf("2After swapping, value of b = %.1f", j);

}
*/