/* handling string input with spaces using scanf() */

#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	char buffer[100];

	printf("enter a string: ");
	scanf("%[^\n]%*c", buffer);
	
	printf("\nString is: %s\n", buffer);

	return 0;
}
