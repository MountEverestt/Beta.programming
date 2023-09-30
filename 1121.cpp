#include<bits/stdc++.h>
#define st first
#define ll long long
#define vec vector
#define nd second
using namespace std;
const int N = 2e5+2;
string a;
int t;
stack<char>s;
map<char,char>ma;
int main(){
    ios::sync_with_stdio(0),cin.tie(0);
    cin >> t;
    ma[']']='[';
    ma['}']='{';
    ma[')']='(';
    while(t--){
        cin >> a;
        for(auto k : a){
            if(s.empty()) s.push(k);
            else{
                if(ma[k]==s.top()) s.pop();
                else s.push(k);
            }
        }
        cout << (s.empty()?"yes":"no") << '\n';
        while(!s.empty()) s.pop();
    }
}