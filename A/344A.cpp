/*
Link: https://codeforces.com/problemset/problem/344/A
@uthor: chavodon
*/

#include <iostream>

using namespace std;

int main() {
    int n, groups = 1;
    string ss;
    char lastPos = ' ';
    cin >> n;
    for (int i = 0; i < n; i++){
        cin >> ss;
        if (ss[0] == lastPos)
            groups++;        
        lastPos = ss[1];
    }
    cout << groups;
}