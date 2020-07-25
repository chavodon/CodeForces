/*
Link: https://codeforces.com/problemset/problem/136/A
@uthor: chavodon
*/
 
 #include <iostream>

 using namespace std;

 int main() {
    int n, i, j, temp;
    int *pointer, *p2;
    cin >> n;
    pointer = new int[n];
    p2 = new int[n];
    for (i = 0; i < n; i++){
        cin >> temp;
        *(pointer + i) = temp;
    }
    for (i = 0; i < n; i++){
        for (j = 0; j < n; j++){
            if (*(pointer+j) == i+1){
                *(p2+i) = j+1;
            }
        }
    }
    for (i = 0; i < n; i++)
        cout << *(p2+i) << " ";
 }