#include<bits/stdc++.h>
using namespace std;
int main(){
	string a = "ABC";
    int Ad = 0;
    string b = "BABC";
    int Bru = 0;
    string c = "CCAABB";
    int Go = 0;
    int ans;
    int n;
    string str;
    cin >> n;
    cin >> str;
    for(int i = 0;i<n;i++){
        if(str[i] == a[i%3]) Ad++;
        if(str[i] == b[i%4]) Bru++;
        if(str[i] == c[i%6]) Go++;
     }
	ans = max(Ad,max(Bru,Go));
    cout << ans << endl;
    if(Ad == ans) cout << "Adrian" << endl;
    if(Bru == ans) cout << "Bruno" << endl;
    if(Go == ans) cout << "Goran" << endl;
}
