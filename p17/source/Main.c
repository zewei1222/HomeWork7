#include <stdio.h>
#include <stdlib.h>
#define MAX 80

int main(void) {
	FILE *fptr;
	fptr = fopen("../../../txt/output.txt","r");
	int bytes;
	char str[MAX];	

	while (!feof(fptr)) {
		bytes = fread(str,sizeof(char),MAX-1,fptr);
		str[bytes] = '\0';
		printf("%s\n", str);
	}
	fclose(fptr);
	return 0;
}
