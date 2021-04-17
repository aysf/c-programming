# 6. Operators

## Operators

- Operators are functions that use a symbolic name
    - perform mathematical or logical functions

- Operators are predifined in C, just like they are in most other languages, and most operators tend to be combined with the infix style

- A logical operator (sometimes called a "Boolean operator") is an operator that returns a Boolean result that's based on the Boolean result of one or two other expressions.

- An arithmetic operator is a mathematical function that takes two operands and performs a calculation on them

- Other opertors include asssignment, relational (<,>,!=), bitwise (<<,>>,~)

## Expressions and Statements

- Statements from the basic program steps of C, and most statements are constructed from expression
- An expression consists of a combination of operators and operands
    - operands are what an operator operates on
    - operands can be constants, variables, or combinations of the two
    - every expression has a value
    - example 
    ```c
    -6
    4+21
    a*(b+c/d)/20
    q = 5 * 2
    q > 3
    ```
- Statements are the building blocks of a program (declaration)
    - A program  is a series of statements with special syntax ending with a semicolon (simple statement)
    - a complete instruction to the computer
- Some of statement example:
    - Declaration statement: ```int Jason;```
    - Assignment Statement: ```Jason = 5;```
    - Function Call Statement: printf("Jason");```
    - Structure Statement: ```while(Jason<20)Jason = Jason + 1;```
    - Return Statement: ```return 0;```
- C considers any expression to be a statement if you append a semicolond (expression statements)
    - So, ```8;``` and ```3-4;``` are perfectly valid in C

## Compound Statements
- two or more statements grouped together by enclosing them in braces (block)
example:
```c
int index=0;
while(index<10)
{
    printf("hello");
    index = index + 1;
}
```

## Arithmetic Operators in C
- see tutorials points website
- let's play around with this code
```c
#include<stdio.h>

int main()
{
    int a = 33;
    int b = 15;
    int result = a + b;

    printf("result is %d\n", result);
    printf("c is %d\n", --a);
    printf("c is %d\n", ++a);
    printf("c is %d\n", a--);
    printf("c is %d\n", a++);
    
}
```

## Logical Operators
- AND &&
- OR ||
- NOT !

## Assignment Operators
- ```=``` C = A + B will assign the value of A+B to C
- ```+=```C += A is equivalent to C = C+A 
- ```-=```C -= A is equivalent to C = C-A
- ```*=```C *= A is equivalent to C = C times A
- ```/=```C /= A is equivalent to C = C / A
- ```%=```C %= A is equivalent to C = C % A
- ```<<=``` C <<= 2 is same as C = C << 2
- ```>>=``` C >>= 2 is same as C = C >> 2
- ```&=``` C &= 2 is same as C = C & 2
- ```^=``` C ^= 2 is same as C = C ^ 2
- ```|=``` C |= 2 is same as C = C | 2

## Relational Operators
for comparing two value
```==```, ```!=```, ```>```, ```<```, ```>=```, ```<=```

## Bitwise Operators


- ```&``` Binary AND Operator copies a bit to the result if it exists in both operand
- ```|``` Binary OR Operator copies a bit  if it exists in either operand
- ```^``` Binary XOR Operator copies the bit if it is set in one operand but not both
- ```~``` Binary Ones Complement Operator is unary and has the effect of 'flipping' bits.
- ```<<``` Binary Left Shift operator. The left operands value is moved left by the number of bits specified by the right operand
- ```>>``` Binary Right Shift operator.

### Truth Table of Bitwise Operators

example

```c
#include<stdio.h>

int main()
{
    unsigned int a = 60; // 0011 1100
    unsigned int b = 13; // 0000 1101
    int result = 0;

    result = a & b;
    // 0000 1100
    printf("result is %d", result);
}


```

