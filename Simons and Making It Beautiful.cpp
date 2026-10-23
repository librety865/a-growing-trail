/*
For a permutation r of length m, we call an index i (1 \le i \le m) ugly if and only if r_i = \max(\{r_1,r_2,\dots,r_i\}).

Simons has a permutation p of length n, and he can perform the following operation on p at most once:

• Choose two indices i and j (1 \le i \ne j \le n), then swap p_i and p_j.

Find a permutation q that can be obtained from p by performing the above operation at most once, such that the number of ugly indices in q is minimized.

*A permutation of length n is an array consisting of n distinct integers from 1 to n in arbitrary order.
For example, [2,3,1,5,4] is a permutation, but [1,2,2] is not a permutation (2 appears twice in the array), and [1,3,4] is also not a permutation (n=3 but there is 4 in the array).

Input
Each test contains multiple test cases. The first line contains the number of test cases t (1 \le t \le 100). The description of the test cases follows.

The first line contains an integer n (1 \le n \le 500) — the length of p.
The second line contains n integers p_1,p_2,\dots,p_n (1 \le p_i \le n, all p_i-s are distinct) — the elements of p.
*/

#include<iostream>
#include<algorithm>
using namespace std;
int main() {
	int t;
	cin >> t;
	while (t--) {
		int n;
		cin >> n;
		int arr[510] = {0};
		for (int i = 1; i <= n; i++) {
			cin >> arr[i];
		}
		int*pmax = max_element(arr + 1, arr + n + 1);
		swap(*pmax, arr[1]);
		for (int i = 1; i <= n; i++) {
			cout << arr[i]; //TODO
			cout << " ";
		}
		cout << "\n";

	}
	return 0;
}

/*
灵光一闪就想到了
哈哈哈哈哈哈哈哈哈
*/
