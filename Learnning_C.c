#include <stdio.h>   //standard input/output library, it contains functions for input and output operations (like printf and scanf)
#include <stdbool.h> // this header file is used to include the boolean data type in C, it defines the bool type and the true and false constants
#include <string.h>  // this header file is used to include string handling functions in C, it contains functions for manipulating strings (like strlen, strcpy, strcat, etc.)
int main()           // the main function is the entry point of a C program, it is where the program starts executing
{
    // this is my first C program

    /*this is
    a multi-line comment*/

    printf("Hello, World!\n");

    printf("This is a simple C program.\n"); // the  \n is used to print a new line

    // Varialbes in C
    int myNum = 5;             // Integer (whole number)                 (4 bytes)
    float myFloatNum = 5.99;   // Floating point number                  (4 bytes)
    double myDoubleNum = 9.98; // Double-precision floating point number (8 bytes)
    char myLetter = 'D';       // Character                              (1 byte)
    char myString[] = "Hello"; // String (array of characters)           (6 bytes, including the null terminator) can also take more than 6 bytes if the string is longer
    bool isTrue = true;        // Boolean (true or false)                (1 byte)

    // Formatting output in C
    // Format specifier = special token that begin with % symbol,
    //                   followed by a chracter that indicates the type of data to be printed
    //                   and optional modifiers that specify the width, precision, or other formatting options for the output
    //                   they control how the output is formatted and displayed on the screen

    printf("Integer: %d\n", myNum);       // the %d is used to print an integer value
    printf("Float: %f\n", myFloatNum);    // the %f is used to print a float value
    printf("Double: %lf\n", myDoubleNum); // the %lf is used to print a double value
    printf("Character: %c\n", myLetter);  // the %c is used to print a character
    printf("String: %s\n", myString);     // the %s is used to print a string
    printf("Boolean: %d\n", isTrue);      // the %d is used to print a boolean value (1 for true, 0 for false)

    // Operators in C
    int a = 10;
    int b = 5; // ---> NOTE: U CAN NOT RETAIN THE DECIMAL WHEN DIVIDING TWO INTEGERS, IT WILL RETURN AN INTEGER VALUE, NOT A FLOATING POINT VALUE
    int c = 2;
    int sum = a + b;        // addition operator
    int difference = a - b; // subtraction operator
    int product = a * b;    // multiplication operator
    int quotient = a / b;   // division operator
    int modulus = a % b;    // modulus operator (returns the remainder of the division)
    int increment = a++;    // increment operator (increases the value of a by 1)
    int decrement = b--;    // decrement operator (decreases the value of b by 1)
    a += 2;                 // addition assignment operator (adds c to a and assigns the result to a)
    b -= 4;                 // subtraction assignment operator (subtracts c from b and assigns the result to b)

    // User input in C

    // Don't Declare a variable without assigning it a value, it will contain a garbage value and can cause unexpected behavior in your program
    // int age; ----> this is a variable declaration without initialization, it will contain a garbage value (BAD PRACTICE !!)

    int age = 0; // this is a variable declaration with initialization, it will contain the value 0 (GOOD PRACTICE !!)
    float GPA = 0.0;
    char grade = '\0';  // this is a null character, it is used to indicate the end of a string (AKA: the null terminator)
    char name[50] = ""; // this is an array of characters, it can hold up to 49 characters (plus the null terminator)

    printf("Enter your age:\n"); // A prompt is a message that is displayed to the user to indicate that the program is waiting for input
    scanf("%d", &age);           // the scanf function is used to read input from the user, it takes two arguments: the format specifier (which indicates the type of data to be read) and the address of the variable where the input value will be stored

    printf("Enter your GPA:\n");
    scanf("%f", &GPA);

    printf("Enter your grade:\n");
    scanf(" %c", &grade); // the space before %c is necessary to skip any whitespace characters (like newline) that may be left in the input buffer

    printf("Enter your name:\n");
    getchar();
    // scanf("%s", name); the %s is used to read a string from the input  NOTE: the scanf function with %s will read input until it encounters a whitespace character (like space or newline), so it will only read the first word of the name
    fgets(name, sizeof(name), stdin); // the fgets function is used to read a string
    name[strlen(name) - 1] = '\0';    // this is used to remove the newline character that is added by fgets at the end of the string NOTE: #include <string.h> is required to use the strlen function

    printf("Your name is: %s\n", name);
    printf("Your age is: %d\n", age); // Displaying the Values of each variable after taking the input from the user
    printf("Your GPA is: %.2f\n", GPA);
    printf("Your grade is: %c\n", grade);

    return 0;
}