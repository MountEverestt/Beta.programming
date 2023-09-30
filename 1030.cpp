#include <bits/stdc++.h>
using namespace std;
typedef struct DATA STD;
struct DATA{
	double num;
	int let;
	bool operator < (const DATA & d2) const {
        return num > d2.num;
    }	
};
priority_queue<DATA>j;
int main(){
    int i, n, k, l, e, p;
    double sum;
    cin >> n;
//    STD data[n];
	for(i=0; i<n; i++){
   		cin >> l >> e;
		j.push({(double)l/e,e});		
    }
    cin >> k;
    
	while(k--){
		cin >> p;
		sum=0;
		int Min;
		while(p>0){
			STD top = j.top();//for loop top[i] but while loop top
			j.pop();
			Min = min(p,top.let);
			top.let-=Min;
			p-=Min;
			sum+=top.num*Min;
			if(top.let>0) j.push(top);
			
		}
		printf("%.3lf\n", sum);
	}
	
}
