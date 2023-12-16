#include <stdio.h>
#include <stdlib.h>

int main() {
	FILE *fptr1;
	FILE *fptr2;
	fptr1 = fopen("../../../txt/welcome.txt", "r");
	fptr2 = fopen("../../../txt/output.txt","w");
	char ch;
	if (fptr1 != NULL && fptr2 != NULL) {
		while ((ch = getc(fptr1)) != EOF) {
			fputc(ch, fptr2);
		}
		fclose(fptr1);
		fclose(fptr2);
	}
	else {
		printf("ÀÉ®×¶}±Ò¥¢±Ñ!\n");
	}

	
	return 0;
}
