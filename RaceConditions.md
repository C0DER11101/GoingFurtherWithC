# Race conditions
* Race condition occurs when a program depends on the timing of one or more events to function correctly.
* <ins>When race condition occurs</ins>: A race condition typically occurs when multiple threads access a **shared** variable(or state) at the same time.

```c
#include<stdio.h>
#include<pthread.h>
#include "bank.h"

// multi-threaded program!

void* deposit(void*);

int main(void){
	int before=readBalance();

	int depAmt1=300;
	int depAmt2=200;

	printf("Before: %d\n", before);

	pthread_t thread1;
	pthread_t thread2;

	pthread_create(&thread1, NULL, deposit, &depAmt1);
	pthread_create(&thread2, NULL, deposit, &depAmt2);

	// join both the threads with the main thread
	pthread_join(thread1, NULL);
	pthread_join(thread2, NULL);

	int after=readBalance();
	printf("After: %d\n", after);

	return 0;
}

void* deposit(void* amt){
	int accountBalance=readBalance();
	accountBalance+=*((int*)amt);
	writeBalance(accountBalance);

	return NULL;
}

/* The two threads are accessing a shared variable named "balance" which is defined in bank.c("balance" is a global variable) */

/* What is going on? */

// ANS:

/*
 * Thread #1                       Thread#2                           Bank Balance
 * ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
 * readBalance()<---------------------------------------------------------0
 * balance=0
 *                                 readBalance()<-------------------------0
 *                                 balance=0
 * accountBalance+=300
 * accountBalanceBalance=300
 *                                 accountBalance+=200
 *                                 accountBalance=200
 * writeBalance(300)----------------------------------------------------->300
 * balance=300
 *                                 writeBalance(200)--------------------->200
 *                                 balance=200
 */
```
* So this is how multi-threaded programs actually run **parallelly**.

<p align="center">
</p>
