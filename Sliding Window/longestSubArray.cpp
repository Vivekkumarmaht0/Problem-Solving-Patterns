#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];  
    }
    int value;
    cin>>value;
    
    int l = 0;
    int r = 0;
    int sum = 0;
    int maxValue = 0;
    while(r < n){
        sum += arr[r];
        while(sum > value){
            sum -= arr[l];
            l++;
        }
        if(sum <= value){
            maxValue = max(maxValue,sum);
            r++;
        } 
    }
    cout<<maxValue<<endl;
}    