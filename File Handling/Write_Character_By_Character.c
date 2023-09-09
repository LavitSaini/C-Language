#include <stdio.h>

int main()
{
    FILE *fptr;
    fptr = fopen("read.txt", "a");
    fputc(' ', fptr);
    fputc('G', fptr);
    fputc('T', fptr);
    fputc('A', fptr);
    fputc(' ', fptr);
    fputc('S', fptr);
    fputc('A', fptr);
    fputc('N', fptr);
    return 0;
}