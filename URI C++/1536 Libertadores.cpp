#include <bits/stdc++.h>
using namespace std;
int main(){
	int time1, time2, time3, time4, x, y, n;
	scanf("%d", &n);
	while(n>0){
		time1 = 0; time2 = 0; time3 = 0; time4 = 0;
		scanf("%d x %d", &time1, &time2);
		scanf("%d x %d", &time3, &time4);
		if(time1>time2 && time3<time4){
			cout << "Time 1" << endl;
		}else if(time1 < time2 && time3>time4){
			cout << "Time 2" << endl;
		}else if((time1+time4) > (time2+time3)){
			cout << "Time 1" << endl;
		}else if((time1+time4) < (time2+time3)){
			cout << "Time 2" << endl;
		}else if(time2>time4){
			cout << "Time 2" << endl;
		}else if(time4>time2){
			cout << "Time 1" << endl;
		}else{
			cout << "Penaltis" << endl;
		}
		n--;
	}
	return 0;
}
