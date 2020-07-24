/*
Link: https://codeforces.com/problemset/problem/734/A
@uthor: chavodon
*/

#include <iostream>

using namespace std; 

int main() {
    int n, aCount = 0, dCount = 0, i = 0;
    string s;
    cin >> n;
    cin >> s;
    while (s[i] != '\0'){
        if (s[i] == 'A')
            aCount++;
        else
            dCount++;
        i++;

    }
    if (aCount > dCount)
        cout << "Anton";
    else if (dCount > aCount)
        cout << "Danik";
    else 
        cout << "Friendship";
    
}