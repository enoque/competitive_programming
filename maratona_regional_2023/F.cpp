#include <bits/stdc++.h>
using namespace std;


int main (){
	int d, c, r, t, ans = 0;
	vector <int> Vc;
	scanf ("%d %d %d", &d, &c, &r);
	
	for (int i = 0; i < c; i++){
		scanf ("%d", &t);
		Vc.push_back(t);
	}
	for (int i = 0; i < r; i++){
		scanf ("%d", &t);
		d += t;
		ans++;
	}
	
	int i = 0;
	while (i < (int) Vc.size()){
		d -= Vc[i++];
		if (d < 0) break;
		ans++;
	}
	printf ("%d\n", ans);
	
	return 0;
}
