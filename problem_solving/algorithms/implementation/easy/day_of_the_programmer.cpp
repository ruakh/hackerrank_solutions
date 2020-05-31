#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);

// Complete the dayOfProgrammer function below.
string dayOfProgrammer(int year) {
    int leapY{244};
    int progD{256};
    int sept;

    if(year >= 1700 && year <= 1917){
        if(year % 4 == 0){
            sept = progD - leapY;
        } else{
            sept = progD - leapY + 1;
        }
    }

    if(year == 1918){
        sept = progD - leapY + 1 + 13;
    }

    if(year >= 1919 && year <= 2700){

        if(year % 400 == 0 || (( year % 4 == 0) && (year % 100 != 0))){
            sept = progD - leapY;
        } else {
            sept = progD - leapY + 1;
            cout << sept <<endl;
        }
    }

    return to_string(sept) + ".09." + to_string(year);
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string year_temp;
    getline(cin, year_temp);

    int year = stoi(ltrim(rtrim(year_temp)));

    string result = dayOfProgrammer(year);

    fout << result << "\n";

    fout.close();

    return 0;
}

string ltrim(const string &str) {
    string s(str);

    s.erase(
        s.begin(),
        find_if(s.begin(), s.end(), not1(ptr_fun<int, int>(isspace)))
    );

    return s;
}

string rtrim(const string &str) {
    string s(str);

    s.erase(
        find_if(s.rbegin(), s.rend(), not1(ptr_fun<int, int>(isspace))).base(),
        s.end()
    );

    return s;
}
