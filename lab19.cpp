#include "lab19.h"


void readInput(int *in, int *occurences) {
    int temp = 0;
    do{
        temp = cin.get();
        if( (temp >= (int)'A' && temp <= (int)'Z') || (temp >= (int)'a' && temp <= (int)'z') )
        {
            *in++ = temp;
            occurences[(int)temp - int('A')] += 1;
        }
    }
    while (temp != (int)'.');
}

void printResults(int *in, int *occurences, int buff_size, int start, int stop) {
    int * temp;
    while(buff_size-- > 0 && *in != -1)
    {
        temp = occurences + *in - (int)'A';
        if(*temp != 0 && *in >= start && *in <= stop)
        {
            cout<< (char) (*in) << " ";
            for (int i = 0; i < *temp; ++i)
            {
               cout << "#";
            }
            cout << " " << *temp;
            print("");
            *temp = 0;
        }
        *in++;
    }
}

int zadanie19() {
    const int buff_size = 30;
    const int occu_size = (int)'z' - int('A') + 1;
    int signs[buff_size];
    for (int i = 0; i < buff_size; ++i) {
       signs[i] = -1;
    }
    int occurences[ occu_size];
    for (int i = 0; i < occu_size; ++i) {
        occurences[i] = 0;
    }
    readInput(signs, occurences);
    printResults(signs, occurences, buff_size, (int)'A', (int)'Z');
    print("");
    printResults(signs, occurences, buff_size, (int)'a', (int)'z');
    return 0;
}

