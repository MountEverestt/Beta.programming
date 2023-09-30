#include<bits/stdc++.h>
#define st first
#define nd second
#define ll long long
#define vec vector
using namespace std;
const int N=3e5+3;
int t, x;
char c;
priority_queue<int>pq;
int main(){
    ios::sync_with_stdio(0),cin.tie(0);
    cin >> t;
    while(t--){
        cin >> c;
        if(c=='P'){
            cin >> x;
            pq.push(x);
        }
        else{
            if(pq.empty()) cout << -1;
            else{
                cout << pq.top();
                pq.pop();
            }
            cout << '\n';
        }
    }
}