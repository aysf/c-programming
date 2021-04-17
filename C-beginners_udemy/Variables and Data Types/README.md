# Chapter 5 - Variable and Data Types

## Enums and Chars

### Enums

- a data type that allows a programmer to define a variable and specify the valid values that could be stored into that variable
    - can create a variable named "myColor" and it can only contain one of the primary colors, red yellow, or blue, and no other values
- Your first have to define the enum type and give it a name
    - initiated by the keyword enum
    - then the name of the enumerated data type
    - then list of identifier (enclosed in a set of culry braces) that define the permissible values that can be assigned to the type
- To declare a variable to be of type enum primaryColor
    - use the keyword enum
    - followed by the enumerated type name
    - followed by the variable list. So the statement
    - example ```enum primaryColor {red, yellow, blue};```
    - another example ```enum month {January, February, March, April, May, June, July, August, September, October, November, December};```
- Enums as ints -> the compiler actually treats enumeration identifiers as integers constants
- If you want to have a specific integer value associated with an enumeration identifier, the integer can be assigned to the identifier when the data type is defined
    - for example ```enum direction {up, down, left = 10, right};```
    - up = 0 because it appears first in the list
    - 1 to down because it appears next
    - 10 to left because it is explicitly assigned this value
    - 11 to right because it appears immediately after left in the list
 
 ### Char

 - Chars represent a *single character* such as the letter 'a', the digit character '6', or a semicolon (';')
 - Character literals use single quotes such as 'A' or 'Z'
 - You can also declare char variables to be unsigned
    - can be used to explicitly tell the compiler that a particular variable is a signed quantity
- Declaring a char
    - ```char broiled;``` /* declare a char variable */
    - ```broiled = 'T';``` /* OK */
    - ```broiled = T ; ``` /* NO! Thinks T is a variable */
    - ```broiled = "T"; ``` /* NO! Thinks "T" is a string */

### Escape Characters
- C contains special characaters that represent actions
    - backspacing, going to the next line, making the terminal bell ring
- We can represent these actions by using special symbol sequences
- See more escape characters from 'C Primer Plus' by Prata

## Format Specifiers
- format specifiers are used when displaying variables as output
    - they specify the type of data of the variable to be displayed

```c
int sum = 89;
print("The sum is %d\n",sum);  /* it has two arguments  */
```
- The printf() function can display as output the values of variables
    - has two items or arguments enclosed within the parentheses
    - arguments are separated by a comma
    - first argument to the printf() routine is always the character string to be displayed
    - along with the display of the character string, you might want also frequently want to have the value of certain program variables displayed

- The percent character inside the first argument is a special character recognized by the printf() function
    - the character that immediately follows the percent sign specifies what type of value is to be displayed

- Summary format specifier can be seen in "Programming in C" by Kochan

```c
#include<stdio.h>

int main()
{
    int integerVar = 100;
    float floatingVar = 331.79;
    double doubleVar = 8.44e+11;
    char charVar = 'W';

    _Bool boolvar = 0;

    printf("integerVar = %i geg535t3 %f\n", integerVar, floatingVar);
    printf("floatingVar = %f\n", floatingVar);
    printf("doubleVar = %e\n", doubleVar);
    printf("doubleVar = %g\n", doubleVar);
    printf("charVar = %c\n", charVar);
    printf("boolVar = %i\n", boolVar);

    return 0;

}
```
<<<<<<< HEAD
- how to know size of characters 
```c
#include<stdio.h>
{
    char c;
    printf("%lu\n",sizeof(c));
}
```

- references:
    - [codeforwin.org: list of all format specifiers in c programming](https://codeforwin.org/2015/05/list-of-all-format-specifiers-in-c-programming.html)


## Command Line Arguments

To pass data into a program

- there are times when a program is developed that requires the user to enter a small amount of information at the terminal
- This information might consist of a number indicating the triangular number that you want to have calculated or a word that you want to have looked up in a dictionary
- Two ways of handling this:
    - Requesting the data from the user
    - supply the information to the program at the time the program is executed (command-line arguments)
- We know that the main() function is a special function in C
    - entry point of the program
- When main() is called by the runtime system, two arguments are actually passed to the information
    - the first argument (argc for argument count) is an integer value that specifies the number of arguments typed on the command line
    - the second argument (argv for argument vector) is an array of character pinters (string)
- The first entry in this array is a pointer to the name of the program that is executing
- here an example
```c
#include<stdio.h>

int main(int argc, char *argv[])
{
    int numberOfArguments = argc;
    char *argument1 = argv[0];
    char *argument2 = argv[1];

    printf("Number of Arguments: %d", numberOfArguments);
    printf("Argument 1 is the program name: %s", argument1);
    printf("Argument 2 is the command line argument: %s", argument2);

    return 0;
}

```

## Challange -> Create and use an enum type

Requirements:

- In this challenge, you are to create a C program that defines an enum type and uses that type to display the values of some variables
- The program should create an enum type named Company
    - Valid values for this type are GOOGLE, FACEBOOK, XEROX, YAHOO, EBAY, MICROSOFT
- The program should display as output, the value of the three variabls with each variable separated by a newline
    - Correct output would be if XEROX, GOOGLE, and EBAY variables are printed in that order:
        - 2
        - 0
        - 4

Hints

- Define the enum type and its value
- Declare and initialize three variables with the values specified on the previous slide
- Use printf to display the value of the enum variables
    - Use the '\n' excape character to display a new line
    - 
=======

>>>>>>> 067bdf034a9c6d5d57f3395a7f9607f75d7a93ff
