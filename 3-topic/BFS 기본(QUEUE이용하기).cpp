#include <iostream>
#include <vector>
#include <queue>
using namespace std;

/*
   BFS 기본
*/
int chk[8];
vector<int> map[8];



int main() {
	int start,finish,cur;
	for(int i=0;i<6;i++){
		cin>>start>>finish;
		map[start].push_back(finish);
	}
	// BFS의 기본실행구조 전체적으로 다같이 1단계식 올라가면서 탐색한다.
	// 하나 CASE쭉 파고 다음 CASE넘어가는게아니라 전체적인 CASE를 같이 1단계씩 올리는 느낌이다.
	 
	queue<int> q;   //BFS에서는 QUEUE를 사용한다는점 
	q.push(1);      //시작점 삽입. 
	while(!q.empty()){  //이 큐가 빌때까지. 
		cur = q.front();
		q.pop();
		for(int i=0;i<map[cur].size();i++){
			q.push(map[cur][i]);
		}  //해당하는걸 큐에 넣고 시작함. 
		cout<<cur;  //여기에서 작업을 시작함. 
	}		
	 
}
