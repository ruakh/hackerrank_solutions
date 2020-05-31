#include <bits/stdc++.h>
#include <cctype>

using namespace std;

/*
 * Complete the timeConversion function below.
 */
string timeConversion(string s) {
    /*
    * Write your code here.
    */

    vector<string> v(3, "");
    for(int i{}, k{}, l{}; i < static_cast<int>(s.length()); i+=3, ++l){
        for(int j{i}; j < (i+2); ++j) {
            v[l] += s[j];
        }
        ++k;
        if(k == 3){

            if(s[8] == 'A'){
                if(v[0] == "12") {
                    v[0] = "00";
                }
            }

            if(s[8] == 'P'){
                if(v[0] == "01") {
                    v[0] = "13";
                } else if(v[0] == "02"){
                    v[0] = "14";
                } else if(v[0] == "03"){
                    v[0] = "15";
                } else if(v[0] == "04"){
                    v[0] = "16";
                } else if(v[0] == "05"){
                    v[0] = "17";
                } else if(v[0] == "06"){
                    v[0] = "18";
                } else if(v[0] == "07"){
                    v[0] = "19";
                } else if(v[0] == "08"){
                    v[0] = "20";
                } else if(v[0] == "09"){
                    v[0] = "21";
                } else if(v[0] == "10"){
                    v[0] = "22";
                } else if(v[0] == "11"){
                    v[0] = "23";
                }
            }      
            
            break;
        }
    }

    s.clear();

    for(int i{}; i < v.size(); ++i){
        s += v[i];
        if(i != 2){
            s += ":";
        }
    }
    
    return s;
    
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string s;
    getline(cin, s);

    string result = timeConversion(s);

    fout << result << "\n";

    fout.close();

    return 0;
}
