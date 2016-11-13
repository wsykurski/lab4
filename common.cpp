#include "common.h"

void randomize_table_1d(int *tab, int size)
{
    //int * end = tab + size;
    while (size-- > 0)
    {
        *tab++ = rand() % 100 + 1;
    }
}

void randomize_table_2d(int *tab[], int rows, int columns)
{
    while (rows-- > 0)
        randomize_table_1d(*tab++, columns);
}

void print_table_1d(int *tab, int size)
{
    while (size-- > 0)
        cout << *tab++ << " , ";
    print("\n")
}

void print_table_2d(int *tab[], int rows, int columns)
{
    while(rows-- > 0)
        print_table_1d(*tab++, columns);
}
