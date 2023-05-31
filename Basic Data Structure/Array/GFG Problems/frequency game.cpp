// problem link :
// https://practice.geeksforgeeks.org/problems/frequency-game/1

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int LargButMinFreq(int arr[], int n) {
        map<int, int> mp;
        for (int i = 0; i < n; i++) {
            mp[arr[i]]++;
        }

        auto it = mp.begin();
        int number = it->first;
        int freq = it->second;

        it++;

        for (auto i = it; i != mp.end(); i++) {
            if (i->first >= number and i->second <= freq) {
                number = i->first;
                freq = i->second;
            }
        }

        return number;

    }
};


int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;

        int arr[n];

        for (int i = 0; i < n; i++) cin >> arr[i];
        Solution ob;

        cout << ob.LargButMinFreq(arr, n) << endl;
    }
}
