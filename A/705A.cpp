/*
Link: https://codeforces.com/problemset/problem/705/A
@uthor: chavodon
*/

#include <iostream>

using namespace std;

int main() {
    int n, tCount;
    cin >> n;
    tCount = n - 1;
    for (int i = 0; i < n; i++){
        if (i%2 == 0)
            cout << "I hate ";
        else 
            cout << "I love ";
        
        if (tCount > 0){
            cout << "that ";
            tCount--;
        }
    }
    cout << "it";
}