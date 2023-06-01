// Problem Link : https://practice.geeksforgeeks.org/problems/finding-the-numbers0215/1


#include<bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<int> singleNumber(vector<int> nums)
    {
        map<int, int> mp;
        for (int i = 0; i < nums.size(); i++) {
            mp[nums[i]]++;
        }

        vector<int> answer;
        for (int i = 0; i < nums.size(); i++) {
            if (mp[nums[i]] == 1) {
                answer.push_back(nums[i]);
            }
        }

        sort(answer.begin(), answer.begin() + answer.size());

        return answer;
    }
};

int main() {
    int T;
    cin >> T;
    while (T--)
    {
        int n;
        cin >> n;
        vector<int> v(2 * n + 2);
        for (int i = 0; i < 2 * n + 2; i++)
            cin >> v[i];
        Solution ob;
        vector<int > ans = ob.singleNumber(v);
        for (auto i : ans)
            cout << i << " ";
        cout << "\n";
    }
    return 0;
}
