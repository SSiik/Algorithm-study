#include <iostream>
#include <vector>
using namespace std;

vector<int> map[21];
int chk[21]; 
int N,M,count=0;




void DFS(int start){
	if(start==N){
		count++;
		return;
	}
	else{ //배열내 있는걸 다 돌아야하니 for문을 이용해보았다. 
	      //이게 잘 안된다면, 어디서 지금 루프를 돌고있는겁니다. 반복하고 있는거죠.
		  //이게 무한루프에 빠지면 안됩니다. 혹시 돌고있는건 아닌건지 확인해봅시다. 
		for(int i=0;i<map[start].size();i++){
			if(chk[map[start][i]]==0){
				chk[map[start][i]]=1;
				DFS(map[start][i]);	 
				//다음단계에서 이러면 이전 단계에서 갔었던곳을 못갈겁니다.
				//다음 경우의수에서는 갈수있도록 돌아오면 체크를 해제해줍니다.
				chk[map[start][i]]=0;  
				// DFS에서도 루프에 빠질수 있는지 아닌지를 체크합시다. 
			}
		}	  
	}
	
}


int main() {
	cin>>N>>M;
	int start,finish;
	for(int i=0;i<M;i++){
		cin>>start>>finish;
		map[start].push_back(finish);
	}
	chk[1]=1; //1번은 방문하고 시작합시다. 
	DFS(1);
	cout<<count;
	
	
}


