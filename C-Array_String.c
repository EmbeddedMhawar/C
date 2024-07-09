/*Array

EXI: Example of Multidimensional Array In C
Write a C program to find sum of two matrix of order using multi dimensional arrays where,
elments of matrix are entered by user.
*/

#include "stdio.h"

int main(){
    int i,j,n_i,n_j,max_j;
    printf("Give the number of columns in the matrix: ");
    scanf("%d",&i);
    printf("Give the number of lines in the matrix: ");
    scanf("%d",&j);

    max_j =j;
    float matrix[i][j],matrix_1[i][j],matrix_2[i][j];

    // Fill matrix_1
    for (int n_j = 0; n_j < j; n_j++) {
        for (int n_i = 0; n_i < i; n_i++) {
            printf("Give a number to Matrix 1 [%d][%d]: ", n_j, n_i);
            scanf("%f", &matrix_1[n_j][n_i]);
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
            matrix[n_j][n_i] = matrix_1[n_j][n_i] + matrix_2[n_j][n_i];;
        }
    }

    // Print matrices
    for (int n_j = 0; n_j < j; n_j++) {
        printf("\n");
        for (int n_i = 0; n_i < i; n_i++) {
            printf("%.2f ", matrix_1[n_j][n_i]);
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

/* EX2: C Program to Calculate Average Using Arrays
This program takes n number Of element from user(where, n is by user), stores data in an array
and cal culates the average Of those numbers. */

/* EX3: C Program to Find Transpose ofa Matrix
This pr%ram asks user to entera matrix (sire of matrix is specified by user)and this program finds the
transpose of that matrix and displ it, */

/* EX4: C Program to Insert an element in an Array */

/* EX5: C Program to Search an element in Array */

/**/
/**/
/**/
/**/
/**/
/**/
/**/
/**/
/**/
/**/
/**/
/**/
/**/
/**/
/**/
/**/
/**/
/**/
/**/
/**/
/**/
/**/
/**/
/**/
/**/
/**/
/**/