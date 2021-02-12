#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#define ll long int
using namespace std;

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    
    ll len; 
    cin >> len; 
    ll arr[len]; 
    for(ll i =0; i < len ;i++){
        cin >> arr[i];
    }
    
    ll lowersum[len] = {0}, highersum[len] = {0};
    ll ans;
    lowersum[0] = arr[0];
    highersum[len-1] = arr[len-1]; 
    
    for(ll i = 1; i < len; i++){
        lowersum[i] = lowersum[i-1] + arr[i]; 
        highersum[len-i-1] = highersum[(len-i)] + arr[len-i-1]; 
    }
    
    
    for(ll i = 0; i < len ;i++){
        //cout << lowersum[i]<<"\n"; 
        //cout << highersum[i]<<"\n";
        if(lowersum[i] == highersum[i]){
            ans = i; 
            break;
        }
    }
    
    cout<<ans; 
    
    
    return 0;
}
