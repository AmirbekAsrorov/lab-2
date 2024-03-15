#include <iostream>
#include <vector>

 using namespace std;

// int searchValue(const vector<int>& vec, int num) {
//     for (int i = 0; i < vec.size(); i++) {
//         if (vec[i] == num) {
//             return i;         }
//     }
//     return -1; 
// }
// int main() {
//     vector<int> numbers = {10, 20, 30, 40, 50};
//     int value = 30;
//     int index = searchValue(numbers, value);
//     if (index != -1) {
//         cout << value << " found at index: " << index << endl;
//     } else {
//         cout << value << " not found in the vector." << endl;
//     }
//     return 0;
// }



int searchValue(const vector<int>& vec, int num){
    int n=vec.size();
    for(int i=0;i<n;i++){
        if(vec[i]==num){
            return i;
        }
    }
    return -1;
}

int main(){
    int n,num;
    cout<<"Enter the number of elements:";
    cin>>n;

    vector<int> elements(n);
    cout<<"Enter "<<n<<" elements:";
    for(int i=0;i<n;i++){
        cin>>elements[i];
    }

    cout<<"Enter the value to search:";
    cin>>num;

    int index=searchValue(elements,num);
    if(index!=-1){
        cout<<"Value "<<num<<" found at index "<<index<<endl;
    }
    else{
        cout<<"Value "<<num<<" not found"<<endl;
    }
    return 0;
}
