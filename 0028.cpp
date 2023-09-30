#include<bits/stdc++.h>
using namespace std;
struct DATA{
	string c;
	int total, loss, win;
	bool operator < (const DATA & d2) const{
		if(total==d2.total){
			if(win-loss==d2.win-d2.loss) return win > d2.win;
			return win-loss > d2.win-d2.loss;
		}
		return total>d2.total;
	}
};
DATA data[5];
int arr[6][6];
int main(){
	for(int i=1; i<=4; i++) cin >> data[i].c;
	
	for(int i=1; i<=4; i++){
		for(int j=1; j<=4; j++){
			cin >> arr[i][j];
		}
	}
	
	for(int i=1; i<=4; i++){
		for(int j=i+1; j<=4; j++){
			data[i].win+=arr[i][j];
			data[j].loss+=arr[i][j];
			
			data[j].win+=arr[j][i];
			data[i].loss+=arr[j][i];
			
			if(arr[i][j]>arr[j][i]) data[i].total+=3;
			else if(arr[i][j]<arr[j][i]) data[j].total+=3;
			else{
				data[i].total++;
				data[j].total++;
			}
		}
	}
	
	sort(&data[1],&data[4]+1);
	for(int i=1; i<=4; i++){
		cout << data[i].c << " " << data[i].total << endl;
	}
}
