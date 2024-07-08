/*#include "stdio.h"

int main(){

    int i;
    float even_odd;
    while(1){

    printf("\nEnter an integer you want to check: ");
    scanf("%d",&i);
    even_odd= i % 2;

    if (even_odd == 0){
        printf("%d is even.\n",i);
    }
    else{
        printf("%d is odd.\n",i);
    }}
    

}

########################################################################

#include <stdio.h>
int main()
{
    int num;

    printf("Enter an integer: ");
    scanf("%d", &num);

    if(num % 2 == 0)
        printf("%d is even.", num);
    else
        printf("%d is odd.", num);
    
    return 0;
}

########################################################################
########################################################################

#include "stdio.h"

int main(){

    char C;
    while(1){

    printf("\nEnter an alphabet:  ");
    scanf("%c",&C);
    """fflush(stdin);fflush(stdout);"""
    
    switch (C)
    {
    case 'a':
        printf("%c is a vowel",C);
        break;

    case 'e':
        printf("%c is a vowel",C);
        break;

    case 'i':
        printf("%c is a vowel",C);
        break;
    
    case 'o':
        printf("%c is a vowel",C);
        break;
    
    case 'u':
        printf("%c is a vowel",C);
        break;
    
    default:
        printf("%c is a consonant",C);
        break;
    }
}

}

########################################################################

#include <stdio.h>

int main() 
{
    char c;
    int lowercase_vowel, uppercase_vowel;

    printf("Enter an alphabet: ");
    scanf("%c", &c);

    lowercase_vowel = (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u');

    uppercase_vowel = (c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U');

    if (lowercase_vowel || uppercase_vowel)
        printf("%c is a vowel.", c);
    else
        printf("%c is a consonant.", c);

    return 0;
}
####################################################################################
####################################################################################


#include <stdio.h>

int main() 
{
    float i,j,k,winner_1,winner_2;
    int compare;
do{
    printf("Enter three numbers: ");
    scanf("%f", &i);
    scanf("%f", &j);
    scanf("%f", &k);

    compare = i>j;
    // compare = 1 if i>j, compare =0 if j>i
    if (compare == 1) winner_1 =i;
    else if (compare == 0) winner_1 =j;

    compare = winner_1>k;
    // compare = 1 if winner_1>k, compare =0 if k>winner_1
    if (compare == 1) winner_2 =winner_1;
    else if (compare == 0) winner_2 =k;

    printf("Largest number = %.2f\n", winner_2);
return 0;
} while(1);

}
########################################################################
#include <stdio.h>

int main() 
{
    double num1, num2, num3;

    printf("Enter three different numbers: ");
    scanf("%lf %lf %lf", &num1, &num2, &num3);

    // if num1 is greater than both num2 and num3, num1 is the largest
    if (num1 >= num2 && num1 >= num3)
        printf("%.2f is the largest number.", num1);

    // if num2 is greater than both num1 and num3, num2 is the largest
    if (num2 >= num1 && num2 >= num3)
        printf("%.2f is the largest number.", num2);

    // if num3 is greater than both num1 and num2, num3 is the largest  
    if (num3 >= num1 && num3 >= num2)
        printf("%.2f is the largest number.", num3);

    return 0;
}
########################################################################
########################################################################


#include <stdio.h>

int main() 
{
    double num;

    do{

    printf("Enter a number: ");
    scanf("%lf", &num);

    if (num>0) printf("%.2f is positive. \n",num);
    else if (num<0) printf("%.2f is negative. \n",num);
    else printf("You entered zero. \n");


    } while(1);

return 0;  
}

########################################################################

#include <stdio.h>

int main() 
{
    float num;

    printf("Enter a number: ");
    scanf("%f", &num);

    if (num <= 0) 
    {
        if (num == 0)
        {
            printf("You entered 0.");
        }
        else
        {
            printf("You entered a negative number.");
        }  
    } 
    else
    {
        printf("You entered a positive number.");
    }
    return 0;
}


########################################################################
########################################################################

// the upper case alphabet 97 to 122 // 65 to 90

#include <stdio.h>

int main() 
{
    char C;

    do{

    printf("Enter a character: ");
    scanf("%c", &C);
    fflush(stdin);fflush(stdout)

    if ( C >= 65 && C <= 90 || C >= 97 && C <= 122) printf("%c is an alphabet. \n",C);
    else printf("%c is not an alphabet. \n",C);

    } while(1);

return 0;  
}

########################################################################

#include <stdio.h>

int main() 
{
    char c;

    printf("Enter a character: ");
    scanf("%c", &c);

    if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
    {
        printf("%c is an alphabet.", c);
    }
    else
    {
        printf("%c is not an alphabet.", c);
    }
    return 0;
}

########################################################################
########################################################################

#include <stdio.h>

int main() 
{
    int i=1,n,sum=0;
    printf("Give n: "); 
    scanf("%d",&n);
    
    while(i<=n){
        sum = sum + i; 
        i++;
    }

    printf("sum = %d\n",sum); 


    return 0;
}

########################################################################

#include <stdio.h>

int main() 
{
    int n, i, sum = 0;

    printf("Enter a positive integer: ");
    scanf("%d", &n);

    for (i = 1; i <= n; ++i) 
    {
        sum += i;
    }
    printf("Sum = %d", sum);
    return 0;
}

########################################################################
########################################################################

#include <stdio.h>

int main() 
{
    int n, i, fact = 1;

    printf("Enter an integer: ");
    scanf("%d", &n);

    if (n<0) printf("Error!!! Factorial of negative number doesn't exist.");

    else if (n>0){
    for (i = 1; i <= n; ++i) 
    {
        fact *= i;
    }
    printf("Factorial = %d", fact);}

    else if (n == 0) {fact =1; printf("Factorial = %d", fact);}


    return 0;
}
########################################################################

#include <stdio.h>

int main() 
{
    int n, i;
    unsigned long long fact = 1;

    printf("Enter an integer: ");
    scanf("%d", &n);

    if (n < 0)
    {
        printf("Error! Factorial of a negative number doesn't exist.");
    }
    else 
    {
        for (i = 1; i <= n; ++i) 
        {
            fact *= i;
        }
        printf("Factorial of %d = %llu", n, fact);
    }
    return 0;
}

########################################################################
########################################################################

#include <stdio.h>

int main() 
{
    char operator;
    float operand1,operand2;

    while(1){

    printf("Enter operator either +,-,* or / : ");
    scanf(" %c",&operator);

    printf("\nEnter two operands :");
    scanf("%f %f",&operand1,&operand2);


    switch (operator)
    {
    case '+':
        printf("%.1f + %.1f = %.1f \n",operand1,operand2,operand1+operand2);
        break;

    case '-':
        printf("%.1f - %.1f = %.1f \n",operand1,operand2,operand1-operand2);
        break;
    
    case '*':
        printf("%.1f * %.1f = %.1f \n",operand1,operand2,operand1*operand2);
        break;

    case '/':
            if (operand2 != 0) {
                printf("%.1f / %.1f = %.1f\n", operand1, operand2, operand1 / operand2);
            } else {
                printf("Error: Division by zero is not allowed.\n");}
            break;
    
    default:
        printf("You didn't chose an existant operator! \nHere's the existant operators:\n +\t -\t *\t /\t ");
        break;
    }
    }

    
    return 0;
}
########################################################################
#include <stdio.h>

int main() 
{
  char op;
  float first, second;

  printf("Enter an operator (+, -, *, /): ");
  scanf("%c", &op);

  printf("Enter two operands: ");
  scanf("%f %f", &first, &second);

  switch (op) 
  {
    case '+':
      printf("%.1f + %.1f = %.1f", first, second, first + second);
      break;
    case '-':
      printf("%.1f - %.1f = %.1f", first, second, first - second);
      break;
    case '*':
      printf("%.1f * %.1f = %.1f", first, second, first * second);
      break;
    case '/':
      printf("%.1f / %.1f = %.1f", first, second, first / second);
      break;

    default:
      printf("Error! operator is not correct");
  }
  return 0;
}
*/