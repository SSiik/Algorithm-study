#include <iostream>
#include <vector>
#include <queue>
using namespace std;



int main() {
	int N,K,count=0,cur;
	cin>>N>>K;
	queue<int> q;
	for(int i=1;i<=N;i++){
		q.push(i);
	}
	while(!q.empty()){
		for(int i=1;i<K;i++){  //카운트가 되기전까지 다 뒤로 밀어놓고 
			q.push(q.front());
			q.pop();  //맨처음에 카운트전까지 없앱니다. 
		}
		q.pop();  //카운트가 되면 삭제를 해버리는겁니다.  
		if(Q.size()==1){
			printf("%d\n", Q.front());
			Q.pop();
		}
	}

}
