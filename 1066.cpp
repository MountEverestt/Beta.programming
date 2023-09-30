#include<bits/stdc++.h>
using namespace std;
vector<int>v;
int main(){
	int n, s=0, in, Max, num;
	cin >> n;
	for(int i=1; i<=n; i++){
		cin >> num;
		v.push_back(num);
	}
	int m=n;
	while(m>1){
		m-=2;
		in=Max=-1;
		for(int i=0; i<v.size()-1; i++){
			if(abs(v[i]-v[i+1])>Max){
				Max=abs(v[i]-v[i+1]);
				in=i;
			}
		}
		s+=Max;
		v.erase(v.begin()+in,v.begin()+in+2);
	}
	cout << s;
}
