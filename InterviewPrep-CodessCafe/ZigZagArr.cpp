#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int swapll(int x,int y){
    int c = x;
    x = y; 
    y = c; 
    return x,y; 
}

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    
    int len; 
    cin>>len; 
    int arr[len]; 
    for(int i=0;i<len;i++){
        cin>>arr[i];
    }
    
    for(int i=0; i<len-1; i++){
        if(i%2 == 0){
            if(arr[i]>arr[i+1]){
                int c = arr[i]; 
                arr[i] = arr[i+1]; 
                arr[i+1] = c; 
            }           
        }
        else{
            if(arr[i]<arr[i+1]){
                int c = arr[i]; 
                arr[i] = arr[i+1]; 
                arr[i+1] = c; 
            }
        }
    }
    
    for(int i=0;i<len;i++){
        cout<<arr[i]<<' '; 
    }
    
    return 0;
}
