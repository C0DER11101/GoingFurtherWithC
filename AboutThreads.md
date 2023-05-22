# Threads
>A regular C program is a single-threaded C program where one sequence of statements executes over a over time.

A multi-threaded program has multiple sequences of statements that execute over the same period of time. **Multi-threaded programs can execute in parallel or concurrently.**

**How to create threads in C?**
>For this we will use the `pthread.h` library.

How it works: We call `pthread_create` to create a thread and then we give it a function that we want to run and that function will run in its own thread. To join this thread back with the main thread, we will use `pthread_join`. `pthread_join` will pause until the thread(that we created) has completed its work.

**Declaration of pthread_create:**
```c
int pthread_create(pthread_t*thread, const pthread_attr_t*attr, void*(*start_routine)(void*), void*arg);
```

* `*thread` $\rightarrow$ pointer to the `pthread_t` variable.
* `*attr` $\rightarrow$ we can set attributes of the thread using this.
* `void*(*start_routine)(void*)` $\rightarrow$ pointer to function.
* `*arg` $\rightarrow$ used to pass arguments to the function(the third argument).

**Declaration of pthread_join:**
```c
int pthread_join(pthread_t thread, void*retval);
```

* `thread` $\rightarrow$ the thread that we are joining with the main thread of execution.
* `retval` $\rightarrow$ this argument can be used to work with the return value from that function.

**Compile your C program that's using pthread via this command:**

```bash
gcc -pthread myprogram.c -o myprg
```

[https://stackoverflow.com/questions/1662909/undefined-reference-to-pthread-create-in-linux](https://stackoverflow.com/questions/1662909/undefined-reference-to-pthread-create-in-linux).


Programs:

1. [17.c](https://github.com/C0DER11101/GoingFurtherWithC/blob/MoreC/tests/17.c).

**Output:**

<img src="https://user-images.githubusercontent.com/96164229/239784157-e885408e-cfc2-42c1-80b7-f784ebd6b0b0.png" width="60%" height="60%">

2. [17b.c](https://github.com/C0DER11101/GoingFurtherWithC/blob/MoreC/tests/17b.c).

**Output:**

<img src="https://user-images.githubusercontent.com/96164229/239784213-37c45759-5fdf-464c-8da5-fac569e82d8f.png" width="60%" height="60%">

3. [17c.c](https://github.com/C0DER11101/GoingFurtherWithC/blob/MoreC/tests/17c.c).

4. [17d.c](https://github.com/C0DER11101/GoingFurtherWithC/blob/MoreC/tests/17d.c).

**Output:**

<img src="https://user-images.githubusercontent.com/96164229/239883569-6a60b950-3dff-43bc-b6a8-b50d5d24f1c3.png" width="60%" height="60%">

_Here we just called_ `computation` _twice, first call with argument_ `value1` _and second call with argument_ `value2`. _This is a single-threaded program, that's why operations are performed one after the other. So the first call is executed first and then the second call is executed._

5. [17e.c](https://github.com/C0DER11101/GoingFurtherWithC/blob/MoreC/tests/17e.c).

**Output:**

<img src="https://user-images.githubusercontent.com/96164229/239883687-2f921d50-310c-49dc-b5c1-a4418ceb0a24.png" width="60%" height="60%">

**This is a multi-threaded program.**

_Here we can see a vast difference between the time taken by this program to display its output and the time taken by_ `17d.c`_to display its output._

6. [17f.c](https://github.com/C0DER11101/GoingFurtherWithC/blob/MoreC/tests/17f.c).

**Output:**

<img src="https://user-images.githubusercontent.com/96164229/239884975-dfb3259e-af20-482b-a0d1-71ba094cfcf9.png" width="60%" height="60%">

_Time taken by this program to display is neither too less nor too long. Here, we created a thread for_ `value1` _and then we joine this thread, and then again we created another thread for_ `value2` _and then again we joined it._ So `pthread_join` for `thread1` will basically wait until `thread1` completes it work(that is finding sum). Same goes for `pthread_join` for `thread2`.

<p align="center">
&#9678; &#9678; &#9678;
</p>
