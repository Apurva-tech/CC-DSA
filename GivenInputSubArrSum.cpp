#include <stdio.h>
#include<iostream>

using namespace std; 

void subArrSumOfInp(int len, int sum , int *arr){
    int currSum = 0, start =0, t = 0; 
    
    for(int i = 0; i <= len ; i++ ){
        while(currSum > sum){
            currSum = currSum - arr[start++]; 
        }
        
        if(currSum == sum){
            for(int j = start; j < i; j++ ){
                cout << arr[j]<<' ';
                t++;
            }
            return;
        }
        
        
        if( i < len ){ 
            currSum += arr[i]; 
    }
}
    
    if( t == 0)
    cout << "Not found"; 
}

int main()
{
    int len, sum; 
    cin>>len>>sum; 
    
    int arr[len]; 
    
    for(int i = 0; i< len; i++){
        cin >> arr[i];
    }
    
    subArrSumOfInp(len, sum, arr); 
    

    return 0;
}