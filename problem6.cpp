#include <iostream>
#include <vector>

using namespace std;

// int main() {
//     int n;
//     cout << "Enter the number of elements in the sequence: ";
//     cin >> n;
//     vector<int> sequence(n);
//     cout << "Enter " << n << " numbers:" << endl;
//     for (int i = 0; i < n; i++) {
//         cin >> sequence[i];
//     }for (int i = 0; i < n; i++){
//         int count = 0;
//         for (int j = 0; j < n; j++){
//             if (sequence[j] < sequence[i]){
//                 count++;
//             }
//         }
//         cout << "For value " << sequence[i] << ", there are " << count << " smaller numbers."<<endl;
//     }
//     return 0;
// }
vector<int> countSmallerNumbers(const vector<int>& sequence) {
    int n = sequence.size();
    vector<int> counts(n, 0);
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (sequence[j] < sequence[i]) {
                counts[i]++;
            }
        }
    }

    return counts;
}
int main() {
    int n;
    cout << "Enter the number of elements in the sequence: ";
    cin >> n;
    vector<int> sequence(n);
    cout << "Enter the sequence of numbers: ";
    for (int i = 0; i < n; i++) {
        cin >> sequence[i];
    }
    vector<int> smallerCounts = countSmallerNumbers(sequence);
    cout << "Number of smaller numbers for each value in the sequence:" << endl;
    for (int i = 0; i < n; i++) {
        cout << smallerCounts[i] << " ";
    }
    cout << endl;
    return 0;
}
