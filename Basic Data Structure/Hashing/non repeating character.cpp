// problem link:https://practice.geeksforgeeks.org/problems/non-repeating-character-1587115620/1

#include <bits/stdc++.h>
using namespace std;



class Solution
{
public:
    char nonrepeatingCharacter(string S)
    {
        int size = S.size();
        map<char, int> mp;
        for (int i = 0; i < size; i++) {
            mp[S[i]]++;
        }

        for (int i = 0; i < size; i++) {
            if (mp[S[i]] == 1) {
                return S[i];
            }
        }

        return '$';

    }

};


int main() {

    int T;
    cin >> T;

    while (T--)
    {

        string S;
        cin >> S;
        Solution obj;
        char ans = obj.nonrepeatingCharacter(S);

        if (ans != '$')
            cout << ans;
        else cout << "-1";

        cout << endl;

    }

    return 0;
}

