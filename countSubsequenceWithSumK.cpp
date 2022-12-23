#include<iostream>
#include<string>
#include<vector>
using namespace std;

int subsequenceWithSumK(vector<int> v , int sum , int k , int n){
    if(sum == k ) return 1;
    if(n == v.size()) return 0;
    return (subsequenceWithSumK(v , sum , k , n+1) + subsequenceWithSumK(v , sum+v[n] , k , n+1));
    
}

int main(){
    cout<<subsequenceWithSumK({1,2,3,4,5,6,7,8,9} , 0 , 7 , 0);
    return 0;
}