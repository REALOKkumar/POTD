#include <bits/stdc++.h>
using namespace std;

int main() {
    int num;
    cin >> num;

    while(num--){


        string sum;
        cin>>sum;

        vector<int>freq(26, 0);

        for (char c:sum) {
            freq[c-'a']++;
        }





        bool stable=true;

        for (int x:freq) {
            if (x%2!=0) {
                stable=false;
                break;
            }
        }

        if(stable) cout<<1;
        else cout<<0;
    }

    return 0;
}
