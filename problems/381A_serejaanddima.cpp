//
//  381A_serejaanddima.cpp
//  codeforces-problems-cpp
//
//  Created by Adrian Frąckowiak on 13/05/2024.
//

#include <stdio.h>
#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> nums;
    
    for (int i = 0; i < n; i++) {
        int num;
        cin >> num;
        nums.push_back(num);
    }
    
    int first_pointer = 0;
    int last_pointer = n - 1;
    int s = 0;
    int d = 0;
    
    for (int i = 0; i < n; i++) {
        int bigger_value = 0;
        
        if (nums[first_pointer] > nums[last_pointer]) {
            bigger_value = nums[first_pointer];
            first_pointer++;
        } else {
            bigger_value = nums[last_pointer];
            last_pointer--;
        }
                
        if (i % 2 == 0) {
            s += bigger_value;
        } else {
            d += bigger_value;
        }
    }
    
    cout << s << " " << d;
}
