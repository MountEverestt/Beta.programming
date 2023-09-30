#include<bits/stdc++.h>
#define ll long long
#define st first
#define nd second
#define vec vector
#define umap unordered_map
#define endl '\n'
using namespace std;
int qs[1001];
int main() {
    int n, m, x;
    cin >> n;
    for(int i=1; i<=n; i++){
    	cin >> x;
    	qs[i]=qs[i-1]+x;
	}
	int ans=1e6+1, nd, rd, maxx, minn;
	for(int i=1; i<n; i++){
		for(int j=i+1; j<=n; j++){
			maxx=max(qs[i],max(qs[j]-qs[i],qs[n]-qs[j]));
			minn=min(qs[i],min(qs[j]-qs[i],qs[n]-qs[j]));
			if(ans>maxx-minn){
				ans=maxx-minn;
				nd=i+1;
				rd=j+1;
			}
		}
	}
	cout << nd << " " << rd;
}
