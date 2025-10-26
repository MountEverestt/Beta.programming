#include <bits/stdc++.h>
using namespace std;
int main(){
    int score = 0, temp = 0;
    for (int i = 1; i <= 3; i++){
        cin >> temp
        score += temp;
    }
    if(score< 101 && score >= 80) cout << "A";
    else if (score< 80 && score >= 75) cout << "B+";
    else if (score< 75 && score >= 70) cout << "B";
    else if (score< 70 && score >= 65) cout << "C+";
    else if (score< 65 && score >= 60) cout << "C";
    else if (score< 60 && score >= 55) cout << "D+";
    else if (score< 55 && score >= 50) cout << "D";
    else if (score< 50 && score >= 0) cout << "F";

}
