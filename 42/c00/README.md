- how to know size of characters 
```c
#include<stdio.h>
{
    char c;
    printf("%lu\n",sizeof(c));
}
```
- how to know size of characters 2
```c
#include<stdio.h>
{
    char c;
    c = 'k';
    printf("%lu %d %c \n",sizeof(c), c, c);
}
```

- references:
    - [codeforwin.org: list of all format specifiers in c programming](https://codeforwin.org/2015/05/list-of-all-format-specifiers-in-c-programming.html)
