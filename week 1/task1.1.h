#ifndef TASK1_1_H
#define TASK1_1_H

#include <iostream>

using namespace std;

template <typename Type>
void funcExp(Type list[], int size) {
    Type x = list[0];
    Type y = list[size - 1];
    for (int j = 1; j < size; j++) {
        if (x < list[j])
        x = list[j];

        if (y > list[size - 1 - j])
        y = list[size - 1 - j];
    }
    cout << x << endl;
    cout << y << endl;

}
#endif