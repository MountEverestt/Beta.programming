#include<bits/stdc++.h>
#define st first
#define nd second
#define umap unorderd_map
#define vec vector
#define ull unsigned long long
#define ll long long
using namespace std;
pair<int,int>p[1005];
int main(){
    int n, k;
    cin >> n >> k;
    for(int i=0; i<n ;i++) cin >> p[i].st >> p[i].nd;
    for(int i=0; i<n ;i++){
        if(p[i].st>p[i].nd){
            p[i].st-=p[i].nd;
            p[i].nd=0;
        }
        else{
            p[i].nd-=p[i].st;
            p[i].st=0;
        }
        for(int j=i; j<=min(i+k,n-1); j++){
            int min1=min(p[i].st,p[j].nd), min2=min(p[i].nd,p[j].st);
            p[i].st-=min1;
            p[j].nd-=min1;
            p[i].nd-=min2;
            p[j].st-=min2;
        }
    }
    for(int i=0; i<n; i++){
        if(p[i].st>0 || p[i].nd>0){
            cout << "NO";
            return 0;
        }
    }
    cout << "YES";
}
/*
*/