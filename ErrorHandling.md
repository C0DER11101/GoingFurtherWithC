#Error handling in C
>The error handling facilities provided by C allow to detect and recognise what error has occurred in terms of a number.

These facilities are in the `errno.h` header file.

[2.c](https://github.com/C0DER11101/GoingFurtherWithC/blob/MoreC/tests/2.c)

## void perror(const char*)

`perror()` used in `2.c` does the same thing as the `printf()` written above it.

Whatever string you provide as argument to `perror`, it will display it in the output and put a colon and a space and after that it display the error message based on the value of `errno`.

If no string is given as argument to `perror` i.e. `perror` takes only a null string as argument: `perror("");` then only the error message is printed in the output screen.
<p align="center">
&#9678; &#9678; &#9678;
</p>
