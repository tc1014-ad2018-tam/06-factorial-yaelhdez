//Carlos Yael Hernandez Alcala
//A01412016
//A01412016@ITESM.MX


#include <stdio.h>

int main() {

    int tofact, i, fact = 1; //Declaration of varaibles

    printf("Give a number to calculate its factorial\n");
    scanf("%d", &tofact); //variable "tofact" request

    for (i = tofact; i > 1; i--){ //this "for" control all the factorial process
        fact = fact * i; //operation of the factorial
    }
    printf("The factorial of %d = %d\n", tofact, fact); //output of the factorial
    return 0;
}