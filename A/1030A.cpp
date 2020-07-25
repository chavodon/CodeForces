/*
Link: https://codeforces.com/problemset/problem/1030/A
@uthor: chavodon
*/

#include <iostream>

using namespace std;

int main() {
    int n, choice, flag = 0;
    cin >> n;
    for (int i = 0; i < n; i++){
        cin >> choice;
        if (choice == 1)
            flag = choice;
    }
    if (flag == 1)
        cout << "HARD";
    else 
        cout << "EASY";
}