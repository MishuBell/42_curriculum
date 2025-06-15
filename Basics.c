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
    
    //No curlies
    if (a == 7 && b == 9)
    printf("69 \n");
    else 
    printf("What? \n");

    //Curlies 
    if (a == 6 || b == 9);
    {
        printf("A is %d \n", a);
        printf("B is %d \n", b);
    }

    //Points to our char array
    char *adjective = "frightening";
    int horses = 0;
    switch(horses)
    {
        case 1:
            printf("One honsre");
            break;
        case 2:
            printf("Two honsre");
            break;  
        default:
            printf("Horses are generally %s", adjective);
    }

    
    printf("");
    int wh = 1;
    while(wh < 10)
    {
        wh++;
        printf("WH is %i \n", wh);
    }

    for (int i = 0, a = 10; i <= a; i++)
    {
        printf("I is %i \n", i); 
    }
}