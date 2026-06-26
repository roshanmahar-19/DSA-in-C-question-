#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *fp;
    char ch;
    int count = 0;

    fp = fopen("sample.txt", "w");

    if(fp == NULL) {
        printf("File cannot be created");
        return 1;
    }

    printf("Enter text (Press # to stop):\n");

    while((ch = getchar()) != '#') {
        fputc(ch, fp);
    }

    fclose(fp);

    fp = fopen("sample.txt", "r");

    while((ch = fgetc(fp)) != EOF) {
        count++;
    }

    fclose(fp);

    printf("Number of characters = %d\n", count);

    return 0;
}