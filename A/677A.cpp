/*
Link: https://codeforces.com/problemset/problem/677/A
@uthor: chavodon
*/

#include <iostream>

using namespace std;

int main() {
    int n, h, i, len, roadWidth = 0;
    cin >> n >> h;
    for (i = 0; i < n; i++){
        cin >> len;
        if (len > h)
            roadWidth+=2;
        else 
            roadWidth++;
    }
    cout << roadWidth;
}