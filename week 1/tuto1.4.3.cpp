#include <iostream>

using namespace std;

int main(){
for (int i=1;i<=2*10;i++) {
for(int j=1;j<=10;j++) {
i = 2*j;
cout << "*";
}
}
return 0;
}