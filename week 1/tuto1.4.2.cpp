#include <iostream>

using namespace std;

int total = 0;

int main(){
for(int i=1;i<=2*10;i++){
    for(int j=1;j<=10;j++){
    total += 2*i - j;
    cout << "*";
}
}

return 0;
}