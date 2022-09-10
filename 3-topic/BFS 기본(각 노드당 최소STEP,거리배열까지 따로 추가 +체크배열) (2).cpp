#include <iostream>
#include <vector>
#include <queue>
using namespace std;

/*
   BFS �⺻. 
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
				chk[map[cur][i]]=1; //IF�������� �湮���ϰ� ť�� �ְ� �� ���Ŀ� �Ÿ��迭�� �ʱ�ȭ�մϴ�. �۾����� 
				q.push(map[cur][i]);
				dis[map[cur][i]]=dis[cur]+1; //������ �̷��� ���� if�� ���ο��� �ʱ�ȭ���ݴϴ�. 
			}
		}
	}
	for(int i=2;i<=N;i++){
		cout<<i<<" : "<<dis[i]<<'\n';
	}
	 
}
