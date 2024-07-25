#include "stdio.h"
int a[100];

void a_1(){
    int a[100];
}

int main(){
    //int a=5;
    {
        int a[100];
        printf("%d\n",a);

    }
    /*{   int a=11;
        printf("%d\n",a);
        a++;
    }*/
    printf("%d\n",a);
    a_1();
    printf("%d\n",a);

}
