#include <iostream>
using namespace std;

bool isPrimeIter(int n, int i) {
    if (i == 1)
        return true;
    if (n % i == 0)
        return false;
    return isPrimeIter(n, i - 1);
}

bool isPrime(int n) {
    if (n <= 1)
        return false;
    return isPrimeIter(n, n - 1);
}

int main() {
    int n;
    cin >> n;
    if (isPrime(n))
        cout << "prime" << endl;
    else
        cout << "not prime" << endl;
    return 0;
}
