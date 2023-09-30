#include<bits/stdc++.h>
using namespace std;
int main(){
	int n1, n2, k=0, i, j, m;;
	cin >> n1 >> n2;
	if(n1==2 && n2==1) cout << "2";
	int num[n1] = {0};
	for(i=2; i<=n1; i++){
		m = sqrt(i);
		if(i%2==0 && i!=2){
			num[i]++;
		}
		else if(i%2==1){
			for(j=3; j<m; j+=2){
				if(i%j==0){
					num[i]++;
				}
			}
		}
	}
	for(i=2; i<=n1;i++){
		if(num[i]==0){
			num[i]=i;
		}
		else if(num[i]!=0){
			num[i]=0;
		}
	}
	for(i=2; i<=n1;i++){
		if(num[i]==i){
			for(j=i; j<=n1; j+=i){
			if(num[j]!=1){
				num[j]=1;
				k++;
				if(k==n2) cout << j;
			}
			}
		}
	}
	return 0;	
}