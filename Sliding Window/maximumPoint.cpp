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

    int leftSum = 0;
    int rightSum = 0;
    int maxSum = 0;
    for(int i=0; i<value; i++){
        leftSum += arr[i];
    }
    maxSum = leftSum; 

    int rightIndex = n-1;
    for(int i=value-1; i>=0; i--){
        leftSum -= arr[i];
        rightSum += arr[rightIndex--];
        maxSum = max(maxSum,leftSum + rightSum);
    }
    cout<<maxSum<<endl;
}    