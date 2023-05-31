#include<bits/stdc++.h>
using namespace std;


class Solution {
public:
    int majorityElement(int a[], int size) {
        map<int, int> mp;

        for (int i = 0; i < size; i++) {
            mp[a[i]]++;
        }

        int mx = -1;
        int n = size / 2;
        int ele = -1;

        for (auto element : mp) {
            if (element.second > mx and element.second > n) {
                mx = element.second;
                ele = element.first;
            }
        }

        return ele;
    }
};


int main() {

#ifndef ONLINE_JUDGE
    freopen("F:/CP/input.txt", "r", stdin);
    freopen("F:/CP/output.txt", "w", stdout);
#endif

    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        int arr[n];

        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution obj;
        cout << obj.majorityElement(arr, n) << endl;
    }

    return 0;
}

