#include <stdio.h>
#include <unistd.h>
#include <string.h>
#define DELAY 500000
int main(int argc, char * argv[]) {
	char * filename = argv[1];
	char buffer[60];
	int i;
	FILE * filehandler;
	if(!access(filename,W_OK)) {
		for(int i=0;i<DELAY;i++) {
			int a= i^2;
		}
		filehandler=fopen(filename, "a+");
		fwrite("\n",sizeof(char),1,filehandler);
		fwrite(buffer,sizeof(char),strlen(buffer),filehandler);
		fwrite("\n",sizeof(char),1,filehandler);
	fclose(filehandler);
	}
	else {
	printf("No permission\n");
	}
}