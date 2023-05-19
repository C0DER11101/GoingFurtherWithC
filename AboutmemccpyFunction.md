# `void*memccpy(void*__dst, const void*__src, int __c, size_t __n);`
>memccpy() is declared in `string.h`.

* `__dst` $\rightarrow$ destination string.
* `__src` $\rightarrow$ source string.
* `__c` $\rightarrow$ terminating character uptill which the copying of `__src` into `__dst` will continue.
* `__n` $\rightarrow$ maximum number of characters that will be copied from `__src` to `__dst`.

>**memccpy() doesn't provide the null terminator at the end of the copied string!!**

`memccpy()` returns a pointer to the next character after `__c` in `__dst`.

So, we can enter a null character into that position where that pointer points to.

If `__c` is not in `__src` then `__n` character will be copied to `__dst` and `memccpy()` will return a null pointer.

[7.c](https://github.com/C0DER11101/GoingFurtherWithC/blob/MoreC/tests/7.c).

**Output:**

<img src="https://user-images.githubusercontent.com/96164229/239601455-22028f6c-98f8-4ff6-9213-6c3557c92467.PNG" width="60%" height="60%">

[7b.c](https://github.com/C0DER11101/GoingFurtherWithC/blob/MoreC/tests/7b.c).

**Output:**

<img src="https://user-images.githubusercontent.com/96164229/239601804-e732c8ab-9149-4065-b857-3908ac939e65.PNG" width="60%" height="60%">

The above we can clearly see that there is not null character('\0') added by `memccpy()`.


[7c.c](https://github.com/C0DER11101/GoingFurtherWithC/blob/MoreC/tests/7c.c).

**Output:**

<img src="https://user-images.githubusercontent.com/96164229/239602185-80fcc43f-6037-44cf-966b-c343d4d86578.PNG" width="60%" height="60%">

Here we have used the pointer returned by `memccpy()` to enter the null character at the end of `dest`.


<p align="center">
&#9678; &#9678; &#9678;
</p>
