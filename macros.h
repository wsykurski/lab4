//
// Created by wojtek on 13.11.16.
//

#ifndef LAB4_MACROS_H
#define LAB4_MACROS_H
// Global Macros:
//Print objects:
    #define print(x) cout << x << endl;
//Swap 2 numbers:
    #define swap(x,y) x += y;\
                      y = x - y;\
                      x -= y;
//Get positiv value from number
    #define positive(n) ((n) < 0 ? 0 - (n) : (n))
#endif //LAB4_MACROS_H
