#include <iostream>
#include <vector>

using namespace std;

int TimKiemNhiPhanKhongDeQuy(const vector<int>& arr, int target) {
    int left = 0;
    int right = arr.size() - 1;

    while (left <= right) {
        int mid = left + (right - left) / 2;

        // Kiểm tra nếu phần tử ở giữa là phần tử cần tìm
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

int main() {
    vector<int> arr = {2, 3, 4, 10, 40};
    int target = 10;

    int result =  TimKiemNhiPhanKhongDeQuy(arr, target);
    if (result != -1) {
        cout << "Đưa thông tin ra màn hình: " << result << endl;
    } else {
        cout << "Quay về lại con trỏ." << endl;
    }

    return 0;
}
