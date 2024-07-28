/*# include "stdio.h"

struct student {
    char name[70];
    int roll;
    float marks;

};

int main(){

    struct student s;

// Input
    printf("Enter information of students: ");
    printf("\nEnter name: ");
    fgets(s.name,70,stdin);
    printf("Enter roll number: ");
    scanf("%d",&s.roll);
    printf("Enter marks: ");
    scanf("%f",&s.marks);

//Output
    printf("\nDisplaying Information:");
    printf("\nName: %s",s.name);
    printf("Roll: %d",s.roll);
    printf("\nMarks: %.2f",s.marks);   
    
    
}*/


/*
// Création de fonctions pour la modularité. 

# include "stdio.h"

// 12 pouces = 1 pied, en dessous du 12 les pouces prennent la valeur

struct distance_info {
    int foot;
    float inches;
};

// Prototypes des fonctions
struct distance_info check_inches(struct distance_info d);
struct distance_info add_2(struct distance_info d1, struct distance_info d2);
void print_add(struct distance_info d);


// fonction 1 ajout de "inches" pour les 12+
struct distance_info check_inches (struct distance_info d){

//Si la somme de "inches" est superieur a 12 :
// Ajout de 1 pour "foot" + Soustraction de 12 pour "inches"
    if (d.inches >= 12.0) {
        d.foot += (int)(d.inches / 12);
        d.inches = d.inches - (int)(d.inches / 12) * 12;
    }

    return d;

}

 //fonction 2 prend les distances, et l'ajoute.
struct distance_info add_2(struct distance_info d1, struct distance_info d2) {
    struct distance_info d;

    printf("Enter information for 1st distance\n");
    printf("Enter feet: ");
    scanf("%d",&d1.foot);
    printf("Enter inch: ");
    scanf("%f",&d1.inches);

    printf("Enter information for 2nd distance\n");
    printf("Enter feet: ");
    scanf("%d",&d2.foot);
    printf("Enter inch: ");
    scanf("%f",&d2.inches);


    d.foot = d1.foot + d2.foot;
    d.inches = d1.inches + d2.inches;

    d = check_inches(d);

    return d;
 }

 //fonction 3 affiche la somme.
 void print_add(struct distance_info d)
 {

    printf("\nSum of distances = %d'%.2f''",d.foot,d.inches);
 }

int main()
{
	struct distance_info d1, d2, d;
    d = add_2(d1, d2);
	print_add(d);

	return 0;
}
*/

/*

# include "stdio.h"

// 12 pouces = 1 pied, en dessous du 12 les pouces prennent la valeur

struct complex_number {
    float real_number;
    float imag_number;
};

struct complex_number add(struct complex_number z1,struct complex_number z2);
struct complex_number take_complex_number(int num);
void print_add(struct complex_number z);


int main(){

    struct complex_number z,z1,z2;

    z1 = take_complex_number(1);
    z2 = take_complex_number(2);
    z = add(z1,z2);
    print_add(z);

}

struct complex_number add(struct complex_number z1,struct complex_number z2) 
{

    struct complex_number z;

    z.real_number = z1.real_number + z2.real_number;
    z.imag_number = z1.imag_number + z2.imag_number;

    return z;

}

struct complex_number take_complex_number(int num)
{ 
    struct complex_number z;
    
    printf("Give the Real number of complex number%d: ",num);
    scanf("%f",&z.real_number);
    printf("Give the Imaginary number of complex number%d: ",num);
    scanf("%f",&z.imag_number);

    return z;

}

 void print_add(struct complex_number z)
 {
    char sign;
    if (z.imag_number >= 0) sign = '+';
    else sign = '-';

    printf("\nSum of complex number = %.2f %c %.2fi",z.real_number,sign,z.imag_number);
 }

*/





