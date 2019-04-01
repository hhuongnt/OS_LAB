#include<stdio.h>
#include<unistd.h>
#include<sys/types.h>
#include<string.h>
#define DELAY 500000000
int main(int argc, char * argv[]){
	char * filename = argv[1];
	char buffer[60];
	int i;
	FILE * filehandler;
	scanf("50%s",buffer);
	if(!access(filename,W_OK)){
		for(int i = 0; i < DELAY;i++){
			int a = i^2;
		}
		seteuid(getuid());
		filehandler=fopen(filename,"a+");
		fwrite("\n",sizeof(char),1,filehandler);
		fwrite(buffer,sizeof(char),strlen(buffer),filehandler);
		fwrite("\n",sizeof(char),1,filehandler);
		fclose(filehandler);
	}
	else{
	printf("No permission no\n");
	}
}
