#include "lab20.h"
void readkey01(char *in)
{
    print("Podaj liczbę w systemie dwujkowym")
    cin >> in;
}

int get_length(char *in)
{
    int result = 0;
    while (*in++)
        ++result;
    return result;
}

bool check_number(char *in, int &dot_pos)
{
    int value =0;
    dot_pos = 0;
    bool dot_present=false;
    while(*in)
    {
        value = *in++;
        if(value != 46 && value != 48 && value != 49 ) {
            return false;
        }

        if(value == 46)
        {
            if( dot_present) {
                dot_pos = -1;
                return false;
            }
            else
                dot_present = true;
        }
        else
            if (!dot_present)
                ++dot_pos;
    }
    return true;
}

double power_2(int pow)
{
    double result = 1;
    bool negative = false;
    if(pow < 0)
    {
        negative = true;
        pow = positive(pow);
    }
    while (pow-- > 0)
        result *= 2;
    if(negative)
        result = 1/result;
    return result;
}

double calculate_int(char* in, int dot_pos)
{
    int counter = 0;
    double result = 0;
    char *temp = in + dot_pos - 1;
    while(temp >= in){
        print("temp wskazuje na: " << *temp)
        print("Licznik wynosi " << counter)
        if (*temp-- == '1')
        {
            print("zwiększam licznik dla: " << *temp)
            result += power_2(counter);
            print("Wynik wynosi " << result)
        }
        ++counter;
    }
    return result;
}

double calculate_floor(char *in, int dot_pos) {
    int counter = 0;
    double result = 0;
    char *temp = in + dot_pos;
    while(*temp++)
    {
        --counter;
        if (*temp == '1')
        {
            result += power_2(counter);
        }
    }
    return result;
}

double bind2d(char *b) {
    double result = 0;
    int dot_pos=0;
    if (!check_number(b, dot_pos ))
        return -1;
    print("Pozycja kropki wynois: " << dot_pos)
    if (dot_pos == -1)
    {
        return -1;
    }
    result += calculate_int(b, dot_pos);
    result += calculate_floor(b, dot_pos);
    return result;
}

int zadanie20()
{
    print("Zadanie 20")
    print(bind2d("1.01"));
}



