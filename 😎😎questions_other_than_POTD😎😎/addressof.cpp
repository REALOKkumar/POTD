#include <iostream>
using namespace std;

void findfirstandlast(string name, char ft, char lt, int *first, int *last) {
    *first = -1;
    *last = -1;

    // find first
    for (int i = 0; i < name.size(); i++) {
        if (name[i] == ft) {
            *first = i;
            break;
        }
    }

    // find last
    for (int i = name.size() - 1; i >= 0; i--) {
        if (name[i] == lt) {
            *last = i;
            break;
        }
    }
}

int main() {
    string name = "alok";
    char ft = 'k', lt = 'k';

    int first, last;  // normal ints

    findfirstandlast(name, ft, lt, &first, &last);

    cout << "First '" << ft << "' is at index: " << first << endl;
    cout << "Last  '" << lt << "' is at index: " << last << endl;

    return 0;
}
