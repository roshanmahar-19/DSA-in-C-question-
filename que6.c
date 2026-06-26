#include <stdio.h>
#include <stdlib.h>
int main()
{
    FILE *fp;
    char ch;
    int line_count = 0;
    // FULL PATH (no confusion)
    fp = fopen("sample.txt", "r");
    if (fp == NULL)
    {
        printf("File cannot be opened!\n");
        return 1;
    }
    while ((ch = fgetc(fp)) != EOF)
    {
        if (ch == '\n')
        {
            line_count++;
        }
    }
    fclose(fp);
    printf("Total number of lines: %d\n", line_count);
    return 0;
}