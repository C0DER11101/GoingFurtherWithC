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
		fprintf(stderr, "Errno after: %d\n", errno);
		perror("Error msg");
		fprintf(stderr, "Message: %s\n", strerror(errno));
	}

	else
		fclose(file);

	return 0;
}
