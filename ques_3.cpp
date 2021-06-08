#include <iostream>
#include <algorithm>
#include <bits/stdc++.h>
#include <vector>
#include <unordered_map>
using namespace std;

int helper(vector<int> &arr, int x, int y){
    unordered_map<int,int> h1;
    h1[x]++;
    h1[y]++;

    unordered_map<int,int> h2;

    int ans = INT_MAX;
    int counter = 0;
    int l = 0;

    for (int r=0;r<arr.size();r++){
        h2[arr[r]]++;
        if (h1.find(arr[r])!=h1.end() && h1[arr[r]]==h2[arr[r]]) counter++;

        while (l<r && counter==2){
            if (r-l<ans){
                ans = r-l;
            }
            h2[arr[l]]--;
            if (h1.find(arr[l])!=h1.end() && h2[arr[l]]<h1[arr[l]]) counter--;
            l++;
        }
    }
    return ans;
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

    int x;
    cin>>x;
    int y;
    cin>>y;

    int ans = helper(arr,x,y);

    cout<<ans<<endl;

    return 0;
}
