#include <iostream>
using namespace std;

bool is_all_digits(string s) {
    if (s.length() == 0) {
        return true;
    }
    else {
        char c = s[0];
        if (c >= '0' && c <= '9') {
            string new_s = s.substr(1);
            return is_all_digits(new_s);
        }
        else {
            return false;
        }
    }
}

int main() {
    string s;
    cin >> s;
    cout << (is_all_digits(s) ? "yes" : "no");
    return 0;
}
