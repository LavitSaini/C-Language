#include <stdio.h>

int main()
{
    /*
    Relation Oreators-- Five Types
    >= is use for greater than and equal to
    <= is use for less than and equal to
    = is used for assignment
    == is used for equality check
    != is use for not equal to
    

    
    Logical Opreators-- Three Types
    && Opreator is used for '&& And' condition in program
    Condition of 'And' opreator:
    (True And True --> True)
    (True And False --> False)
    (False And False --> False)

    || Opreator is used for 'Or' condition in program
    Condition of '|| Or' opreator:
    (True And True --> True)
    (True And False --> True)
    (False And False --> False)

    ! Opreator is used for 'Not' condition in program
    Condition of '! Not' opreator:
    If we use this then true conditon is fasle and fasle condition is true
    */


    int age;
    printf("enter your age \n");
    scanf("%d", &age);

    if ( !(age <=100 && age > 60) && !(age < 18 && age >= 1))  
    {
        printf("you can drive \n");
    }
    else
    {
        printf("you cannot drive \n");
    }
    return 0;
}