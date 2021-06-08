#include <iostream>
#include <algorithm>
#include <bits/stdc++.h>
#include <unordered_set>
#include <vector>
using namespace std;

void duplicates(vector<int> &arr, int n){
    unordered_set<int> hash;
    for (int i=0;i<n;i++){
        if (hash.find(arr[i])!=hash.end()){
            cout<<arr[i]<<" ";
        }
        else {
            hash.insert(arr[i]);
        }
    }
}

int main() {
    int n;
    cin>>n;
    vector<int> arr;
    for (int i=0;i<n;i++){
        int x;
        cin>>x;
        arr.push_back(x);
    }

    duplicates(arr,n);

    return 0;
}
