#include <bits/stdc++.h>

using namespace std;

/*
 * Complete the pageCount function below.
 */
int pageCount(int n, int p) {
    /*
     * Write your code here.
     */
    int sx;
    int rx;
    if(n%2 == 0 && p%2 == 0){
        sx = p/2;
        rx = (n - p)/2;        
    } 
    if(n%2 == 0 && p%2 != 0){
        sx = (p - 1)/2;
        rx = (n - p+1)/2;
    }
    if(n%2 != 0 && p%2 == 0){
        sx = p/2;
        rx = (n - p - 1)/2;
    }
    if(n%2 != 0 && p%2 != 0){
        sx = (p - 1)/2;
        rx = (n - p)/2;
    }
    
    return (sx > rx) ? rx : sx;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    int n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    int p;
    cin >> p;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    int result = pageCount(n, p);

    fout << result << "\n";

    fout.close();

    return 0;
}
