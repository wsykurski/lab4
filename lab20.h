//
// Created by wojtek on 13.11.16.
//

#ifndef LAB4_LAB20_H
#define LAB4_LAB20_H

#include <iostream>
#include "macros.h"
using namespace std;


void readkey01(char *in);

int get_length(char *in);

bool check_number(char *in, int &dot_pos);

double power_2(int pow);
double calculate_int(char* in, int dot_pos);
double calculate_floor(char *in, int dot_pos);

double bind2d(char* b);

int zadanie20();
#endif //LAB4_LAB20_H
