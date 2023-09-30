#include<bits/stdc++.h>
#define st first
#define nd second
#define ll long long
#define vec vector
#define umap unordered_map
using namespace std;
set<int>s;
int main(){
    int n, mem;
    cin >> n;
    for(int i=1; i*i<=n; i++){
        if(n%i==0){
            s.insert(i);
            s.insert(n/i);
        }
    }
    for(auto k : s) cout << k << " ";
}