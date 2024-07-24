#include <iostream>
#include <vector>
using namespace std;

int sumArrayRecursive(const vector<int>& arr, int left, int right) {
    if (left == right) {
        return arr[left];
    }

    int mid = left + (right - left) / 2;
    int leftSum = sumArrayRecursive(arr, left, mid);
    int rightSum = sumArrayRecursive(arr, mid + 1, right);

    return leftSum + rightSum;
}

int main() {
    int n;
    cout << "Enter the value of n: ";
    cin >> n;

    vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        arr[i] = i + 1;
    }

    int result = sumArrayRecursive(arr, 0, n - 1);
    cout << "The sum of the array is: " << result << endl;

    return 0;
}