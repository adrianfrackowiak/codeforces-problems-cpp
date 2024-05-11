#include <stdio.h>
#include <iostream>
#include <cmath>
 
using namespace std;
 
int main() {
    int m, n;
    cin >> m >> n;
    
    int board = m * n;
    double pieces = floor(board / 2);
    cout << pieces;
}
