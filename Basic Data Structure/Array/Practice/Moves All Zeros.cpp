/*
Move all zeros at the end of the array or vector. But their relative order shoud be keep intake.
*/

#include <bits/stdc++.h>
using namespace std;

vector<int> moveAllZerosNaive(vector<int> v) {
	for (int i = 0; i < v.size(); i++) {
		if (v[i] == 0) {
			for (int j = i + 1; j < v.size(); j++) {
				if (v[j] != 0) {
					swap(v[i], v[j]);
					break;
				}
			}
		}
	}

	vector<int> answer;

	for (int i = 0; i < v.size(); i++) {
		answer.push_back(v[i]);
	}

	return answer;
}

vector<int> moveAllZeros(vector<int> v) {
	int count = 0;
	for (int i = 0; i < v.size(); i++) {
		if (v[i] != 0) {
			swap(v[i], v[count]);
			count++;
		}
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

	vector<int> answer = moveAllZerosNaive(v);

	for (int i = 0; i < answer.size(); i++) {
		cout << answer[i] << " ";
	}

	cout << "\n";

	vector<int> answer2 = moveAllZeros(v);

	for (int i = 0; i < answer2.size(); i++) {
		cout << answer2[i] << " ";
	}

	return 0;
}

// input
// 7
// 1 2 0 0 8 3 0

// output:
// 1 2 8 3 0 0 0

