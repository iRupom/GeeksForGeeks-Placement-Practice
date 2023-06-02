#include <bits/stdc++.h>
using namespace std;

bool isAnagram(string word1, string word2) {
	if (word1.size() != word2.size()) {
		return false;
	}

	int count[256] = {0};
	for (int i = 0; i < word1.size(); i++) {
		count[word1[i]]++;
	}

	for (int i = 0; i < word2.size(); i++) {
		count[word2[i]]--;
	}

	for (int i = 0; i < 256; i++) {
		if (count[i] != 0) {
			return false;
		}
	}

	return true;
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

	string word1, word2;
	cin >> word1 >> word2;

	if (isAnagram(word1, word2)) {
		cout << "Anagram\n";
	} else {
		cout << "Not anagram\n";
	}

	return 0;
}
