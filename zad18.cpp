#include "zad18.h"

void insert_m(int* a, int max, int index, int key)
{
  a += max;
  while(max-- > index)
  {
    *a-- = *a;
  }
  *a = key;
}

void mix(int* a, int m, int* b, int n)
{
  int size = m+n;
  int *_pa = a;
  int *_pb = b;
  int counter = 0;
  int * temp = new int [m+n + 1];
  for (int i = 0; i < m + n; ++i) {
    temp[i]=numeric_limits<int>::max();
  }
  for (int i = 0; i < m; ++i) {
    temp[i] = a[i];
  }

  while (_pb < b + n)
  {
    while(counter < m + n) {
      if (*_pb <= temp[counter]) {
         insert_m(temp, m + n, counter, *_pb);
         break;
      }
      counter++;
    }
    _pb++;
  }

  counter = 0;
  while(counter < m)
  {
    *a++ = temp[counter++];
  }
  while (counter < m + n)
  {
    print(counter)
    *b++ = temp[counter++];
  }
  delete [] temp;
}

void zad18() {
  int a[] = {1, 2, 2, 3, 5, 6};
  int b[] = {2, 4, 5, 8};
  mix(a, 6, b, 4);
  print("Tablica A:")
  print_table_1d(a, 6);
  print("Tablica B:")
  print_table_1d(b, 4);
}
