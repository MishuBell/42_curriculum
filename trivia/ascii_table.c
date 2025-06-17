#include <stdio.h>
// Function implementation by tpointtech.com
// Source: https://www.tpointtech.com/ascii-table-in-c

int ascii_table()
{
    int ascii_table;
    printf("The complete ASCII table of characters in C");
    for (ascii_table = 0; ascii_table < 255; ascii_table++)
    {
        printf("\n The value of %c character is: %d", ascii_table, ascii_table);
    }

    return 0;
}

int ascii_table_num()
{
    int ascii_table;

    for (ascii_table = 48; ascii_table <= 57; ascii_table++)
    {
        printf("\n The value of %c character is: %d", ascii_table, ascii_table);
    }
}