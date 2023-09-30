#include<bits/stdc++.h>
using namespace std;
char num[1005][1005];
int win[5][1005][1005];
int main(){
	int k, n, m;
	cin >> k;
	while(k--){
		memset(win,0,sizeof win);
		scanf("%d %d", &n, &m);
		
		for(int i=0; i<n; i++){
			scanf("%s", &num[i]);
		}
		int s;
		for(int i=0; i<n; i++){
			for(int j=0; j<m; j++){
				s = num[i][j]-'0';
				win[0][i][j] += s+win[0][i][j-1];
				win[0][i][j] *= s;
				
				win[1][i][j] += s+win[1][i-1][j];
				win[1][i][j] *= s;
			}
		}
		
		for(int i=n-1; i>=0; i--){
			for(int j=m-1; j>=0; j--){
				s = num[i][j]-'0';
				win[2][i][j] += s+win[2][i][j+1];
				win[2][i][j] *= s;
				
				win[3][i][j] += s+win[3][i+1][j];
				win[3][i][j] *= s;
			}
		}
		
		int ans = 0;
        for(int i = 0;i<n;i++){
            for(int j = 0;j<m;j++){
                ans = max(ans, win[0][i][j] + win[1][i][j] - 1);
                ans = max(ans, win[0][i][j] + win[3][i][j] - 1);
                ans = max(ans, win[1][i][j] + win[2][i][j] - 1);
                ans = max(ans, win[2][i][j] + win[3][i][j] - 1);
            }
        }
        printf("%d\n",ans);
	}
}
