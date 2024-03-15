#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n;
    cout << "Enter the number of elements in the sequence: ";
    cin >> n;
    vector<int> sequence(n);
    cout << "Enter " << n << " numbers:" << endl;
    for (int i = 0; i < n; i++) {
        cin >> sequence[i];
    }for (int i = 0; i < n; i++){
        int count = 0;
        for (int j = 0; j < n; j++){
            if (sequence[j] < sequence[i]){
                count++;
            }
        }
        cout << "For value " << sequence[i] << ", there are " << count << " smaller numbers."<<endl;
    }
    return 0;
}
