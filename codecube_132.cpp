#include<bits/stdc++.h>
#define st first
#define nd second
#define umap unorderd_map
#define vec vector
#define ull unsigned long long
using namespace std;
int main(){
    int n;
    ull sum=1, p=1;
    cin >> n;
    for(int i=1; i<=n; i++){
        sum=p*3;
        p+=sum;
    }
    cout << p;
}