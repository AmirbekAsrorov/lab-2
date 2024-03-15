#include <iostream>

using namespace std;

string canDivideCake(int a, int b, int n){
    int count = 0;
    while(a%2==0){
        a/=2;
        count++;
    }
       while(b%2==0){
        b/=2;
        count++;
    }if(count>=n){
        return "YES";
    }else{
        return "NO";
    }
}
int main(){
    int a,b,n;
    cin >>a>>b>>n;
    cout<<canDivideCake(a,b,n)<<endl;
    return 0;
}
