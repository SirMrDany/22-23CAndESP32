#include <stdio.h>
#include "adapter.h"

int main()
{
    int stop;
    int number;
    do{
        printf("%s", "Enter Number:");
        scanf("%i", &number);
        printf ("You entered: %i\n", number);
        if(number < 0){
            stop = 1;
        }
        if(number == 2){
            week1();
        }
    }while(stop != 1);
}