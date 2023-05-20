# `div_t div(int, int);`
>Declared in `stdlib.h`. Returns back a structure variable that contains both remainder and quotient after performing division.

`div_t` is a typedef synonym of for the struct. The struct has two members: `quot` and `rem` which mean quotient and remainder respectively.

This function also has a version that works with long integers: `ldiv()`. This function returns back a structure variable which has a typedef `ldiv_t` that has the same members `quot` and `rem`.


Programs:

[11.c](https://github.com/C0DER11101/GoingFurtherWithC/blob/MoreC/tests/11.c).

**Output:**

<img src="https://user-images.githubusercontent.com/96164229/239678047-32983bbe-bd08-4ce1-b29b-252da4c34c8a.PNG" width="60%" height="60%">

[11b.c](https://github.com/C0DER11101/GoingFurtherWithC/blob/MoreC/tests/11b.c).

**Output:**

<img src="https://user-images.githubusercontent.com/96164229/239678062-5ce6dfa1-232b-4e0a-9cb1-abe0941f6453.PNG" width="60%" height="60%">

<p align="center">
&#9678; &#9678; &#9678;
</p>
