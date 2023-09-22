#include <bits/stdc++.h>
using namespace std;

int main (){
	vector<vector<char> > list_s;
	string s;
	int k;
	cin >> s >> k;
	list_s.resize(k);
	
	for (int i = 0; i < (int)s.size(); i++){
		list_s[i%k].push_back(s[i]);
	}
	for (int i = 0; i < k; i++){
		sort (list_s[i].begin(), list_s[i].end());
	}
	for (int i = 0; i < (int)s.size(); i++){
		printf("%c", list_s[i%k][i/k]);
	}
	printf("\n");
	return 0;
}
