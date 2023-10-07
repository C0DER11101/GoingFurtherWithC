#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>

int balance=0;

int readBalance(){
	sleep(1.5);
	return balance;
}

void writeBalance(int newBalance){
	sleep(1.5);
	balance=newBalance;
	printf("Balance updated\n");
}
