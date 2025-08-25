// 1493. Longest Subarray of 1's After Deleting One Element
// Input: nums = [1,1,0,1]
// Output: 3
// Explanation: After deleting the number in position 2, [1,1,1] contains 3 numbers with value of 1's.

#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i=0; i<n; i++){
        cin>>arr[i];  
    }
    int k;
    cin>>k;

    int l = 0, r = 0;
    int zero = 0, maxLen = 0;
    int len = 0;
    while(r < n){
        if(arr[r] == 0) zero++;
        while(zero > k){
            if(arr[l] == 0) zero--;
            l++;
        }
        
        maxLen = max(maxLen, r-l+1);
        r++;
    }
    cout<<maxLen<<endl;
}