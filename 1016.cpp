#include<bits/stdc++.h>
using namespace std;
double number(string s) {
    int i = 0;
    double a = 0;
    for(i=0; i<s.size();i++) {
        if(s[i]>='0' && s[i]<='9'){
        	a *= 10;
    	    a += s[i]-'0';
		}
		else break;
    }
    if(i==s.size()-2)
        a /= sqrt(2);
    return a;
}
main() {
    double x, y;
    while(true) {
        string s;
        cin >> s;
        if(s[0]=='*') break;
        // 1/sqrt(2)
        double a = number(s);
        int ss = s.size()-1;
        if(s[ss]=='N')
            y += a;
        else if(s[ss]=='S')
            y -= a;
        else {
            if(s[ss]=='E')
                x += a;
            else if(s[ss]=='W')
                x -= a;
            ss--;
            if(s[ss]=='N')
                y += a;
            else if(s[ss]=='S')
                y -= a;
        }
    }
    printf("%.3f %.3f\n%.3f", x, y, sqrt((x*x)+(y*y)));
}
