#include<stdio.h>
#include<sys/stat.h>               // for  mkdir() function
#include<errno.h>

int main(void){
	if(mkdir("test1", 0777)<0){
		perror("ERROR");
		return 1;
	}
	return 0;
}
