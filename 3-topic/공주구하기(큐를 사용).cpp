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
		for(int i=1;i<K;i++){  //ī��Ʈ�� �Ǳ������� �� �ڷ� �о���� 
			q.push(q.front());
			q.pop();  //��ó���� ī��Ʈ������ ���۴ϴ�. 
		}
		q.pop();  //ī��Ʈ�� �Ǹ� ������ �ع����°̴ϴ�.  
		if(Q.size()==1){
			printf("%d\n", Q.front());
			Q.pop();
		}
	}

}
