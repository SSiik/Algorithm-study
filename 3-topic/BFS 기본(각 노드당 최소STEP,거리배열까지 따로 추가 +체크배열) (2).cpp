#include <iostream>
#include <vector>
#include <queue>
using namespace std;

/*
   BFS 기본. 
*/
int N,M;
vector<int> map[21];
int chk[21];
int dis[21];
int main() {
	int start,finish,cur,dist;
	queue<int> q;
	cin>>N>>M;
	for(int i=0;i<M;i++){
		cin>>start>>finish;
		map[start].push_back(finish);
	}
	q.push(1);
	chk[1]=1;
	while(!q.empty()){
		cur = q.front();
		q.pop();
		for(int i=0;i<map[cur].size();i++){
			if(chk[map[cur][i]]==0){
				chk[map[cur][i]]=1; //IF문내에서 방문을하고 큐에 넣고 난 이후에 거리배열을 초기화합니다. 작업순서 
				q.push(map[cur][i]);
				dis[map[cur][i]]=dis[cur]+1; //스텝을 이렇게 여기 if문 내부에서 초기화해줍니다. 
			}
		}
	}
	for(int i=2;i<=N;i++){
		cout<<i<<" : "<<dis[i]<<'\n';
	}
	 
}
