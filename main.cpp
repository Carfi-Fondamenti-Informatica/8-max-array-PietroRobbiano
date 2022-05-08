#include <iostream>
#include "lib.h"
using namespace std;

int main() {
    int a=0;
    cin >> a;
    float array[a];
    for ( int i=0; i<a ; i++){
        array[i]=0;
    }
    for ( int i=0; i<a ; i++){
        cin >> array[i];
    }
    cout << numeromaggiore(array,a) << endl;


    return 0;
}
