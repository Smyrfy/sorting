#include <iostream>
#include <vector>
#include <algorithm>

template<typename T>
void partition_3way(std::vector<T>& v, int low, int high, int& lt, int& gt) {
    T pivot = v[low];
    
    lt = low; 
    gt = high;
    int i = low + 1;

    while (i <= gt) {
        if (v[i] < pivot) {
            std::swap(v[lt], v[i]);
            lt++;
            i++;
        } 
        else if (v[i] > pivot) {
            std::swap(v[i], v[gt]);
            gt--;
        } 
        else {
            i++;
        }
    }
}

int main() {
    std::vector<int> v = {4, 9, 4, 4, 1, 9, 4, 4, 9, 4, 4, 1, 4};
    int lt, gt;

    std::cout << "Оригінальний масив: ";
    for (int x : v) std::cout << x << " ";
    std::cout << "\n";

    partition_3way(v, 0, v.size() - 1, lt, gt);

    std::cout << "Після Three-way Partition:\n";
    std::cout << "Менші за pivot: ";
    for (int i = 0; i < lt; ++i) std::cout << v[i] << " ";
    
    std::cout << "\nРівні pivot: ";
    for (int i = lt; i <= gt; ++i) std::cout << v[i] << " ";
    
    std::cout << "\nБільші за pivot: ";
    for (int i = gt + 1; i < v.size(); ++i) std::cout << v[i] << " ";
    std::cout << "\n";

    return 0;
}
