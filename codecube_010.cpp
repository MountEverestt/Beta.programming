#include<bits/stdc++.h>
using namespace std;
int n;
int x[500001]={0};
int main(){
    int b,m=0;
    cin >> n >> b;
    for(int i=2;i<=n;i++){
        if(x[i]==0){
            m++;
            for(int j=i;j<=n;j+=i){
                x[j]=1;
            }
        }
    }
    if(m>=b)
        cout << m-b;
    else
        cout << 0;
}