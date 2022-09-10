#include <iostream>
#include <vector>
#include <queue>
using namespace std;

/*
   BFS �⺻. 
*/

int S,E,cur;
int chk[10001]; //�湮�ߴ°� �ƴѰ� BFS�� �湮�Ǹ� �ּҶ� �湮�Ǹ� ���̻� �湮�� �ʿ�X.
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
