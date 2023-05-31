#include <bits/stdc++.h>
using namespace std;

vector<int> reverseArray(vector<int> v) {

	for (int i = 0, j = v.size() - 1; i < v.size() / 2; i++, j--) {
		swap(v[i], v[j]);
	}

	vector<int> answer;
	for (int i = 0; i < v.size(); i++) {
		answer.push_back(v[i]);
	}

	return answer;
}

int32_t main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

#ifndef ONLINE_JUDGE
	freopen("F:/CP/input.txt", "r", stdin);
	freopen("F:/CP/output.txt", "w", stdout);
#endif

	int n; cin >> n;
	vector<int> v(n);

	for (int i = 0; i < n; i++) {
		cin >> v[i];
	}

	// using manual function

	vector<int> answer = reverseArray(v);

	for (int i = 0; i < answer.size(); i++) {
		cout << answer[i] << " \n"[i == answer.size() - 1];
	}

	// using library function
	reverse(v.begin(), v.end());

	for (int i = 0; i < v.size(); i++) {
		cout << v[i] << " ";
	}

	return 0;
}
