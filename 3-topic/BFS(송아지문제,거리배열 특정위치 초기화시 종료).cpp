#include <iostream>
#include <vector>
#include <queue>
using namespace std;

/*
   BFS 기본. 
*/

int S,E,cur;
int chk[10001]; //방문했는가 아닌가 BFS로 방문되면 최소라서 방문되면 더이상 방문할 필요X.
int dis[10001];  
int ch[3]={-1,1,5};
int main() {
	cin>>S>>E;
	queue<int> q;
	q.push(S);
	chk[S]=1;
	while(!q.empty()){
		cur = q.front();
		q.pop();
		for(int i=0;i<3;i++){
			if(chk[cur+ch[i]]==0){
				chk[cur+ch[i]]=1;
				q.push(cur+ch[i]);
				dis[cur+ch[i]]=dis[cur]+1;
				if(cur+ch[i]==E){
					cout<<dis[cur+ch[i]];
					return 0;
				}
			}
		}
	}
	 
}
