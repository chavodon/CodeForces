/*
Link: https://codeforces.com/problemset/problem/467/A
@uthor: chavodon
*/

#include <iostream>

using namespace std;

int main() {
    int n, i, p, q, roomCount = 0;
    cin >> n;
    for (i = 0; i < n; i++){
        cin >> p >> q;
        if (q-p >= 2)
            roomCount++;
    }
    cout << roomCount;
}