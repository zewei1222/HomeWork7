#include <stdio.h>
#include <stdlib.h>

int main() {
	FILE *fptr;
	char ch;
	int count = 0;
	

	fptr = fopen("../../../txt/welcome.txt","r");
	if (fptr != NULL) {
		while ((ch = getc(fptr)) != EOF) {
			printf("%c", ch);
			count++;
		}
		fclose(fptr);
		printf("\n總共有%d個字元\n", count);
	}
	else {
		printf("開啟檔案失敗\n");
	}

	system("pause");
	return 0;
}
