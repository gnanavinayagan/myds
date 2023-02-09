#include<bits/stdc++.h>
using namespace std;

void printarray(vector<int> arr){
    for(auto&x : arr)
        cout<<x<< " ";
    cout<<endl;
}


int maxSumSubarray(vector<int> arr) {
    printarray(arr);
    
    int n = arr.size();
    vector<int> prefix(n,0);
    prefix[0] = arr[0];
    
    for(int i=1; i<n; i++){
        prefix[i] = prefix[i-1] + arr[i]; 
    }

 
    cout<<"prefix array"<<endl;
    printarray(prefix);
    
    int maxim = -99999999;
    for(int i=0; i<n; i++){
        
        for(int j=i; j<n; j++){
            int ss;
            if(i == 0){
                ss = prefix[j];
                cout<<"ss"<<ss<<endl;
            }
            else{
                ss = prefix[j] - prefix[i-1];
            }
            maxim = max(maxim,ss);
        }
    }
    return maxim;
}
