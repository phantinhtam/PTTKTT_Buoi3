#include <iostream>
#include <vector>
using namespace std;

// Hàm tính tổng mảng từ 1..n không đệ quy
int sumArrayNonRecursive(const vector<int>& arr) {
    int n = arr.size();
    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum += arr[i];
    }
    return sum;
}

// Hàm tính tổng mảng từ 1..n đệ quy
int sumArrayRecursive(const vector<int>& arr, int left, int right) {
    if (left == right) {
        return arr[left];
    }

    int mid = left + (right - left) / 2;
    int leftSum = sumArrayRecursive(arr, left, mid);
    int rightSum = sumArrayRecursive(arr, mid + 1, right);

    return leftSum + rightSum;
}

// Hàm phân hoạch (partition) sử dụng phần tử chốt (pivot)
int partition(vector<int>& arr, int low, int high) {
    int pivot = arr[high];
    int i = low - 1;

    for (int j = low; j <= high - 1; j++) {
        if (arr[j] < pivot) {
            i++;
            swap(arr[i], arr[j]);
        }
    }
    swap(arr[i + 1], arr[high]);
    return (i + 1);
}

// Hàm QuickSort đệ quy
void quickSort(vector<int>& arr, int low, int high) {
    if (low < high) {
        int pi = partition(arr, low, high);
        quickSort(arr, low, pi - 1);
        quickSort(arr, pi + 1, high);
    }
}

// Hàm hiển thị mảng
void printArray(const vector<int>& arr) {
    for (int i = 0; i < arr.size(); i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

// Hàm tìm kiếm nhị phân không đệ quy
int binarySearchNonRecursive(const vector<int>& arr, int target) {
    int left = 0;
    int right = arr.size() - 1;

    while (left <= right) {
        int mid = left + (right - left) / 2;

        if (arr[mid] == target) {
            return mid;
        }

        if (arr[mid] < target) {
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }

    return -1;
}

// Hàm tìm kiếm nhị phân đệ quy
int binarySearchRecursive(const vector<int>& arr, int left, int right, int target) {
    if (right >= left) {
        int mid = left + (right - left) / 2;

        if (arr[mid] == target) {
            return mid;
        }

        if (arr[mid] < target) {
            return binarySearchRecursive(arr, mid + 1, right, target);
        }

        return binarySearchRecursive(arr, left, mid - 1, target);
    }

    return -1;
}

int main() {
    int choice;
    cout << "Chọn tùy chọn:" << endl;
    cout << "1. Tính tổng mảng không đệ quy" << endl;
    cout << "2. Tính tổng mảng đệ quy" << endl;
    cout << "3. Sắp xếp mảng (QuickSort)" << endl;
    cout << "4. Tìm kiếm nhị phân không đệ quy" << endl;
    cout << "5. Tìm kiếm nhị phân đệ quy" << endl;
    cin >> choice;

    switch (choice) {
        case 1: {
            int n;
            cout << "Nhập giá trị của n: ";
            cin >> n;

            vector<int> arr(n);
            for (int i = 0; i < n; i++) {
                arr[i] = i + 1;
            }

            int sum = sumArrayNonRecursive(arr);
            cout << "Tổng mảng (không đệ quy): " << sum << endl;
            break;
        }
        case 2: {
            int n;
            cout << "Nhập giá trị của n: ";
            cin >> n;

            vector<int> arr(n);
            for (int i = 0; i < n; i++) {
                arr[i] = i + 1;
            }

            int sum = sumArrayRecursive(arr, 0, n - 1);
            cout << "Tổng mảng (đệ quy): " << sum << endl;
            break;
        }
        case 3: {
            int n;
            cout << "Nhập số lượng phần tử: ";
            cin >> n;

            vector<int> arr(n);
            cout << "Nhập các phần tử: ";
            for (int i = 0; i < n; i++) {
                cin >> arr[i];
            }

            quickSort(arr, 0, n - 1);
            cout << "Mảng đã sắp xếp: ";
            printArray(arr);
            break;
        }
        case 4: {
            int n, target;
            cout << "Nhập số lượng phần tử: ";
            cin >> n;

            vector<int> arr(n);
            cout << "Nhập các phần tử đã sắp xếp: ";
            for (int i = 0; i < n; i++) {
                cin >> arr[i];
            }

            cout << "Nhập phần tử cần tìm: ";
            cin >> target;

            int result = binarySearchNonRecursive(arr, target);
            if (result != -1) {
                cout << "Phần tử tìm thấy tại chỉ số: " << result << endl;
            } else {
                cout << "Không tìm thấy phần tử." << endl;
            }
            break;
        }
        case 5: {
            int n, target;
            cout << "Nhập số lượng phần tử: ";
            cin >> n;

            vector<int> arr(n);
            cout << "Nhập các phần tử đã sắp xếp: ";
            for (int i = 0; i < n; i++) {
                cin >> arr[i];
            }

            cout << "Nhập phần tử cần tìm: ";
            cin >> target;

            int result = binarySearchRecursive(arr, 0, n - 1, target);
            if (result != -1) {
                cout << "Phần tử tìm thấy tại chỉ số: " << result << endl;
            } else {
                cout << "Không tìm thấy phần tử." << endl;
            }
            break;
        }
        default:
            cout << "Lựa chọn không hợp lệ." << endl;
    }

    return 0;
}
