#include <iostream>
using namespace std;

int binomial_coefficient(int n, int k) {
    if (k == 0 || k == n) {
        return 1;
    }
    else {
        return binomial_coefficient(n - 1, k - 1) + binomial_coefficient(n - 1, k);
    }

}

int main() {
    int n, k;
    cin >> n >> k;
    cout << binomial_coefficient(n, k);
    return 0;
}