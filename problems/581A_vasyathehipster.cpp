//
//  581A_vasyathehipster.cpp
//  codeforces-problems-cpp
//
//  Created by Adrian Frąckowiak on 11/05/2024.
//

#include <stdio.h>
#include <iostream>
#include <unordered_map>
 
using namespace std;
 
int main() {
    int a, b;
    cin >> a >> b;
    
    int socks = a + b;
    int diff_socks = 0;
    int same_socks = 0;
    
    for (int i = 0; i < socks; i++) {
        if (a > 0 && b > 0) {
            diff_socks++;
            a--;
            b--;
        } else if (a > 1 && b == 0) {
            same_socks++;
            a -= 2;
        } else if (b > 1 && a == 0) {
            same_socks++;
            b -= 2;
        }
    }
    
    cout << diff_socks << " " << same_socks;
}
