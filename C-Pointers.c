/* 5/2 = 3 exercice revient au structure*/


/*
#include "stdio.h"

int main(){

    int m = 29;
    int *ab = &m;
    printf("Address of m : 0x%p",&m);
    printf("\nValue of m : %d",m);

    
    printf("\nNow ab is assigned with the address of m.");
    printf("\nAddress of ab : 0x%p",ab);
    printf("\nValue of ab : %d",*ab);

    m=34;
    printf("\nThe value of m assigned to 34 now.");
    printf("\nAddress of ab : 0x%p",ab);
    printf("\nValue of ab : %d",*ab);

    *ab = 7;
    printf("\nThe pointer variable ab is assigned with the value 7 now.");
    printf("\nAddress of m : 0x%p",&m);
    printf("\nValue of m : %d",m);

}*/
/*

Write a program in C to print all the alphabets using a pointer. Go
to the editor

Expected Output :

The Alphabets are :
Expected Output :
A B C D E F G H I J K L M N O P Q
R S T U V W X Y Z

*/
/*
#include "stdio.h"

int main(){
    char value = 'A';
    char *p = &value;

    while (*p <= 'Z'){
        printf("%c ",*p);
        *p++;
    }

}
*/

#include <stdio.h>

int main() {
    char *ptr;

    ptr = "AAAAAAAAAAAAA";
    fflush(stdout);
    printf("%d",sizeof(ptr));

    while (1) {
        printf("%c ", *ptr);
        ptr++;
    }

    printf("\n");
    return 0;
}

/*
#include <stdio.h>
int main()
{
	char alphabets[27];
	int i;
	char *Ptr ;
	printf("\n\n Pointer : Print all the alphabets:\n");
	printf("----------------------------------------\n");

	Ptr = alphabets ;

	for (i = 0; i < 26; ++i)
	{
		*Ptr = i +'A';
		Ptr++;
	}

	Ptr = alphabets;

	printf(" The Alphabets are : \n");

	for (i = 0; i < 26; ++i)
	{
		printf(" %c ", *Ptr);
		Ptr++;
	}

	return 0;
}

#include <stdio.h>

int main(){

    char string[100];
    char *ptr ;

    printf("Input a string: ");
    fgets(string,100,stdin);

    ptr = string;
    while(*ptr != '\n'){
        ptr++;
    }

    printf("Reverse of the string is : ");

    if (*ptr == '\n') ptr--;
    while(ptr >= string){
        printf("%c",*ptr);
        ptr--;
    }

}

#include <stdio.h>

int main(){

    int array[15];
    int *ptr ;
    int i,max;

    printf("Input the number of elements to store in the array (max 15) : ");
    scanf("%d",&max);
    printf("Input %d number of elements in the array : ",max);

    ptr = array;
    for(i=0;i<=max;i++){
        printf("\nelement - %d : ",i+1);
        scanf("%d",ptr);
        ptr++;
    }

    printf("The elements of array in reverse order are : ");
    for(i=max;i>0;i--)
    {
        printf("\nelement - %d : ",i);
        printf("%d",*ptr);
        ptr--;

    }
    
*/



