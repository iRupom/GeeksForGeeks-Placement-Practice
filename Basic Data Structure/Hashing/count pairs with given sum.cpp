/*
    Problem Link : https://practice.geeksforgeeks.org/problems/count-pairs-with-given-sum5022/1
    Author : Rakib Talukder
    Date : 06.01.23
*/

#include <bits/stdc++.h>
using namespace std;


class Solution {
public:
    int getPairsCount(int arr[], int n, int k) {
        map<int, int> mp;
        int cnt = 0;
        for (int i = 0; i < n; i++) {
            int element = k - arr[i];
            if (mp.find(element) != mp.end()) {
                cnt += mp[element];
            }
            mp[arr[i]]++;
        }

        return cnt;
    }
};


int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.getPairsCount(arr, n, k);
        cout << ans << "\n";
    }

    return 0;
}
