#include <stdio.h>

int main()
{
    FILE *fptr;
    fptr = fopen("open.txt", "w");
    fprintf(fptr, "%c", ' ');
    fprintf(fptr, "%c", 'B');
    fprintf(fptr, "%c", 'Y');
    fprintf(fptr, "%c", 'E');
    fprintf(fptr, "%c", ' ');
    fprintf(fptr, "%c", 'E');
    fprintf(fptr, "%c", 'V');
    fprintf(fptr, "%c", 'E');
    fprintf(fptr, "%c", 'R');
    fprintf(fptr, "%c", 'Y');
    fprintf(fptr, "%c", 'O');
    fprintf(fptr, "%c", 'N');
    fprintf(fptr, "%c", 'E');
    return 0;
}