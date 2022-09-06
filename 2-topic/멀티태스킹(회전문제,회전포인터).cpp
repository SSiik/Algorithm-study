#include <iostream>
#include <vector>
using namespace std;

/*
  멀티태스킹 -> 회전문제 (포인터 로테이션 및 살아있는 친구만작업)
                         (살아있는 친구에서 작업완료됫을시? -> 처리)
						 (예외처리 은근 어렵습니다.) 
*/



int main() {
	int N,K,pos=1,cnt=0,sum=0;
	vector<int> v(N+1);
	cin>>N;
	for(int i=1;i<=N;i++){
		cin>>v[i];
		sum += v[i];
	}
	cin>>K;
	if(K>=sum){
		cout<<"-1\n"; return 0;  
	} //합친것보다 K가 높으면 이미 다처리햇을것. 최적화할수 있는 방법? 
	
	while(1){
		//회전문제. 
		if(pos>N) pos=1;  //포인터 로테이션 -> 중요개념. 
		if(v[pos] > 0){ //살아있는것만 카운터로 친다. 
			if(cnt==K){
				cout<<pos;
				break;
			}
			v[pos]--;
			cnt++; //살아있는걸 작업했다는 카운트. 
		}
		pos++;
	}
}


