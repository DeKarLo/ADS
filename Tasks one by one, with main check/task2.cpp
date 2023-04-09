#include <iostream>
using namespace std;
int array_sum(int* arr, int n) {
    if (n == 1) return *arr;
    int sum = arr[n - 1] + array_sum(arr, n - 1);
    return sum;
}

double average(int* arr, int n) {
    return (double)array_sum(arr, n) / n;
}


int main() {
    int n;
    cin >> n;
    int* arr = new int[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << average(arr, n);
}