# Handling string input with spaces using scanf()

To store a string with spaces using scanf() using this pattern:

`%[^\n]%*c`

`[^\n]` means match any character that is not a newline character.

`*` means 0 or more occurences of characters.

[1.c](https://github.com/C0DER11101/GoingFurtherWithC/blob/MoreC/tests/1.c)

**Output:**

<img src="https://user-images.githubusercontent.com/96164229/238131187-ccc68b4f-c183-484b-84ad-381236d41935.png" width="60%" height="60%">

We can also use fgets() to handle string with white spaces[See [CPrograms](https://github.com/C0DER11101/CPrograms)]

<p align="center">
&#9678; &#9678; &#9678;
</p>
