#include <bits/stdc++.h>
using namespace std;

void pairwisenum(int x, int y, int z) {
    if (x ==y&&y==z) {
        cout << "YES\n";
        cout << x << " " << x << " " << x << "\n";
    }
    else if (x ==y && y > z) {
        cout << "YES\n";
        cout << x << " " << z << " " << z << "\n";
    }
    else if (x == z && z > y) {
        cout << "YES\n";
        cout << y << " " << x << " " << y << "\n";
    }
    else if (y == z && z > x) {
        cout << "YES\n";
        cout << x << " " << x << " " << y << "\n";
    }
    else {
        cout << "NO\n";
    }
}

int main() {
    int n;
    cin >> n;
    while (n--) {
        int x, y, z;
        cin >> x >> y >> z;
        pairwisenum(x, y, z);
    }
    return 0;
}


// time complexity O(1)
