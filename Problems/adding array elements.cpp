#include <bits/stdc++.h>
using namespace std;


class Solution {
public:
	int minOperations(int arr[], int n, int k) {
		priority_queue<int, vector<int>, greater<int>> pq;
		for (int i = 0; i < n; i++) {
			pq.push(arr[i]);
		}
		int cnt = 0;
		while (!pq.empty()) {
			if (pq.size() == 1) {
				if (pq.top() < k) {
					return -1;
				} else {
					return cnt;
				}
			}
			if (pq.top() >= k) {
				return cnt;
			}

			int first, second;
			first = pq.top();
			pq.pop();
			second = pq.top();
			pq.pop();
			pq.push(first + second);
			cnt++;
		}

		return cnt;
	}

};
int main() {
	int t;
	cin >> t;
	while (t--) {
		int n, k;
		cin >> n >> k;
		int arr[n];
		for (int i = 0; i < n; i++) {
			cin >> arr[i];
		}
		Solution obj;
		int ans = obj.minOperations(arr, n, k);
		cout << ans << "\n";
	}
	return 0;
}
