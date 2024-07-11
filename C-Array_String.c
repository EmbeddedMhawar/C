/*Array

#############################################################################################
#############################################################################################

EXI: Example of Multidimensional Array In C
Write a C program to find sum of two matrix of order using multi dimensional arrays where,
elments of matrix are entered by user.


#include "stdio.h"

int main(){
    int i,j,n_i,n_j,max_j;
    printf("Give the number of columns in the matrix: ");
    scanf("%d",&i);
    printf("Give the number of lines in the matrix: ");
    scanf("%d",&j);

    max_j =j;
    float matrix[i][j],matrix[i][j],matrix_2[i][j];

    // Fill matrix
    for (int n_j = 0; n_j < j; n_j++) {
        for (int n_i = 0; n_i < i; n_i++) {
            printf("Give a number to Matrix 1 [%d][%d]: ", n_j, n_i);
            scanf("%f", &matrix[n_j][n_i]);
        }
    }

    // Fill matrix_2
    for (int n_j = 0; n_j < j; n_j++) {
        for (int n_i = 0; n_i < i; n_i++) {
            printf("Give a number to Matrix 2 [%d][%d]: ", n_j, n_i);
            scanf("%f", &matrix_2[n_j][n_i]);
        }
    }


    // Sum matrices into matrix
    for (int n_j = 0; n_j < j; n_j++) {
        for (int n_i = 0; n_i < i; n_i++) {
            matrix[n_j][n_i] = matrix[n_j][n_i] + matrix_2[n_j][n_i];;
        }
    }

    // Print matrices
    for (int n_j = 0; n_j < j; n_j++) {
        printf("\n");
        for (int n_i = 0; n_i < i; n_i++) {
            printf("%.2f ", matrix[n_j][n_i]);
        }
        if (n_j == (max_j / 2)) {
            printf("\t+\t");
        } else {
            printf("\t\t");
        }
        for (int n_i = 0; n_i < i; n_i++) {
            printf("%.2f ", matrix_2[n_j][n_i]);
        }
        if (n_j == (max_j / 2)) {
            printf("\t=\t");
        } else {
            printf("\t\t");
        }
        for (int n_i = 0; n_i < i; n_i++) {
            printf("%.2f ", matrix[n_j][n_i]);
        }
    }

    return 0;
}
#############################################################################################

#include <stdio.h>

int main()
{
	float a [2][2];
	float b [2][2];
	int i,j;

	 //Enter values of matrix a 
	printf("Enter the element of 1st matrix\n");
	for (i = 0; i < 2; i++)
	{
		for (j = 0; j < 2; j++)
		{
			printf("Enter a%d%d : ", i+1, j+1);
			fflush(stdin); fflush(stdout);
			scanf("%f", &a[i][j]);
		}
	}

	// Enter values of matrix b
	printf("Enter the element of 2st matrix\n");
	for (i = 0; i < 2; i++)
	{
		for (j = 0; j < 2; j++)
		{
			printf("Enter b%d%d : ", i+1, j+1);
			fflush(stdin); fflush(stdout);
			scanf("%f", &b[i][j]);
		}
	}

	//Calculation of sum of matrix
	printf("\nSum Of Matrix\n");
	for (i = 0; i < 2; i++)
	{
		for (j = 0; j < 2; j++)
		{
			a[i][j] += b[i][j];
			printf("%0.1f ", a[i][j]);
		}
		printf("\n");
	}
	return 0;
} 
#############################################################################################
#############################################################################################
*/


/* EX2: C Program to Calculate Average Using Arrays
This program takes n number Of element from user(where, n is by user), stores data in an array
and cal culates the average Of those numbers. 

#include "stdio.h"

int main(){
    int n,n_i;
    printf("Give the number of elements : ");
    scanf("%d",&n);

    float array[n],sum,avg;
    

    // fill the array
        for (int n_i = 0; n_i < n; n_i++) {
            printf("Give a number to array[%d]: ",n_i);
            scanf("%f", &array[n_i]);
        }



    // the sum and avg
        for (int n_i = 0; n_i < n; n_i++) {
            sum += array[n_i];
        }
        avg = sum/n;
        printf("The average = %.2f",avg);


    return 0;
}
#############################################################################################
#include <stdio.h>

int main()
{
	float arr[100];
	int max = 0;
	int i ;
	float average = 0;

	printf("Enter the number of data : ");
	fflush(stdin); fflush(stdout);
	scanf("%d", &max);

	for (i = 0; i < max; i++)
	{
		printf("%d. Enter number : ", i+1);
		fflush(stdin); fflush(stdout);
		scanf("%f", &arr[i]);
	}

	for (i = 0; i < max; i++)
	{
		average += arr[i];
	}

	average /= max ;
	printf("Average = %0.2f", average);

	return 0;
}
#############################################################################################
#############################################################################################
*/

/* EX3: C Program to Find Transpose ofa Matrix
This pr%ram asks user to entera matrix (size of matrix is specified by user) and this program finds the
transpose of that matrix and displ it

#include "stdio.h"

int main(){
    int i,j,n_i,n_j,max_j;
    printf("Give the number of columns in the matrix: ");
    scanf("%d",&i);
    printf("Give the number of lines in the matrix: ");
    scanf("%d",&j);

    max_j =j;
    float matrix_t[i][j],matrix[i][j];

    // Fill matrix
    for (int n_j = 0; n_j < j; n_j++) {
        for (int n_i = 0; n_i < i; n_i++) {
            printf("Give a number to Matrix 1 [%d][%d]: ", n_j, n_i);
            scanf("%f", &matrix[n_j][n_i]);
        }
    }

    // Transposed matrix
    for (int n_j = 0; n_j < j; n_j++) {
        for (int n_i = 0; n_i < i; n_i++) {
            matrix_t[n_j][n_i]= matrix[n_i][n_j];
        }
    }

    // Print matrices
    for (int n_j = 0; n_j < j; n_j++) {
        printf("\n(");
        for (int n_i = 0; n_i < i; n_i++) {
            printf("%.2f ", matrix[n_j][n_i]);
        }
        if (n_j == 0) {
            printf(")t\t");
        } else {
            printf(")\t");
        }
        if (n_j == (max_j / 2)) {
            printf("=\t");
        } else {
            printf("\t");
        }
        for (int n_i = 0; n_i < i; n_i++) {
            printf("%.2f ", matrix_t[n_j][n_i]);
        }
    }
    
return 0;
}
#############################################################################################

#include <stdio.h>

int main()
{
	int matrix[100][100];
	int t_matrix[100][100];

	int row, column;

	int i, j;

	// Assign rows and columns
	printf("Enter rows and column of matrix : ");
	fflush(stdin); fflush(stdout);
	scanf("%d %d", &row, &column);

	// Assign matrix values 
	printf("Enter element of the matrix : \n");
	for (i = 0; i < row; i++)
	{
		for(j = 0; j < column; j++)
		{
			printf("Enter element %d%d : ", i+1, j+1);
			fflush(stdin); fflush(stdout);
			scanf("%d", &matrix[i][j]);
		}
	}

	// printing matrix 
	printf("Entered matrix:\n");
	for (i = 0; i < row; i++)
	{
		for(j = 0; j < column; j++)
		{
			printf("%d ", matrix[i][j]);
		}
		printf("\n");
	}

	// calculating transpose
	for (i = 0; i < row; i++)
	{
		for(j = 0; j < column; j++)
		{
			t_matrix[j][i] = matrix[i][j];
		}
	}

	// printing transpose matrix
	printf("Transpose of Matrix:\n");
	for (i = 0; i < column; i++)
	{
		for(j = 0; j < row; j++)
		{
			printf("%d ", t_matrix[i][j]);
		}
		printf("\n");
	}
	return 0;
}
#############################################################################################
#############################################################################################

*/


/* EX4: C Program to Insert an element in an Array 

#include "stdio.h"

int main(){
    int i,j,n_i,n_j,mod_num;
    printf("Give the number of columns in the matrix: ");
    scanf("%d",&i);
    printf("Give the number of lines in the matrix: ");
    scanf("%d",&j);

    float matrix[i][j];

    // Fill and print matrix with 0
    for (int n_j = 0; n_j < j; n_j++) {
        printf("\n(");
        for (int n_i = 0; n_i < i; n_i++) {
            matrix[n_j][n_i]=0.0;
            printf("%.1f ", matrix[n_j][n_i]);
        }
         printf(")\t");
    }

    //How many elements the user want to insert
    printf("\nHow many inserts you want to do:  ");
    scanf("%d",&mod_num);

    //Inserting 
    i=0;
    n_i=0;
    n_j=0;
    while(i<mod_num){
        printf("\n Where you want to insert your elements (give two indexes): ");
        fflush(stdin);fflush(stdout);
        scanf("%d",&n_j);
        scanf("%d",&n_i);
        printf("Give an element to Matrix [%d][%d]: ", n_j, n_i);
        scanf("%f",&matrix[n_j][n_i]);
        i++;
    }
    // Print matrix
    for (int n_j = 0; n_j < j; n_j++) {
        printf("\n");
        for (int n_i = 0; n_i < i; n_i++) {
            printf("%.1f\t", matrix[n_j][n_i]);
        }
    }
    return 0;
}
#############################################################################################

#include <stdio.h>

int main()
{
	int arr[100];
	int num_element, inserted_num, location;
	int i;

	//Assign number of element 
	printf("Enter no of elements : ");
	fflush(stdin); fflush(stdout);
	scanf("%d", &num_element);

	// Assign element values
	for (i = 0; i < num_element; i++)
	{
		scanf("%d", &arr[i]);
	}

	// Assign the inserted value
	printf("Enter the element to be inserted : ");
	fflush(stdin); fflush(stdout);
	scanf("%d", &inserted_num);

	// Assign location in the array
	printf("Enter the location : ");
	fflush(stdin); fflush(stdout);
	scanf("%d", &location);

	// Inserting process
	for (i = num_element-1; i >0 ; i--)
	{
		arr[i+1] = arr [i];
		if (arr[i] == location)
		{
			arr[i] = inserted_num;
		}
	}

	// Printing new array
	for (i = 0; i < num_element+1; i++)
	{
		printf("%d ", arr[i]);
	}
	return 0;
}
#############################################################################################
#############################################################################################
*/

/* EX5: C Program to Search an element in Array 

#include "stdio.h"

int main(){

    int i,j,s,n_i,n_j,f,search_num;

    printf("Give the number of columns in the matrix: ");
    scanf("%d",&i);
    printf("Give the number of lines in the matrix: ");
    scanf("%d",&j);
    
    float matrix[i][j];


    // Fill matrix
    for (int n_j = 0; n_j < j; n_j++) {
        for (int n_i = 0; n_i < i; n_i++) {
            printf("Give a number to Matrix [%d][%d]: ", n_j, n_i);
            scanf("%f", &matrix[n_j][n_i]);
        }
    }

    // Number of elements that user want to search (it need to be before hand or you can determine after wards the number of search)
    printf("\nHow many elements you want to search:  ");
    scanf("%d",&search_num);

    float searched_element[search_num];



    // Take the element values inserted by the user
    for(s=0;s<search_num;s++){
    printf("\n What's the value of element(s) you want to search:  ");
    scanf("%f",&searched_element[s]);
    }

    // The searching function
    f=0;
    for(s=0;s<search_num;s++){
    for (int n_j = 0; n_j < j; n_j++) {
        for (int n_i = 0; n_i < i; n_i++) {
            if(searched_element[s] == matrix[n_j][n_i]){
                printf("Found %f in position [%d][%d].\n",searched_element[s],n_j,n_i);
                f += 1;
            }
        }
    } if(f==0) printf("%f is not found in the array.\n",searched_element[s]);
    }

}
#############################################################################################


#include <stdio.h>

int main()
{
	int arr[100];
	int num_element, searched_num ;
	int i;

	// Assign number of element
	printf("Enter no of elements : ");
	fflush(stdin); fflush(stdout);
	scanf("%d", &num_element);

	// Assign element values 
	for (i = 0; i < num_element; i++)
	{
		scanf("%d", &arr[i]);
	}

	// Assign the inserted value
	printf("Enter the element to be inserted : ");
	fflush(stdin); fflush(stdout);
	scanf("%d", &searched_num);

	// Finding the location of the input number
	for (i = 0; i < num_element; i++)
	{
		if(arr[i] == searched_num)
		{
			printf("Number found at the location = %d",i+1);
			break;
		}
	}

	return 0;
}
*/