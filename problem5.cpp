#include <iostream>
#include <vector>

using namespace std;

int searchValue(const vector<int>& vec, int num) {
    for (int i = 0; i < vec.size(); i++) {
        if (vec[i] == num) {
            return i;         }
    }
    return -1; 
}
int main() {
    vector<int> numbers = {10, 20, 30, 40, 50};
    int value = 30;
    int index = searchValue(numbers, value);
    if (index != -1) {
        cout << value << " found at index: " << index << endl;
    } else {
        cout << value << " not found in the vector." << endl;
    }
    return 0;
}
