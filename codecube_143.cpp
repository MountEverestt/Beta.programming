
int main(){
	int n, m, u, v;
	cin >> n >> m;
	for(int i=1; i<n ;i++){
		cin >> u >> v ;
		a[u]++;
		a[v]++;
	}
	vec<int>ans;
	for(int i=1; i<=n; i++){
		if(a[i]==1) ans.push_back(i);
	}
	cout << (ans.size()+1)/2 << '\n';
	if(m==2) for(int i=0; i<ans.size() && i+1<ans.size(); i++) cout << ans[i] << " " << ans[i+1] << '\n';
	return 0;	
}