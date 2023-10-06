# Explanation of programs

* Single threaded program:
```c
#include<stdio.h>
#include<pthread.h>

// for a single thread!

void* computation(void*value);

int main(void){

	pthread_t thread1;   // this will be used to create and manage our thread

	long value=1;
	pthread_create(&thread1, NULL, computation, &value);     // the last argument passed to this function is the argument that computation() will take!

	pthread_join(thread1, NULL);      // join the created thread to the main thread once the it completes its execution!

	return 0;
}

void* computation(void*value){
	printf("Computation: %ld\n", *((long*)value));

	return NULL;
}
```
* This program is a simple program in C, here actually it's similar to just calling the `computation()` function.

* Multi-threaded program
```c
#include<stdio.h>
#include<pthread.h>

// for multiple threads

void* computation(void*);

int main(void){

	pthread_t thread1;
	pthread_t thread2;

	long value1=1;
	long value2=2;

	pthread_create(&thread1, NULL, computation, &value1);
	pthread_create(&thread2, NULL, computation, &value2);

	pthread_join(thread1, NULL);
	pthread_join(thread2, NULL);
	return 0;
}

void* computation(void*arg){
	long sum=0;
	long*value=arg;

	for(long i=0; i<1000000000; i++)
		sum+=*value;

	return NULL;
}
```
* Here, we are creating two threads for executing the `computation()` function. So, these two threads will execute in **parallel**. This is also called **concurrent** execution.
* `pthread_t` api will be used to create a thread variable. This variable will be used to create a thread.
* `pthread_create()` creates a thread.
* `pthread_join()` basically joins the created thread back with the main thread once it completes its execution.
* `pthread_join()` is going to pause and wait until the created thread completes its work/execution.
* Since we have created two threads in the program above, this program will completes its execution very early because both the created threads are running **concurrently**.

* Normal program:
```c
#include<stdio.h>
#include<pthread.h>

void*computation(void*);

int main(void){

	long value1=1;
	long value2=2;

	computation(&value1);
	computation(&value2);
	return 0;
}

void*computation(void*value){
	long sum=0;
	long*arg=value;

	for(long i=0; i<1000000000; i++)
		sum+=*arg;

	return NULL;
}
```
* This is a normal program, where we call the `computation()` function twice.
* This program takes much longer to execute than the multi-threaded program.

* Single threaded program:
```c
#include<stdio.h>
#include<pthread.h>

void*computation(void*);

int main(void){

	long value1=1;
	long value2=2;

	pthread_t thread1;
	pthread_t thread2;

	pthread_create(&thread1, NULL, computation, &value1);   // creating one thread
	pthread_join(thread1, NULL);

	pthread_create(&thread2, NULL, computation, &value2);   // creating the second thread
	pthread_join(thread2, NULL);
	return 0;
}

void*computation(void*arg){
	long sum=0;

	long*value=arg;

	for(int i=0; i<1000000000; i++)
		sum+=*value;

	return NULL;
}
```
* This program is much similar to the normal program because here we are creating two threads but we are joining them to the main thread one at a time. Which means that when `thread1` will be created, upon completion of its execution it will be joined with the main thread and **then** `thread2` will be created which, upon completion, will be joined with the main thread.
* So the threads execute **one after the other**, which is going to increase the execution time.

<p align="center">
&#9678; &#9678; &#9678;
</p>
