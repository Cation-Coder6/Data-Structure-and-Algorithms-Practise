#include<iostream>
#include<string>
#include<vector>
using namespace std;

void subsequenceOfSumK(vector<int> v , vector<int> sub , int k , int sum , int n){
    if(n == v.size() ) return;
    
    if(sum == k) {
        for(int i = 0 ; i < sub.size() ; i++) cout<<sub[i]<<" ";
        cout<<"\n";
        return;
    }
    
    subsequenceOfSumK(v , sub , k , sum , n+1);
    sub.push_back(v[n]);
    subsequenceOfSumK(v , sub , k , sum+v[n] , n+1);
    
}

int main(){
    subsequenceOfSumK({1,2,3,4,5} , {} , 5 , 0 , 0);
    return 0;
}