#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

vector<int> sortedSquares(const vector<int>& nums){
    vector<int> result(nums.size());
    int left=0;
    int right=nums.size()-1;
    int index=nums.size()-1;

    while(left<=right){
        if(abs(nums[left])>abs(nums[right])){
            result[index--]=nums[left]*nums[left];
            left++;
        }else{
            result[index--]=nums[right]*nums[right];
            right--;
        }
    }
    return result;
}
int main(){
    int n;
    cin>>n;
    vector<int> nums(n);
    for(int i=0;i<n;i++){
        cin>>nums[i];
    }
    vector<int> result=sortedSquares(nums);

    for(int num:result){
        cout<<num<<" ";
    }
    return 0;
}
