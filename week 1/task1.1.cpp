#include <string>
#include <iostream>

#include "task1.1.h"

using namespace std;

int main(){
    int list[10] = {5,3,2,10,4,19,45,13,61,11}; 
    string strList[] = {"One", "Hello", "Four", "Three", "How", "Six"};

    funcExp(list, 6); 
    funcExp(strList, 6); 
    
    return 0;
}