#include<bits/stdc++.h>
using namespace std;
int main()
{
	int x,y,z,s;
	cin >> x >> y >> z ;
	if(z-y>1 && y-x<=1){
		s = z-y-1;
	}
	else if(z-y<=1 && y-x >1){
		s = y-x-1;
	}
	else{
		if(z-y > y-x){
			s = z-y-1;
		}
		else if(y-x > z-y){
			s = y-x-1;
		}
		else{
			s = y-x-1;
		}
	}
	cout << s;
}
