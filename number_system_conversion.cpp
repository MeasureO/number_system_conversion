#include<bits/stdc++.h>
using namespace std;
long long a, k, t, ost, ans;
int main() {

	vector<long long> v;
    deque<long long> ans;
    cin>> k >> t;
	while(cin >> a){
		v.push_back(a);
	}
	bool ok = true;
	while(ok) {
		ost = 0;
		ok = false;
		for (auto &to: v) {
			ost = (ost * k + to);
			to =  ost / t;
			ost = ost % t;
			ok |= to;
			
		}
		ans.push_front(ost);
	}
	for (auto to: ans) {
		cout << to << ' ';
	}
}