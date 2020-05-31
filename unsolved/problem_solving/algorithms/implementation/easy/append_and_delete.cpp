#include <bits/stdc++.h>

using namespace std;

// Complete the appendAndDelete function below.


// Конечно, может я что-то не понял, но мне кажется некоторые тест кейсы противоречат друг другу или условиям задачи
// Of course maybe I misunderstood something but I guess several test cases contradict with each other or problem set conditions
// Албатта, балки мен ниманидир тушунмаятгандирман, лекин баъзи тест кейслар бир-бирига ёки мисол шартларига зидга охшайди
string appendAndDelete(string s, string t, int k) {
    string res;
    int num{};
    if(s == t){
        if((s.length() + t.length()) <= k){
            res = "Yes";
        } else {
            res = "No";
        }
    } else if(s[0] != t[0]){
        if((s.length() + t.length()) <= k){
            res = "Yes";
        } else {
            res = "No";
        }
    } else {
        if(s.length() > t.length()){
            for(int i{}; i < s.length(); ++i){ 
                if(s[i] == t[i]){
                    num++;
                } else {
                    break;
                }
            }
    
            if(t.length() > num){
                (((s.length() - num) + (t.length() - num)) <= k) ? res = "Yes" : res = "No";
            } 
            
            if(t.length() == num){
                ((s.length() - num) <= k) ? res = "Yes" : res = "No";
            }
        } else {
            for(int i{}; i < s.length(); ++i){
                if(s[i] == t[i]){
                    num++;
                } else {
                    break;
                }
            }

            if(s.length() > num){
                (((s.length() - num) + (t.length() - num)) <= k) ? res = "Yes" : res = "No";
            } 
            
            if(s.length() == num){
                (2*s.length() + (t.length() - num) <= k) ? res = "Yes" : res = "No";        
            }
        }
    }
    return res;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string s;
    getline(cin, s);

    string t;
    getline(cin, t);

    int k;
    cin >> k;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    string result = appendAndDelete(s, t, k);

    fout << result << "\n";

    fout.close();

    return 0;
}
