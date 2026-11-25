#include <iostream>
using namespace std;

int main(){

    int x = 3;
    //inreasing the value of x by befero assigning it to y
    int y = ++x;

    cout << "X: " << x << endl; //x is 4
    cout << "Y: " << y << endl; //y is 4
    return 0;
}