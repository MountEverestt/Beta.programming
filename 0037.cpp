#include<bits/stdc++.h>
using namespace std;
int main(){
	int n, m, l, k, sum=0;
	float ans, c;
	cin >> n >> m;
	int num[n][m];
	cin >> l >> k;
	cin >> c;
	for(int i=0; i<n; i++){
		for(int j=0; j<m; j++){
			cin >> num[i][j];
			sum+=num[i][j];
		}
	}
	ans = (sum+(l*c*k));
//	cout << ans << " " << c << endl;
	printf("%d", int(ceil(ans/c)));
}
