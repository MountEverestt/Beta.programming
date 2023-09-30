#include<bits/stdc++.h>
#define ll long long
using namespace std;
ll dp[100002];
int main(){
	ll sum=1, n, k;
	cin >> n >> k;
	dp[0]=1;
	for(int i=1; i<=n; i++){
		if(i>k){
			sum-=dp[i-(k+1)];
		}
		
		dp[i]=(sum%2009+2009)%2009;
		sum+=dp[i]%2009;
	//	cout << sum << " ";
	}
	cout << dp[n]%2009;
}
