#include<stdio.h>
#include<errno.h>
#include<string.h>

int main(void)
{
	FILE*file;

	printf("Errno before: %d\n", errno);

	file=fopen("noExist.txt", "r");

	if(file==NULL)
	{
		printf("Errno after: %d\n", errno);
		printf("Error msg: %s\n", strerror(errno));
		perror("Message");
	}

	else
		fclose(file);

	return 0;
}
