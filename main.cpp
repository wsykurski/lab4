#include <iostream>
#include "macros.h"
#include "lab20.h"
#include "lab19.h"
#include "zad18.h"
#include "zad17.h"
using namespace std;

#define print(x) cout << x << endl;


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


int main() {
    print("Laboratorium 4")
    // zadanie16();
    //zadanie17();
    // zadanie20();
    zadanie19();
    //zad18();
    return 0;
}