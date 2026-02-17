#include <stdio.h>
int main() {
    // this is my first C program

    /*this is 
    a multi-line comment*/
    
    printf("Hello, World!\n");
    
    printf("This is a simple C program.\n"); // the  \n is used to print a new line

// varialbes in C       
    int myNum = 5;               // Integer (whole number)
    float myFloatNum = 5.99;    // Floating point number    
    char myLetter = 'D';       // Character
    printf("Integer: %d\n", myNum);
    printf("Float: %f\n", myFloatNum);
    printf("Character: %c\n", myLetter);// the %d, %f, and %c are format specifiers used to print the variables in the correct format
//constants in C
    const int myConstNum = 10; // this is a constant variable, it cannot be changed after it is assigned a value
    float pi = 3.14; // this is a variable, it can be changed after it is assigned a value      
printf("Pi is: %f\n", pi);

    return 0;
}