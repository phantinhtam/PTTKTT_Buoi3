2.Thực hiện QuickSort (6 phần tử)
	- Đệ qui (Code (commit) + debug + result)
Bắt đầu chương trình:

Mảng ban đầu: {12, 4, 5, 6, 7, 3}
Lần gọi đầu tiên của quickSort:

Phân hoạch mảng từ 0 đến 5 (chọn phần tử chốt là 3).
Kết quả sau phân hoạch: {3, 4, 5, 6, 7, 12} (phần tử 3 được đưa vào đúng vị trí).
Lần gọi thứ hai của quickSort:

Phân hoạch mảng từ 1 đến 5 (chọn phần tử chốt là 12).
Kết quả sau phân hoạch: {3, 4, 5, 6, 7, 12} (phần tử 12 đã ở đúng vị trí, không thay đổi).
Lần gọi thứ ba của quickSort:

Phân hoạch mảng từ 1 đến 4 (chọn phần tử chốt là 7).
Kết quả sau phân hoạch: {3, 4, 5, 6, 7, 12} (phần tử 7 đã ở đúng vị trí, không thay đổi).
Lần gọi thứ tư của quickSort:

Phân hoạch mảng từ 1 đến 3 (chọn phần tử chốt là 6).
Kết quả sau phân hoạch: {3, 4, 5, 6, 7, 12} (phần tử 6 đã ở đúng vị trí,d không thay đổi).
Lần gọi cuối cùng của quickSort:

Phân hoạch mảng từ 1 đến 2 (chọn phần tử chốt là 5).
Kết quả sau phân hoạch: {3, 4, 5, 6, 7, 12} (phần tử 5 đã ở đúng vị trí, không thay đổi).

                        Kết quả cuối cùng
Sau khi thực hiện thuật toán QuickSort, mảng đã được sắp xếp hoàn toàn:
Sorted array: 3 4 5 6 7 12
1. Hàm phân hoạch (partition)
 ![image](https://github.com/user-attachments/assets/5e7de9eb-a24a-44f6-97a0-7c8de76919e6)
- Mục đích: Hàm partition chia mảng thành hai phần dựa trên giá trị của phần tử chốt (pivot). Phần tử chốt thường là phần tử cuối cùng của dải đang xét.
- Chi tiết:
Chọn phần tử cuối cùng của dải làm pivot.
Duyệt từ chỉ số low đến high - 1. Nếu phần tử hiện tại nhỏ hơn pivot, hoán đổi nó với phần tử tại chỉ số i (vị trí đã sắp xếp).
Sau khi duyệt xong, hoán đổi phần tử pivot với phần tử tiếp theo của i để đặt pivot ở vị trí đúng trong mảng đã phân hoạch.
Trả về chỉ số của pivot, nơi nó đã được đặt đúng chỗ.
2. Hàm QuickSort
  ![image](https://github.com/user-attachments/assets/85dc0c1e-0ee1-40c1-ab29-11307923afed)
- Mục đích: Hàm quickSort sắp xếp mảng bằng cách gọi đệ quy hàm partition.
- Chi tiết:
Kiểm tra điều kiện cơ sở của đệ quy: nếu low không nhỏ hơn high, không cần sắp xếp nữa.
Sử dụng hàm partition để chia mảng và tìm chỉ số của pivot.
Gọi quickSort đệ quy cho phần bên trái và bên phải của pivot để tiếp tục sắp xếp.
3. Hàm hiển thị mảng (printArray)
  ![image](https://github.com/user-attachments/assets/0d8c1354-dc30-403b-bdb4-8b64f2b28b0b)
- Mục đích: Hàm này dùng để in các phần tử của mảng ra màn hình.
- Chi tiết:
Duyệt qua tất cả các phần tử của mảng và in chúng ra.
4. Hàm main
  ![image](https://github.com/user-attachments/assets/8607308b-8d86-4a66-a495-7bb3630daf19)
- Mục đích: Chạy chương trình và kiểm tra thuật toán sắp xếp nhanh.
- Chi tiết:
Khởi tạo mảng arr với các giá trị chưa được sắp xếp.
In mảng trước khi sắp xếp.
Gọi hàm quickSort để sắp xếp mảng.
In mảng sau khi sắp xếp để kiểm tra kết quả.






