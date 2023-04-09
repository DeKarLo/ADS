#include <iostream>
using namespace std;

//task 1
int find_min(int* arr, int n) {
    if (n == 1) return *arr;
    if (n < 1) throw invalid_argument("invalid lenght(must be more or equal to one)");
    int min = find_min(arr, n - 1);
    if (arr[n-2] < min) {
        return arr[n-2];
    }
    return min;
}

//task 2
int array_sum(int* arr, int n) {
    if (n == 1) return *arr;
    int sum = arr[n - 1] + array_sum(arr, n - 1);
    return sum;
}

double average(int* arr, int n) {
    return (double)array_sum(arr, n) / n;
}


//task 3
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



// task 4
int factorial(int n) {
    if (n == 0)
        return 1;
    return n * factorial(n - 1);
}




//task 5
int fibonacci(int n) {
    if (n == 0)
        return 0;
    if (n == 1)
        return 1;
    return fibonacci(n - 1) + fibonacci(n - 2);
}



//task 6
double power(double a, int n ) {
    if (n == 0) return 1;
    if (n > 0) return power(a, n - 1) * a;
    else return power(a, n + 1) / a;
}



//task 7
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



//task 8
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



//task 9
int binomial_coefficient(int n, int k) {
    if (k == 0 || k == n) {
        return 1;
    }
    else {
        return binomial_coefficient(n - 1, k - 1) + binomial_coefficient(n - 1, k);

    }

}



//task 10
int gcd(int a, int b) {
    cout << 1 << " ";
    if (a == 0) return b;
    if (b == 0) return a;
    else {
        return gcd(b, a % b);
    }
}



int main() {
    return 0;
}