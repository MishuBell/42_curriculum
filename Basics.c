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

    printf("Adress of x is %p", (void*)&x);
    printf("Adress of y is %p", (void*)&y);

    //Pointer initialization with the adress of a variable
    //Access the value of a variable using a pointer
    int* ptrX;
    int* ptrY;

    printf("Value of x is %d", *ptrX);
    printf("Value of y is %d", *ptrY);
}