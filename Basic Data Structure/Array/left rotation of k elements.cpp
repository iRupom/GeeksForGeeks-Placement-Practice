#include <bits/stdc++.h>
using namespace std;

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
	int arr[n];
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}

	int k; cin >> k;

	int temp[k];

	for (int i = 0; i < k; i++) {
		temp[i] = arr[i];
	}


	for (int i = 0; i < n; i++) {
		arr[i] = arr[i + k];
	}

	for (int i = n - k, j = 0; i < n and j < k; i++, j++) {
		arr[i] = temp[j];
	}

	for (int i = 0; i < n; i++) {
		cout << arr[i] << " ";
	}

	return 0;
}

// input:
// 7
// 1 2 3 4 5 6 7
// 1

// output:
// 2 3 4 5 6 7 1
