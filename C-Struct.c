# include "stdio.h"

struct s {
    char name[70];
    int roll;
    float marks;

};

int main(){

    struct s student;

// Input
    printf("Enter information of students: ");
    printf("\nEnter name: ");
    fgets(student.name,50,stdin);
    printf("Enter roll number: ");
    scanf("%d",&student.roll);
    printf("Enter marks: ");
    scanf("%f",&student.marks);

//Output
    printf("\nDisplaying Information:");
    printf("\nName: %s",student.name);
    printf("Roll: %d",student.roll);
    printf("\nMarks: %.2f",student.marks);   
    
    
}