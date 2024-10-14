# Pointers

The main task of pointer is not storing data, but storing address of a variable.

**C code**
```

#include <stdio.h>

int main() {
    int x = 10;


    printf("value of x is %d\n", x);

    int* ptr = &x;

    *ptr = 20;

    printf("Value of ptr is %d\n", ptr);
}

```

**Output**
```
value of x is 10
Value of ptr is 6422036
```

`6422036` is the location of `x` in *memory*

### Printing value of pointed variable
```

#include <stdio.h>

int main() {
    int x = 10;


    printf("value of x is %d\n", x);

    int* ptr = &x;

    printf("Value of x is %d\n", *ptr);
}

```

Output
```
value of x is 10
Value of x is 10
```

Because we are pointing directly to unchanged value of `x` in memory.

