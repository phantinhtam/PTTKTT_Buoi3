#include <iostream>
#include <vector>
using namespace std;

int TimKiemNhiPhanCoDeQuy(const vector<int>& arr, int left, int right, int target) {
    if (right >= left) {
        int mid = left + (right - left) / 2;
        if (arr[mid] == target) {
            return mid;
        }

        if (arr[mid] < target) {
            return TimKiemNhiPhanCoDeQuy(arr, mid + 1, right, target);
        }

    
        return TimKiemNhiPhanCoDeQuy(arr, left, mid - 1, target);
    }


    return -1;
}

int main() {
    vector<int> arr = {2, 3, 4, 10, 40};
    int target = 10;

    int result = TimKiemNhiPhanCoDeQuy(arr, 0, arr.size() - 1, target);
    if (result != -1) {
        cout << "Đưa thông tin phần tử trong mảng ra màn hình: " << result << endl;
    } else {
        cout << "Không tìm thấy phần tử trong mảng ." << endl;
    }

    return 0;
}