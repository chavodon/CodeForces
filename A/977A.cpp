/*
Link: https://codeforces.com/problemset/problem/977/A
@uthor: chavodon
*/

#include <iostream>

using namespace std;

int main() {
	int n, k, ld, i;
	cin >> n >> k;
	for (i = 0; i < k; i++){
		ld = n - (n/10)*10;
		if (ld == 0)
			n = n/10;
		else
			n--;
	}
	cout << n;
}
