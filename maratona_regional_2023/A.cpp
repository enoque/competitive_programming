#include <bits/stdc++.h>
using namespace std;

int main (){
	int n, h, r, ans = 0;
	scanf ("%d %d", &n, &h);
	while (n--){
		scanf ("%d", &r);
		if (r <= h)
			ans++;
	}
	printf("%d\n", ans);
	return 0;
	
}
