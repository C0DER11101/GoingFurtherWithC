# assert(e)
>It's actually macro and not a function.

It's in `assert.h` header file.

This macro takes a condition as an argument, if that condition yields true, then nothing happens but if that condition yields false then our program will abort along with descriptive message telling us what went wrong.

**The definition of the** `assert` **depends on the state of the macro** `NDEBUG` **which is _not defined_ in** `assert.h`. **If** `NDEBUG` **is defined, then** `assert` **is defined as an expression which does nothing. Otherwise** `assert` **will print debugging information if the expression it tests is false**.

Following are the programs and their outputs:

1. [6.c](https://github.com/C0DER11101/GoingFurtherWithC/blob/MoreC/tests/6.c).

**Output:**

<img src="https://user-images.githubusercontent.com/96164229/239557098-1a4a7c83-b467-4f76-9dd0-4035d929a86a.PNG" width="60%" height="60%">

2. [6b.c](https://github.com/C0DER11101/GoingFurtherWithC/blob/MoreC/tests/6b.c).

**Output:**

<img src="https://user-images.githubusercontent.com/96164229/239557156-9d1c4898-322a-4c82-a9e1-3f1b24de5116.PNG" width="60%" height="60%">

3. [6c.c](https://github.com/C0DER11101/GoingFurtherWithC/blob/MoreC/tests/6c.c).

**Output:**

<img src="https://user-images.githubusercontent.com/96164229/239591084-dc99310e-815e-414e-b7d2-4be0c72b30a5.PNG" width="60%" height="60%">

4. [6d.c](https://github.com/C0DER11101/GoingFurtherWithC/blob/MoreC/tests/6d.c).

**Output:**

<img src="https://user-images.githubusercontent.com/96164229/239591190-cabae50e-fd28-4a56-9706-e8340cf96e25.PNG" width="60%" height="60%">

<p align="center">
&#9678; &#9678; &#9678;
</p>
