#include <iostream>
using namespace std;

void print_permutations(string s, string prefix = "") {
    if (s.length() == 0) {
        cout << prefix << endl;
    }
    else {
        for (int i = 0; i < s.length(); i++) {
            string new_s = s.substr(0, i) + s.substr(i + 1);
            print_permutations(new_s, s[i] + prefix);
        }

    }
}

int main() {
    string s ;
    cin >> s;
    print_permutations(s);
    return 0;
}