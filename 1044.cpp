#include<bits/stdc++.h>
using namespace std;
int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int n, m;
	cin >> n >> m;
	int sum=0, sd[m+2]={}, sr[n+2]={}, snd[m+22]={}, snr[n+2]={};
	for(int i=1; i<=n; i++){
		for(int j=1; j<=m; j++){
			int num;
			cin >> num;
			sum+=num;
			sr[i]+=num;
			sd[j]+=num;
		}
	}
	for(int i=1; i<=n; i++){
		for(int j=1; j<=m; j++){
			int num;
			cin >> num;
			snr[i]+=num;
			snd[j]+=num;
		}
	}
	
	int Max=-1;
	for(int i=1; i<=n; i++) Max = max(Max,sum-sr[i]+snr[i-1]+snr[i+1]);
	for(int i=1; i<=m; i++) Max = max(Max,sum-sd[i]+snd[i-1]+snd[i+1]);
	cout << Max;
}
