#include <bits/stdc++.h>
using namespace std;

int withTwoTraversal(string word) {
	int count[256];
	memset(count, 0, sizeof(count));
	for (int i = 0; i < word.size(); i++) {
		count[word[i]]++;
	}
	int result = -1;
	for (int i = 0; i < word.size(); i++) {
		if (count[word[i]] == 1) {
			result = i;
			break;
		}
	}
	return result;
}

int withAnotherMethod(string word) {
	int count[256];
	memset(count, -1, sizeof(count));
	for (int i = 0; i < word.size(); i++) {
		if (count[word[i]] == -1) {
			count[word[i]] = i;
		} else {
			count[word[i]] = -2;
		}
	}

	int result = INT_MAX;
	for (int i = 0; i < 256; i++) {
		if (count[i] >= 0) {
			result = min(result, count[i]);
		}
	}

	return result;
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

	int index = withTwoTraversal(word);
	if (index == -1) {
		cout << "No such character\n";
	} else {
		cout << word[index] << "\n";
	}

	int index2 = withAnotherMethod(word);
	if (index2 == INT_MAX) {
		cout << "No such character\n";
	} else {
		cout << word[index2];
	}
	return 0;
}
