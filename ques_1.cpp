#include <iostream>
#include <algorithm>
#include <bits/stdc++.h>
#include <vector>
using namespace std;

void small_sum(vector<int> &arr, int n){
    sort(arr.begin(),arr.end());

    int min_sum = INT_MAX;
    int a;
    int b;

    int i = 0;
    int j = n-1;

    while (i<j){
        int sum = arr[i]+arr[j];
        if (abs(sum)<abs(min_sum)){
            min_sum = sum;
            a = i;
            b = j;
        }
        if (sum<0) i++;
        else j--;
    }

    cout<<arr[a]<<endl;
    cout<<arr[b]<<endl;

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

    small_sum(arr,n);

    return 0;
}
