#include <iostream>
#include <forward_list>
#include <algorithm> // Для std::find

int main() {
    // 1. Створення однозв'язного списку з кількома елементами
    std::forward_list<int> flist = { 5, 10, 15, 20 };

    // 2. Перевірка, чи є в списку елемент 15
    int target = 15;
    auto it = std::find(flist.begin(), flist.end(), target);

    // 3. Виведення результату перевірки
    if (it != flist.end()) {
        std::cout << "Element " << target << " Is here" << std::endl;
    }
    else {
        std::cout << "Element " << target << " Don`t exist" << std::endl;
    }

    return 0;
}
