//A c program to take string from the user and compare it with the user-name which inputed by the user to give him a check that the use is correct.

#include <stdio.h>
#include <string.h>

int main(){

    char first_username[100],second_username[100];

    while(1){

    printf("\nGive an username: ");
    fgets(first_username,100,stdin);

    printf("\nGive an username: ");
    fgets(second_username,100,stdin);

    if(strcmp(first_username,second_username) == 0) printf ("The two username are identical.");
    else if(strcmp(first_username,second_username) > 0) printf("Username 1 is higher in ascii value than Username 2.\nUsername 1 = %d\t\tUsername 2 = %d\n",first_username,second_username);
    else if(strcmp(first_username,second_username) < 0) printf("Username 1 is lower in ascii value than Username 2.\nUsername 1 = %d\t\tUsername 2 = %d\n",first_username,second_username);
    else printf("The two usernames are different.");

    }


}

/*
#include <stdio.h>
#include <string.h>

// Main Function 
int main()
{
	char arr1[100], arr2[100]; // declaring the required arrays one for the string and the other for the user name
	int result;	// declaring result variable to contain the result of comparing presses 

	// Asking the user to enter the string 
	printf("Enter a string : ");
	fflush(stdout);
	gets(arr1);

	// Asking the user to enter his user-name 
	printf("Enter your username : ");
	fflush(stdout);
	gets(arr2);

	// Comparing process using "stricmp" from string.h library 
	result = stricmp(arr1, arr2); // Comparing with neglect the capital or small character 

	// Checking and print the result of comparing process 
	if (result == 0)
		printf("Identical");
	else
		printf("Different");

	return 0;
}// End of Main Function 
*/

