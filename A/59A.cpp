/*
Link: https://codeforces.com/problemset/problem/59/A
@uthor: chavodon
*/

#include <iostream>
#include <string>

using namespace std;

int main() {
    string s;
    int size, i, lowCaseCount = 0, upperCaseCount = 0;
    cin >> s;
    size = s.size(); 
    for (i = 0; i < size; i++)
        if (s[i] == tolower(s[i]))  
            lowCaseCount++;
        else
            upperCaseCount++;
    if (upperCaseCount > lowCaseCount)
        for (i = 0; i < size; i++)
            s[i] = toupper(s[i]);
    else
        for (i = 0; i < size; i++)
            s[i] = tolower(s[i]);
    cout << s;
}