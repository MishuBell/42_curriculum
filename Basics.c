// Notes


//Header files
// < standart c library >
// " my own library "
#include <stdio.h>
 
//Mandatory
int main()
{
    //Printing the adress of a variable
    //cast to void for c standart compliancy

    //Use % for adresses
    int x = 100;
    int y = 500;

    printf("Adress of x is %p \n", (void*)&x);
    printf("Adress of y is %p \n", (void*)&y);

    //Pointer initialization with the adress of a variable
    //Access the value of a variable using a pointer
    int* ptrX = &x;
    int* ptrY = &y;

    printf("Value of x is %d \n", *ptrX);
    printf("Value of y is %d \n", *ptrY);

    int a = 6, b = 9;
    if (a == 6 && b == 9)
    {
        printf("\n 69");
    }

}