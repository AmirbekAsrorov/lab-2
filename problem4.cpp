#include <iostream>
#include <string>

using namespace std;

void trianglePattern(int n) {
    for (int i = 1; i <= n; i++) {
        cout << string(i,'*') << endl;
    }
}
void squarePattern(int n) {
    for (int i = 0; i < n; i++) {
        cout << string(n, '*') << endl;
    }
}
void squareValue(int n) {
    cout << "Square value of " << n << " is: " << (n * n) << endl;
}
int main() {
  
    int n;
    cout << "Enter a value for n:";
    cin >> n;
    cout << "\nTriangle Pattern:" <<endl;
    trianglePattern(n);
    cout << "\nSquare Pattern:" <<endl;
    squarePattern(n);
    squareValue(n);

  
    return 0;
}
