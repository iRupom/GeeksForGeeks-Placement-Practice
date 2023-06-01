#include<bits/stdc++.h>
using namespace std;

class Solution
{
public:
	int find_median(vector<int> v) {
		sort(v.begin(), v.end());

		int size = v.size();
		if (size % 2 == 0) {
			return (v[(size - 1) / 2] + v[size / 2]) / 2;
		}

		return v[size / 2];

	}
};

int main() {
	int T;
	cin >> T;
	while (T--)
	{
		int n;
		cin >> n;
		vector<int> v(n);
		for (int i = 0; i < n; i++)
			cin >> v[i];
		Solution ob;
		int ans = ob.find_median(v);
		cout << ans << "\n";
	}
	return 0;
}

