#include <iostream>
#include <vector>
using namespace std;

/*
  공주 구하기 문제. 
*/



int main() {
	int N,K,cnt=0,pos=0,bp=0;
	cin>>N>>K;
	vector<int> ch(N+1); //엥 또 백터로 하니까 되네... 
	// K를 외친사람이 제외되는 겁니다.


	while(1){
		pos++;
		if(pos>N) pos=1; //포인터 회전시키기.. 
		if(ch[pos]==0){  //0일때 살아있을때만 세는거. 
			cnt++;
			if(cnt==K){
				ch[pos]=1;
				cnt=0;
				bp++; 
			}
		}
		if(bp==N-1) break; // 다 연산을하고 탈출조건, 빠질때마다 지표를 두는건 맞음. 
	}
	
	for(int i=1;i<=N;i++){
		if(ch[i]==0){
			cout<<i<<'\n';
			break;
		}
	}
}


