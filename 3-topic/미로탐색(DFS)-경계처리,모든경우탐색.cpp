#include <iostream>
using namespace std;

int dx[4]={-1,0,1,0};
int dy[4]={0,1,0,-1};

int map[7][7];
int chk[7][7];
int count=0;

/*
 가장 빠른길을 탐색하는게 아닙니다. 갈수 있는 경우의 수를 다 해보는겁니다.  
 DFS로 한칸한칸 다음단계로 간다고생각합시다. 또 "양방향참조에 의해서 무한루프"에 빠지지 않도록
 체크배열을 이용해주는것도 핵심입니다. 
*/
void DFS(int x,int y){
	if(x==6 && y==6){
		count++;
		return;
	}
	else{
	
		for(int i=0;i<4;i++){
			if(x+dx[i]<0 || x+dx[i]>6 || y+dy[i] < 0 || y+dy[i] > 6 ) continue; //범위를 넘어가면 예외처리를 해야함. 
			if(map[x+dx[i]][y+dy[i]]==0 && chk[x+dx[i]][y+dy[i]]==0){
				chk[x+dx[i]][y+dy[i]]=1;
				DFS(x+dx[i],y+dy[i]);
				chk[x+dx[i]][y+dy[i]]=0;
			}
		}
	}
}

int main() {
	for(int i=0;i<7;i++){
		for(int j=0;j<7;j++){
			cin>>map[i][j];
		}
	}
	
	chk[0][0]=1; //첫번째는 방문을 함.
	DFS(0,0);
	cout<<count;
	 
}
