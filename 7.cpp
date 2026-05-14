#include <iostream>
#include <vector>

template<typename T>
int insertion_sort_count(std::vector<T>& v) {
    int shift_count = 0;
    int n = v.size();
    
    for (int i = 1; i < n; ++i) {
        T key = v[i];
        int j = i - 1;
        while (j >= 0 && v[j] > key) {
            v[j + 1] = v[j];
            shift_count++; 
            --j;
        }
        v[j + 1] = key;
    }
    return shift_count;
}

int main() {
    std::vector<int> v = {4, 3, 2, 1};
    
    int shifts = insertion_sort_count(v);
    
    std::cout << "Відсортований масив: ";
    for (int n : v) std::cout << n << " ";
    std::cout << "\nКількість зсувів: " << shifts << std::endl;
    
    return 0;
}
