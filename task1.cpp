#include <iostream>
using namespace std;
int find_min(int* arr, int n) {
    if (n == 1) return *arr;
    if (n < 1) throw invalid_argument("invalid lenght(must be more or equal to one)");
    int min = find_min(arr, n - 1);
    if (arr[n-2] < min) {
        return arr[n-2];
    }
    return min;
}

int main()
{
    int n;
    cin >> n;
    int* arr = new int[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    cout << find_min(arr, n);

}

