#include<bits/stdc++.h>
using namespace std;
int main(){
    int x[100],y[100],i,j,sum,k,n;
    float area,max=0;
    cin >> n;
    for(i=0;i<n;i++)
    {
       cin >> x[i] >> y[i];
    }
    for(i=0;i<n-2;i++)
    {
        for(j=i+1;j<n-1;j++)
        {
            for(k=j+1;k<n;k++)
            {
                sum=x[i]*y[j]+x[j]*y[k]+x[k]*y[i]-y[i]*x[j]-y[j]*x[k]-y[k]*x[i];
                if(sum<0) sum=(-1)*sum;
                if(sum>max) max=sum;
            }
        }
    }
    area = max/2;
    printf("%.3f",area);
    return 0;
}
