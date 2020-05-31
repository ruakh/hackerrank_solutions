#include <bits/stdc++.h>

using namespace std;

// Complete the findDigits function below.
int findDigits(int n) {
    string ns = to_string(n);;
    int m{};
    for(int i{}; i < ns.length(); ++i){
        if((((int(ns[i]) - 48) != 0 ) && ((n % ((int)ns[i] - 48)) == 0))){
            ++m;
        }
    }
    return m;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    int t;
    cin >> t;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    for (int t_itr = 0; t_itr < t; t_itr++) {
        int n;
        cin >> n;
        cin.ignore(numeric_limits<streamsize>::max(), '\n');

        int result = findDigits(n);

        fout << result << "\n";
    }

    fout.close();

    return 0;
}
