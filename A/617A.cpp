/*
Link: https://codeforces.com/problemset/problem/617/A
@uthor: chavodon
*/

#include <iostream>

using namespace std;

int main() {
	int x, steps = 0, currentStep = 5, remDistance;
	cin >> x;
	remDistance = x;
	while (remDistance != 0){
		if (currentStep <= remDistance){
			remDistance-=currentStep;
			steps++;
		} else 
			currentStep--;
	} 
	cout << steps; 
}
