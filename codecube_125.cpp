#include<bits/stdc++.h>
#define st first
#define nd second
#define ll long long
#define vec vector
#define umap unordered_map
using namespace std;
string a;
bitset<100005>mem;
umap<string,bool>ma;
umap<int,int>maa;
int main(){
    int n;
    ma["SHIFT"]=true;
    ma["SPACEBAR"]=true;
    maa['A']=true;
    maa['E']=true;
    maa['Q']=true;
    maa['D']=true;
    maa['S']=true;
    maa['W']=true;
    maa['V']=true;
    cin >> n >> a;
    int s=0;
    for(int i=0 ;i<n-7; i++){
        if(ma[a.substr(i,8)]){
            for(int j=i; j<i+8; j++) mem[j]=true;
            s++;
            i+=7;
        }
    }
    for(int i=0 ;i<n-4; i++){
        bool check=true;
        for(int j=i; j<i+5; j++){
            if(mem[j]){
                check=false;
                break;
            }
        }
        if(!check) continue;
        if(ma[a.substr(i,5)]){
            for(int j=i; j<i+5; j++) mem[j]=true;
            s++;
            i+=4;
        }
    }
    for(int i=0; i<n; i++){
        if(mem[i]) continue;
        if(maa[a[i]]) s++;
    }
    cout << s;
}
