/*
Link: https://codeforces.com/problemset/problem/486/A
@uthor: chavodon
*/

#include <iostream>
#include <cmath>

using namespace std;

int main() {
    long long int n, sum;
    cin >> n;
    if ((n-1)%2 == 0)
        sum = (n-1)/2 + pow(-1, n)*n;
    else
        sum = (n-2)/2 - (n-1) + pow(-1, n)*n;
    cout <<  sum;
}


/*
Another Implementation could be 
    if ((n-1)%2 == 0)
        sum = (n-1)/2;
    else
        sum = (n-2)/2 - (n-1);
    
    if (n%2 == 0)
        sum+=n;
    else
        sum-=n;
*/