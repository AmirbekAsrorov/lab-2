#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    int N;
    cin>>N;
    vector<int> studentIDs(N);
    vector<int> sums(N);
   for(int i=0;i<N;i++){
        int id, grade1, grade2, grade3;
        cin>>id>>grade1>>grade2>>grade3;
        studentIDs[i]=id;
        sums[i]=grade1+grade2+grade3;
    }
    int studentIDToFind = 2;
    int rank = 1;
    for(int i = 0; i < N; i++){
        if (sums[i] > sums[studentIDToFind - 1]){
            rank++;
        }else if(sums[i] == sums[studentIDToFind - 1] && studentIDs[i] < studentIDs[studentIDToFind - 1]){
            rank++;
        }
    }
    cout<<"Rank of student with ID "<<studentIDToFind<<": "<<rank<<endl;
    return 0;
}
