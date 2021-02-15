#include <stdio.h>
#include<iostream>

using namespace std; 


int main()
{
    int N,ans=0; 
    cin >> N;
    for(int i=1;i<=10;i++){
        if(N%i == 0){
            if(ans < i){
                ans = i;
            }
        }
    }
    
    cout << ans; 
    
    return 0;
}