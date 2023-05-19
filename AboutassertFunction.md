# assert(e)
>It's actually macro and not a function.

It's in `assert.h` header file.

This macro takes a condition as an argument, if that condition yields true, then nothing happens but if that condition yields false then our program will abort along with descriptive message telling us what went wrong.

**The definition of the** `assert` **depends on the state of the macro** `NDEBUG` **which is _not defined_ in** `assert.h`. **If** `NDEBUG` **is defined, then** `assert` **is defined as an expression which does nothing. Otherwise** `assert` **will print debugging information if the expression it tests is false**.

<p align="center">
&#9678; &#9678; &#9678;
</p>
