#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<time.h>

void runningTime();

time_t start, end;


int main(void)
{
	time(&start);

	printf("\nHello, this is main()\n");

	int a;
	printf("enter a value: ");
	scanf("%d", &a);

	sleep(1);

	for(int i=0; i<10; i++)
	{
		printf("%d\n", a+i);
		sleep(2);
	}

	atexit(runningTime);
	return 0;
}

void runningTime()
{
	time(&end);

	double diff=difftime(end, start);

	printf("\nProgram ran for %lfs\n", diff);
}
