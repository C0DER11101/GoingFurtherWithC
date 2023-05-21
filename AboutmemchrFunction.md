# `void*memchr(void*__s, int __c, size_t __n);`
>Finds the first occurrence of any character in the character array. Declared in `string.h`

* `__s` $\rightarrow$ the string.
* `__c` $\rightarrow$ the character that we are trying to find in `__s`.
* `__n` $\rightarrow$ how far in the character array to look. If it's 4, then `memchr` would look 4 characters deep into the array i.e it would look at the first 4 characters to check whether `__c` is among them or not.


>This function returns a pointer to the first occurrence of `__c` in the character array `__s`. Returns NULL if `__c` is not found.

`memchr` _will also return NULL in case if_ `__c` _is in the character array but the number of characters that allow_ `memchr` _to look into the character is less than the occurrence of_ `__c`.

Programs:

1. [16.c](https://github.com/C0DER11101/GoingFurtherWithC/blob/MoreC/tests/16.c).

**Output:**

<img src="https://user-images.githubusercontent.com/96164229/239715695-e4cfe7ac-cc9e-4916-89c6-7e77e343d0a0.png" width="60%" height="60%">

2. [16b.c](https://github.com/C0DER11101/GoingFurtherWithC/blob/MoreC/tests/16b.c).

**Output:**

<img src="https://user-images.githubusercontent.com/96164229/239715701-535882e0-a5d7-4691-94e4-f84c599999b3.png" width="60%" height="60%">

Example:

If we have a string: `"qwertyuip"` and we want to the find the first occurrence of the letter `u` in the given string, but we called `memchr` with the following arguments:

```c
char string[]="qwertyuip";
char*pos=memchr(string, 'u', 5);
```

We can see that `u` occurs at index 6 or the $7^{th}$ position but the `memchr` goes only `5` characters deep into the character array `string`. So `memchr` returns NULL which gets stored in `pos`.

3. [16c.c](https://github.com/C0DER11101/GoingFurtherWithC/blob/MoreC/tests/16c.c).

**Output:**

<img src="https://user-images.githubusercontent.com/96164229/239715708-77e574a0-2acd-48b9-9fae-969503ddd84d.png" width="60%" height="60%">

4. [16d.c](https://github.com/C0DER11101/GoingFurtherWithC/blob/MoreC/tests/16d.c).

**Output:**

<img src="https://user-images.githubusercontent.com/96164229/239715714-d70a1ea7-af2b-4255-9fab-e6f1d5fe5ece.png" width="60%" height="60%">

<p align="center">
&#9678; &#9678; &#9678;
</p>
