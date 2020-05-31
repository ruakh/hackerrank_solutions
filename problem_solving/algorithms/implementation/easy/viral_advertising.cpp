#include <bits/stdc++.h>

using namespace std;

// Complete the viralAdvertising function below.
int viralAdvertising(int n) {
    int usrs{5}, lks{}, lks_sum{}, shrs{};

    for(int i{}; i < n; ++i){
        if(i == 0){
            lks = floor(usrs/2);
            shrs = lks * 3;
            lks_sum += lks;
        } else{
            lks = floor(shrs/2);
            shrs = lks * 3;
            lks_sum += lks;
        }
    }
    return lks_sum;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    int n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    int result = viralAdvertising(n);

    fout << result << "\n";

    fout.close();

    return 0;
}
