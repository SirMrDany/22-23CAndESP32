#include <stdio.h>

#include "adapter.h"

void print_function( char letter );
int ctr;
int i;

void week1( void )
{
    char star = '*';
    char dash = '-';
    for (i = 0 ; i < 10; i++ )
    {
        print_function( star );
        print_function( dash );
        printf("\n");
    }
}

void print_function ( char letter )
{
    for ( ctr = 0; ctr < 9; ctr++) 
    {
        printf("%c", letter);
    }
}