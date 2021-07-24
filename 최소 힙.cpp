#include <iostream>
#include <queue>
#include<vector>

using namespace std;

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	priority_queue<int, vector<int>, greater<int>>a;
	int n;
	int k;
	cin >> n;

	for (int i = 0; i < n; i++) {
		cin >> k;
		switch (k)
		{
		case 0:
			if (a.empty()) { //or if(a.size())
				cout << "0" << '\n';
				continue;
			}
			else {
				cout << a.top() << '\n';

				a.pop();
				continue;
			}
		default:
			a.push(k);
			break;
		}
	}


}