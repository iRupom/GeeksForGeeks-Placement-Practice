#include <bits/stdc++.h>
using namespace std;

int leftMostCharacterRepeat(string word) {
	int res = INT_MAX;
	int count[256];
	memset(count, -1, sizeof(count));

	for (int i = 0; i < word.size(); i++) {
		if (count[word[i]] == -1) {
			count[word[i]] = i;
		} else {
			res = min(res, count[word[i]]);
		}
	}

	return res;
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

	string word;
	cin >> word;

	int index =  leftMostCharacterRepeat(word);
	if (index == INT_MAX) {
		cout << "No repeating character\n";
	} else {
		cout << word[index];
	}

	return 0;
}
