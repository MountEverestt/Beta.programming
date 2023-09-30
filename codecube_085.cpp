#include<bits/stdc++.h>
#define st first
#define nd second
#define ll long long
#define vec vector
using namespace std;
const int N=5e4+5, mod=1e9+7;
short int v[100005], mem[N][26];
string a;
int main(){      
    ios::sync_with_stdio(0),cin.tie(0);
    cin >> a;
    int n = a.size();
    for(int i=0; i<n; i++){
        v[i]=a[i]-'a';
    }
    int minn=1e9;
    //cout << minn << '\n';
    for(int k=1; k<=n/2; k++){
        if(!(n%k)){
            int nub=0;
            memset(mem,0,sizeof mem);
            for(int i=0; i<n; i++){
                mem[i%k][v[i]]++;
                //if(nub>=minn) break;
                //cout << k << " " << l << " " << r << " " << nub << '\n';    
            }   
            for(int i=0; i<k; i++){
                int maxx=0;
                for(int j=0; j<26; j++){
                    maxx=max(maxx,(int)mem[i][j]);
                }
                nub+=(n/k-maxx);
            } 
            //cout << k << " " << nub << '\n';
            minn=min(minn,nub);    
        }
    }
    cout << minn;
}
/*
*/