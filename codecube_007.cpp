#include<bits/stdc++.h>
using namespace std;
string arr ,ans;
vector<int>v;
int main(){
	cin >> arr >> ans;
	if(arr.size()!=ans.size()){
		cout << "R.I.P.";
		return 0;
	}
	for(int i=0; i<arr.size(); i++){
		if(arr[i]>='a' && arr[i]<='z') arr[i]=arr[i]-'a'+'A';
		if(ans[i]>='a' && ans[i]<='z') ans[i]=ans[i]-'a'+'A';
	//	cout << arr[i] << "  " << ans[i] << endl;
	}
//	long long sum=0;
	for(int i=0; i<arr.size(); i++){
		if(arr[i]>=ans[i]){
			if(arr[i]-ans[i]>=10 || arr[i]-ans[i]<0){
				cout << "R.I.P.";
				return 0;
			}
			v.push_back(arr[i]-ans[i]);
		}
		else{
			if((arr[i]+'Z'-'A')-ans[i]+1>=10 || (arr[i]+'Z'-'A')-ans[i]+1<0){
				cout << "R.I.P.";
				return 0;
			}
			v.push_back((arr[i]+'Z'-'A')-ans[i]+1);
		}
	}
	
	for(auto p : v) cout << p ;
}