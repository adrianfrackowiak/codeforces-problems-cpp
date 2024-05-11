#include <stdio.h>
#include <iostream>
using namespace std;
 
int main() {
    int kilos;
    cin >> kilos;
    if (kilos % 2 == 0 && kilos > 2) {
        cout << "YES";
    } else {
        cout << "NO";
    }
}
