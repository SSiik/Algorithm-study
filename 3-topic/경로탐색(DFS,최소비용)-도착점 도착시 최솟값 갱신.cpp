#include <iostream>
#include <vector>
using namespace std;
int minn=2147000000;
int N;
/*
  모든경우를 다 돌아서 최소비용으로 갱신합니다.
  최단거리가 아니라 최소비용입니다. 몇번의 STEP으로 가느냐가 아니라 여긴 가중치입니다.
   BFS는 모두가 동일한 스텝(단계)를 취하기 때문에 누가 빨리가냐를 결정할수 있습니다.
   다만 여긴 가중치라는게 존재합니다. -> DFS 사용.
*/
int chk[21];
vector<pair<int,int>> map[21];
   

void DFS(int start,int sum){
	if(start==N){
		if(minn>sum){
			minn=sum;
		}
	}
	else{
		for(int i=0;i<map[start].size();i++){
			if(chk[map[start][i].first]==0){
				chk[map[start][i].first]=1;
				DFS(map[start][i].first,sum+map[start][i].second);
				chk[map[start][i].first]=0;
					
			}
		}
	}
}


int main() {
	int M,start,finish,value;
	cin>>N>>M;
	for(int i=0;i<M;i++){
		cin>>start>>finish>>value;
		map[start].push_back({finish,value});
	}
	chk[1]=1;
	DFS(1,0);
	cout<<minn;
	//DFS로 모든 경우를 돌아보면서 최솟값을 갱신하는 걸로 가야할것 같습니다. 
	 
}
