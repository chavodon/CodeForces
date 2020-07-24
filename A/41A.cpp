/*
Link: https://codeforces.com/problemset/problem/41/A
@uthor: chavodon
*/

#include <iostream>
#include <string>

using namespace std;

int main() {
    string s, t;
    int size, match = 0, i;
    cin >> s;
    cin >> t;
    size = s.size();
    for (i = 0; i < size; i++)
        if (s[i] == t[size-1-i])
            match++;
        else 
            break;
    if (match == size)
        cout << "YES";
    else 
        cout << "NO";
}