#include <iostream>
#include <vector>

 using namespace std;

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
