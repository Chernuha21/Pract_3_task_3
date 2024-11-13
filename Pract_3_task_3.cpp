#include <iostream>
#include <forward_list>
#include <algorithm> // ��� std::find

int main() {
    // 1. ��������� ������'������ ������ � ������� ����������
    std::forward_list<int> flist = { 5, 10, 15, 20 };

    // 2. ��������, �� � � ������ ������� 15
    int target = 15;
    auto it = std::find(flist.begin(), flist.end(), target);

    // 3. ��������� ���������� ��������
    if (it != flist.end()) {
        std::cout << "Element " << target << " Is here" << std::endl;
    }
    else {
        std::cout << "Element " << target << " Don`t exist" << std::endl;
    }

    return 0;
}
