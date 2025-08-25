// 643. Maximum Average Subarray I
// Input: nums = [1,12,-5,-6,50,3], k = 4
// Output: 12.75000
// Explanation: Maximum average is (12 - 5 - 6 + 50) / 4 = 51 / 4 = 12.75

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

    int sum = 0;
    int maxValue = 0;
    for(int i=0; i<value; i++){
        sum += arr[i];
    }

    maxValue = sum;

    for(int i=value; i<n; i++){
        sum += arr[i] - arr[i-value];
        maxValue = max(maxValue,sum);
    }
    cout<<(double)maxValue/value<<endl;
    
}