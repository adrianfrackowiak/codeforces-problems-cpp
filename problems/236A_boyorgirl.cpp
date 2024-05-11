//
//  236A_boyorgirl.cpp
//  codeforces-problems-cpp
//
//  Created by Adrian Frąckowiak on 11/05/2024.
//

#include <stdio.h>
#include <iostream>
#include <unordered_map>
 
using namespace std;
 
int main() {
    string username;
    cin >> username;
    string result = "";
    unordered_map<char, int> letters;
    
    for (int i = 0; i < username.length(); i++) {
        if (letters.find(username[i]) == letters.end()) {
            result.push_back(username[i]);
            letters[username[i]]++;
        }
    }
    
    if (result.length() % 2 == 0) {
        cout << "CHAT WITH HER!" << "\n";
    } else {
        cout << "IGNORE HIM!" << "\n";
    }
}
