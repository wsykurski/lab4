#include "zad17.h"

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
    while(dim1-- > 0)
    {
        print("  Wprowadzanie wiersza ")
        readrow(*a++, dim2);
    }
}

void  trans(int* a[], int dim)
{
    bool symetry = true;
    for (int i = 0; i < dim; ++i) {
        for (int j = 0; j < dim; ++j) {
            if (a[i][j] != a[j][i])
               symetry = false;
        }
    }
    if(symetry)
    {
        print("Macierz jest symetryczna!")
        return;
    }
    else
    {
        print("Macierz NIE JEST symetryczna!")
        print("Transpozycja macierzy:")
        for (int i = 0; i < dim; ++i) {
            for (int j = 0; j < i; ++j) {
                if(i != j)
                    swap(a[i][j],a[j][i])
            }
        }
    }
}

void multiply(int* a[], int* b[], int* c[], int dim1, int dim2, int dim3)
{
    for (int i = 0; i < dim1; ++i) {
        for (int j = 0; j < dim3; ++j) {
            for (int k = 0; k < dim2; ++k) {
                c[i][j] += a[i][k] * b[k][j];
            }
        }
    }
}

int zadanie17()
{
    print("Zadanie 17")
    // print("17a, 17b:")
    // {
    //     int **a = new int*[5];
    //     for (int i = 0; i < 5; ++i) {
    //         a[i] = new int[6];
    //     }
    //     randomize_table_2d(a, 5, 6);
    //     print_table_2d(a, 5, 6);
    //     fill(a,5,6);
    //     print_table_2d(a, 5, 6);
    //     for (int i = 0; i < 5; ++i) {
    //         delete[] a[i];
    //     }
    //     delete[] a;
    // }
    print("17c")
    {
        int **a = new int*[4];
        // for (int i = 0; i < 4; ++i) {
        //     a[i] = new int[4];
        //     for (int j = 0; j < 4; ++j) {
        //         a[i][j] = 1;
        //     }
        // }
        a[0] = new int[4] { 1, 2, 0, 1};
        a[1] = new int[4] { 2, 1, 0, 1};
        a[2] = new int[4] { 0, 0, 1, 0};
        a[3] = new int[4] { 1, 1, 0, 1};
        int **b = new int*[3];
        b[0] = new int[3] {1, 1, 3};
        b[1] = new int[3] {1, 2, 1};
        b[2] = new int[3] {0, 0, 1};
        //randomize_table_2d(a, 4, 4);
        print_table_2d(a, 4, 4);
        trans(a, 4);
        print_table_2d(b, 3, 3);
        trans(b, 3);
        print_table_2d(b, 3, 3);
    }
    // print("17d")
    // {
    //     int **a = new int*[2];
    //     a[0] = new int[3] {1,  0, 2};
    //     a[1] = new int[3] {-1, 3, 1};

    //     int **b = new int*[3];
    //     b[0] = new int[2] {3, 1};
    //     b[1] = new int[2] {2, 1};
    //     b[2] = new int[2] {1, 0};
    //     int **c = new int*[2];
    //     c[0] = new int[2] {0, 0};
    //     c[1] = new int[2] {0, 0};
    //     multiply(a, b, c, 2, 3 ,2);
    //     print_table_2d(c,2,2);
    // }
}
