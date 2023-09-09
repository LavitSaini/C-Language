#include <stdio.h>

int main()
{
    char ch;
    printf("Enter a Digit \n");
    scanf("%c", &ch);

    if (ch > 'a' && ch < 'z' || ch > 'A' && ch < 'Z')
    {
        printf("Entered Digit is Character \n");
    }
    
    else{
        printf("Entered Digit is Numberic \n");
    }
    return 0;
}
