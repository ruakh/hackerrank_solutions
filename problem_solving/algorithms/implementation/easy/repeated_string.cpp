#include <bits/stdc++.h>

using namespace std;
long res{};
// Complete the repeatedString function below.
long repeatedString(string s, long n) {
    
    if(n < s.length()){
        for(int i{}; i < n; ++i){
            if(s[i] == 'a'){
                ++res;
            }
        }
    }

    if(s.length() == 1 && s == "a"){

        res = n;

    } else if(n > s.length() && n <= 1000 && s != "a" && s.length() != 1){

        string s1(s);

        while(s1.length() < n) {
            for(auto i : s){
                if(s1.length() == n){
                    break;
                }
                s1 = s1 + i;
            }
        }

        res = count(s1.begin(), s1.end(), 'a');

    } else if(n >= 1000 && s != "a" && s.length() != 1){
        res = (count(s.begin(), s.end(), 'a') * trunc(n / s.length()) * s.length()) / s.length();
        repeatedString(s, n - trunc(n / s.length()) * s.length()); 
    }

    return res;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string s;
    getline(cin, s);

    long n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    long result = repeatedString(s, n);

    fout << result << "\n";

    fout.close();

    return 0;
}
