#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
/*	int k, m;
	ll n , sum=0, w, s, i1, idx, ansa, ansb;
	cin >> k >> n;
	w = n-k;
	for(int i=0; i<=k; i++){
		idx=0; 
		ansa=0;
		ansb=0;
		m=i;
	//	cout << m << " ";
		i1 = i+w;
		ll a[32]={0};
		ll b[32]={0};
		while(m!=0){
			ll ansa=m%2;
			m/=2;
			a[idx]=ansa;
			idx++;
		}
		idx=0;
		while(i1!=0){
			ll ansb=i1%2;
			i1/=2;
			b[idx]=ansb;
			idx++;
		}
		s=0;
		for(ll j=0; j<32; j++){
			if(a[j]!=b[j]) s++;
		}
		sum+=s;
//		cout << s;
	}
	cout << sum;	
}*/
    int k;
    ll n;
    cin >> k >>n;
    ll ANS = n;
    for(int i=1; i<=k; i++){
        n/=2;
        ANS+=n;
    }
    cout << ANS;
    return 0;
}