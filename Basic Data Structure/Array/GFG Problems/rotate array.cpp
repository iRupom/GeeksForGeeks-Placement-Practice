#include<bits/stdc++.h>
using namespace std;


class Solution {
public:
	void rotateArr(int arr[], int d, int n) {
		d %= n; // in case od d greater than n
		reverse(arr, arr + d);
		reverse(arr + d, arr + n);
		reverse(arr, arr + n);
	}
};


int main() {
	int t;
	cin >> t;

	while (t--) {
		int n, d;

		cin >> n >> d;

		int arr[n];

		for (int i = 0; i < n; i++) {
			cin >> arr[i];
		}
		Solution ob;
		ob.rotateArr(arr, d, n);

		for (int i = 0; i < n; i++) {
			cout << arr[i] << " ";
		}
		cout << endl;
	}
	return 0;
}
