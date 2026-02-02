#include <bits/stdc++.h>
using namespace std;

int main() {
    int exam, kid, nth;
    cin >> exam >> kid >> nth;

    vector<long long> e;

    for (int x = 1; x <= exam; x++) {
        for (int i = 1; i <= kid; i++) {
            e.push_back(1LL * x * i);
        }
    }

    if (nth > e.size()) {
        cout << -1 << endl;
        return 0;
    }

    sort(e.begin(), e.end());
    cout << e[nth - 1] << endl;

    return 0;
}
