#include <stdio.h>
#include <iostream>
#include <vector>
 
using namespace std;
 
int main() {
    int n, k;
    cin >> n >> k;
    int participants = 0;
    
    vector<int> scores(n);
    for (int i = 0; i < n; i++) {
        cin >> scores[i];
        if (scores[i] >= scores[k - 1] && scores[i] > 0) {
            participants++;
        }
    }
    
    cout << participants;
}
