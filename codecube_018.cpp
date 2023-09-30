#include <bits/stdc++.h>
using namespace std;
int main(){
    int n, M=-2e9, m=2e9, arr;
    cin >> n;
    for(int i = 0;i<n;i++){
        cin >> arr;
        if(m>arr) m=arr;
        if(M<arr) M=arr;
    }
    cout << M << endl  << m;
}