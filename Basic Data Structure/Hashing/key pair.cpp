/*
    Problem Link : https://practice.geeksforgeeks.org/problems/key-pair5616/1
    Author : Rakib Talukder
    Date : 06.01.23
*/

#include <bits/stdc++.h>

using namespace std;


class Solution {
public:
    bool hasArrayTwoCandidates(int arr[], int n, int x) {
        unordered_map<int, int> mp;

        bool flag = false;

        for (int i = 0; i < n; i++) {
            int element = x - arr[i];
            if (mp.find(element) != mp.end()) {
                flag = true;
                break;
            }
            mp[arr[i]]++;
        }

        return flag;
    }
};


int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, x;
        cin >> n >> x;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.hasArrayTwoCandidates(arr, n, x);
        cout << (ans ? "Yes\n" : "No\n");
    }
    return 0;
}

