#include <iostream>
#include <vector>
#include <string>
using namespace std;

string yes_or_no(vector<int> a) {
    int n = a.size();

    // Step 1: handle numbers ending with 5
    for (int i = 0; i < n; i++) {
        if (a[i] % 10 == 5) {
            a[i] += 5;  //make 0
        }


    }

    // Step 2: check if any number ends with 0
    bool hasZero = false;
    for (int x : a) {
        if (x % 10 == 0) {
            hasZero = true;
            break;
        }
    }

    // Case 1: numbers ending with 0 exist
    if (hasZero) {
        for (int i = 1; i < n; i++) {
            if (a[i] != a[0])
                return "NO";
        }
        return "YES";
    }
    // Case 2: no number ends with 0
    for (int i = 0; i < n; i++) {
        while (a[i] % 10 != 2) {
            a[i] += a[i] % 10;
        }
    }
    int mod = a[0] % 20;
    for (int i = 1; i < n; i++) {
        if (a[i] % 20 != mod)
            return "NO";
    }

    return "YES";
}


int main() {
    int no_of_vector;
    cin >> no_of_vector;

    vector<string> ans(no_of_vector);

    for (int i = 0; i < no_of_vector; i++) {
        int x;
        cin >> x;

        vector<int> sub(x);
        for (int j = 0; j < x; j++) {
            cin >> sub[j];
        }

        ans[i] = yes_or_no(sub);
    }

    for (string x : ans) {
        cout << x << endl;
    }

    return 0;
}
