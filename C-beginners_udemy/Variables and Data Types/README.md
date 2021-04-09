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
