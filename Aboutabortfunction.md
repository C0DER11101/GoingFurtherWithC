# abort()
>This function allows us to terminate the execution of our program.
This function is defined in the `stdlib.h` header file.

**Declaration:**
```c
void abort();
```

`abort()` function does a _hard exit_ of our program. It doesn an immediate exit of our program. It dumps the core.

Dumping the core will give the image of the memory at the time of the abort and it is going to save it on disk so that we can look at it to help debug what went wrong in our program.

Since `abort` does a hard exit of our program, it will not do some of the regular things/operations that are done when our program exits normally. `atexit()` works only when our program exits using the `return` statement or the `exit()` method. `atexit()` will not work with `abort()`.

So, `abort()` will not run the functions that have been set to run by atexit().

* `abort()` might not close files that are open,
* it might not delete temporary files and,
* it might not flush the stream buffer.

`abort()` is the most **extreme** way to terminate the execution of our program.

>We will use `abort()` when something has gone so wrong with our program's execution that we need to core dump to analyze it or when our program might be in such a corrupt state that it's not safe to do anymore work.


<p align="center">
&#9678; &#9678; &#9678;
</p>
