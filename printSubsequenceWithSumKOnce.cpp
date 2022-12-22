#include<iostream>
#include<string>
#include<vector>
using namespace std;

bool subsequenceOfSumK(vector<int> v , vector<int> sub , int k , int sum , int n){
    if(n == v.size() ) return  false;
    
    if(sum == k) {
        for(int i = 0 ; i < sub.size() ; i++) cout<<sub[i]<<" ";
        cout<<"\n";
        return true;
    }
    
    if(subsequenceOfSumK(v , sub , k , sum , n+1)) return true; 
    sub.push_back(v[n]);
    if(subsequenceOfSumK(v , sub , k , sum+v[n] , n+1)) return true;
    return false;
    
}

int main(){
    subsequenceOfSumK({1,2,3,4,5} , {} , 7 , 0 , 0);
    return 0;
}