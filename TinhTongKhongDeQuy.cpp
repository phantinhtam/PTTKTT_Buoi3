#include <iostream>
#include <vector>
using namespace std;

int sumArray(const vector<int>& arr) {
    int n = arr.size();
    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum += arr[i];
    }
    return sum;
}

int main() {
    int n;
    cout << "Enter the value of n: ";
    cin >> n;

    vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        arr[i] = i + 1;
    }

    int result = sumArray(arr);
    cout << "The sum of the array is: " << result << endl;

    return 0;
}