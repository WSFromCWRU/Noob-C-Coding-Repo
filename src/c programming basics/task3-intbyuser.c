#include <stdio.h>
#include <stdlib.h>
// C program to print an integer entered by the user
// "&" is address

// Printing an Integer in C is one of the most basic tasks. 
// Input and output of the elements are essential for taking input 
// from the user and then giving the output to the user. Here we are 
// going to take an integer as input from the user with the help of 
// the scanf() function and print that integer with the help of the 
// printf() function in C language. 

int main(int argc, char const *argv[])
{
    int number;
    printf("Please enter an integer: \n");
    scanf("%d", &number);
    printf("\nYou entered: %d\n", number);
    return 0;
}
