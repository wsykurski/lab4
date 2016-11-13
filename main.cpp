#include <iostream>
#include "macros.h"
#include "lab20.h"
#include "lab19.h"
using namespace std;

#define print(x) cout << x << endl;

void randomize_table_1d(int *tab, int size)
{
    //int * end = tab + size;
    while (size-- > 0)
    {
        *tab++ = rand() % 100 + 1;
    }
}

void randomize_table_2d(int**tab, int rows, int columns)
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
void print_table_2d(int **tab, int rows, int columns)
{
    while(rows-- > 0)
        print_table_1d(*tab++, columns);
}

void erase(int* a, int index, int max)
{
    while (index < max - 1)
        *(a + index) = *(a + ++index);
    *(a + index) = NULL;
}

void insert(int* a, int max, int index, int key)
{
    a += max;
    while(max-- > index)
    {
        *a-- = *a;
    }
    *a = key;
}

int zadanie16()
{
    print("Zadanie 16a")
    {
        const int tab_size = 8;
        int *tab = new int[tab_size];
        randomize_table_1d(tab, tab_size);
        print("Tablica przed zmianą:")
        print_table_1d(tab, tab_size);
        erase(tab, 5, tab_size);
        print("tablica po zmianie:")
        print_table_1d(tab, tab_size);
        delete tab;
    }
    print("\nZadanie 16b\n")
    {
        const int tab_size = 8;
        int *tab = new int[tab_size];
        randomize_table_1d(tab, tab_size);
        print("Tablica przed zmianą:")
        print_table_1d(tab, tab_size);
        insert(tab, tab_size, 3, -1 );
        print("tablica po zmianie:")
        print_table_1d(tab, tab_size);
        delete tab;
    }

    return 0;
}

void readrow(int* tab, int dim2)
{
    while (dim2-- > 0)
    {
        print("    Podaj Liczbę: ")
        cin >> *tab++;
    }
}

void fill(int* a[], int dim1, int dim2)
{
    while(dim1 > 0)
    {
        print("  Wprowadzanie wiersza " << dim1--)
        readrow(*a++, dim2);
    }
}

int zadanie17()
{
    print("Zadanie 17")
    print("17a, 17b:")
    {
        int **a = new int*[5];
        for (int i = 0; i < 5; ++i) {
            a[i] = new int[6];
        }
        randomize_table_2d(a, 5, 6);
        print_table_2d(a, 5, 6);
        fill(a,5,6);
        print_table_2d(a, 5, 6);
        for (int i = 0; i < 5; ++i) {
             delete[] a[i];
        }
        delete[] a;
    }
}

int main() {
    print("Laboratorium 4")
    // zadanie16();
    // zadanie17();
    // zadanie20();
    zadanie19();
    return 0;
}