#include <bits/stdc++.h>
using namespace std;
int main(){
    int n, p=1, w, m=0, num, x=0, y=0;
    cin >> n;
    string let;
	while(n--){
		cin >> let >> num;
		switch(let[0]){
            case 'F' : break;
            case 'R' : p+=1; break;
            case 'L' : p-=1; break;
            case 'B' : p+=2; break;
        }
        p=(p+4)%4;
        switch(p){
            case 0 : y+=num; break;
            case 1 : x+=num; break;
            case 2 : y-=num; break;
            case 3 : x-=num; break;
        }
		if(abs(x)>=50000 || abs(y)>=50000 ) m=1;
	}
	if(m){
		cout << "DEAD";
		return 0;
	}
	else{
		w = p%4;
		cout << x << " " << y << endl;
		if(w==0){
			cout << "N";
		}	
		else if(w==1){
			cout << "E";
		}
		else if(w==2){
			cout << "S";
		}
		else if(w==3){
			cout << "W";
		}
	}
}
