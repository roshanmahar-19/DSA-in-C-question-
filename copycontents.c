#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *source, *target;
    char ch;

    source = fopen("source.txt", "r");

    if(source == NULL) {
        printf("Source file not found");
        return 1;
    }

    target = fopen("target.txt", "w");

    if(target == NULL) {
        printf("Target file cannot be created");
        return 1;
    }

    while((ch = fgetc(source)) != EOF) {
        fputc(ch, target);
    }

    printf("File copied successfully");

    fclose(source);
    fclose(target);

    return 0;
}