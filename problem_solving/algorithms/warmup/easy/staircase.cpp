#include <bits/stdc++.h>
#include <iostream>

using namespace std;

// Complete the staircase function below.
void staircase(int n) {
    int l{1};
    int k{2};
    for(int i{}; i < n; ++i){

        for(int f{}; f < (n - l); f++){
            cout << ' ';
        }
        l++;
        
        int j{n-1};
        for(; j > (n - k); j--){
            cout << "#";
        }
        k++;
        cout << endl;
    }
}

int main()
{
    int n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    staircase(n);

    return 0;
}
