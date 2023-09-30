#include<bits/stdc++.h>
#define ll long long
using namespace std;
map<char,int>ma;
vector<int>v;	
int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int n;//{top,front,left,right,back,under}
	string num;
	cin >> n;
	for(int i=0; i<n; i++){
		cin >> num;
		ma['t']=1;
		ma['f']=2;
		ma['l']=3;
		ma['r']=4;	
		ma['b']=5;
		ma['u']=6;
		for(int i=0; i<num.size(); i++){
			if(num[i]=='F'){
				swap(ma['b'],ma['u']);
				swap(ma['u'],ma['f']);
				swap(ma['f'],ma['t']);
			}
			else if(num[i]=='B'){
				swap(ma['b'],ma['t']);
				swap(ma['t'],ma['f']);
				swap(ma['f'],ma['u']);
			}
			else if(num[i]=='D'){
				swap(ma['r'],ma['f']);
				swap(ma['f'],ma['l']);
				swap(ma['l'],ma['b']);
			}
			else if(num[i]=='C'){
				swap(ma['b'],ma['l']);
				swap(ma['l'],ma['f']);
				swap(ma['f'],ma['r']);
			}
			else if(num[i]=='L'){
				swap(ma['l'],ma['t']);
				swap(ma['t'],ma['r']);
				swap(ma['r'],ma['u']);
			}
			else if(num[i]=='R'){
				swap(ma['r'],ma['t']);
				swap(ma['t'],ma['l']);
				swap(ma['l'],ma['u']);
			}
		}
		v.push_back(ma['f']);
	}
	for(auto k : v){
		cout << k << " ";
	}	
		
}