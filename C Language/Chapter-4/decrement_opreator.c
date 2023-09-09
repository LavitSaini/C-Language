#include <stdio.h>

int main(){
    int z;
    scanf("%d", &z);
    // --z opreator first decrease then printf }  decrement opreators
    // z-- opreator first print then decrease  }

    // += , -= , *= , /= , %= is Compound assignment opreators

    if(z > 5)
    {
    printf("The Value of z is %d \n", z--);
    printf("The Value of z is %d \n", --z);
    printf("The Value of z is %d \n", --z);
    }
    else 
    {  
    printf("The Value of z is not satisfied \n", z);    
    }
    return 0;
}