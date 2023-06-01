/*
    Problem Link : https://practice.geeksforgeeks.org/problems/winner-of-an-election-where-votes-are-represented-as-candidate-names-1587115621/1
    Author : Rakib Talukder
    Date : 06.01.23
*/

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:

    vector<string> winner(string arr[], int n) {
        map<string, int> mp;
        for (int i = 0; i < n; i++) {
            mp[arr[i]]++;
        }

        vector<string> answer;
        string name = "";
        int count = -1;

        for (auto it = mp.begin(); it != mp.end(); it++) {
            if (it->second > count) {
                name = it->first;
                count = it->second;
            } else if (count == it->second) {
                if (name.compare(it->first) > 0) {
                    name = it->first;
                }
            }
        }
        answer.push_back(name);
        answer.push_back(to_string(count));

        return answer;
    }
};


int main()
{
    int t;
    cin >> t;

    for (int i = 0; i < t; i++)
    {


        int n;
        cin >> n;

        string arr[n];

        for (int i = 0; i < n; i++)
            cin >> arr[i];
        Solution obj;
        vector<string> result = obj.winner(arr, n);

        cout << result[0] << " " << result[1] << endl;
    }
    return 0;
}

