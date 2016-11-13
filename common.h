//
// Created by wojtek on 13.11.16.
//

#ifndef LAB4_COMMON_H
#define LAB4_COMMON_H

#include <iostream>
#include "macros.h"
using namespace std;


void randomize_table_1d(int *tab, int size);
void randomize_table_2d(int**tab, int rows, int columns);
void print_table_1d(int *tab, int size);
void print_table_2d(int * tab[], int rows, int columns);
#endif //LAB4_COMMON_H
