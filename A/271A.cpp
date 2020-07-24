/*
Link: https://codeforces.com/problemset/problem/734/A
@uthor: chavodon
*/

#include <iostream>

using namespace std;

int main() {
    int y, newYear, n1, n2, n3, n4;
    cin >> y;    
    while (true){
        y++;
        n4 = y-(y/10)*10;
        n3 = (y/10) - (y/100)*10;
        n2 = (y/100) - (y/1000)*10;
        n1 = (y/1000);
        if (n1 != n2 && n1 != n3 && n1 != n4)
            if (n2 != n3 && n2 != n4)
                if (n3 != n4)
                    break;
    }
    cout << y;
}