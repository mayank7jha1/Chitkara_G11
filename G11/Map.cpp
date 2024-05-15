#include<iostream>
#include<map>
#include<unordered_map>
using  namespace std;

// Map: Key Value Pair
//Keys Unique :


int main() {
	int n;
	cin >> n;

	map<string, int>mp;
	unordered_map<string, int>ump;

	for (int i = 0; i < n; i++) {
		string s; int x;
		cin >> s >> x;

		mp.insert({s, x});
		ump.insert({s, x});
	}


	//Using Iterators:

	for (map<string, int>::iterator it = mp.begin(); it != mp.end(); it++) {
		cout << (*it).first << " " << (*it).second << endl;
	}
	cout << endl << endl;
	//For Each Loop:

	for (pair<string, int>x : ump) {
		cout << x.first << " " << x.second << endl;
	}



}











