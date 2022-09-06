#include <iostream>
#include <vector>
using namespace std;

/*
  봉우리 문제. 
*/

//오랜만에 만드는 4방향 배열;
int dx[4]={-1,0,1,0};
int dy[4]={0,1,0,-1};   //위 -> 오른쪽 -> 아래 -> 왼쪽순으로 탐색.
// 현재를 기준으로 위는 하나의 이전행이다 열은 그대로
// 오른쪽은 행은 똑같고 열이 하나 올라간다.
//아래는 이제 행이 하나 올라가고 열은 그대로,
// 행은 그대로 열이 하나 이전꺼다.
// dx가 행 dy가 열이라고 생각하면 됩니다. 
 
int v[51][51];
int v2[51][51];  
int main() {
	//가끔 배열로하면되고, 벡터로하면 되고 이럴때가 있다.. 음.
	//비 상식적으로 범위가 크지않은이상 배열로 진행합시다. 
	int N,flag,cnt=0;
	cin>>N;
	for(int i=1;i<=N;i++){
		for(int j=1;j<=N;j++){
			cin>>v[i][j];
		}
	}
	
	for(int i=1;i<=N;i++){
		for(int j=1;j<=N;j++){
			flag=0;
			if(v2[i][j]==1) continue;
			for(int k=0;k<4;k++){
				if(v[i][j] <= v[dx[k]+i][dy[k]+j]){
					flag=1;
					break;  //4방향탐색인데, 하나라도 조건안맞으면 뭐 더 탐색할 필요없고 바로 나와야지. 
				}
				else{
					v2[dx[k]+i][dy[k]+j]=1; //봉우리가 될수없음. 체크를한다. 
				}
			}
			if(flag==0){
				cnt++;
			} 
		}
	}
	
	cout<<cnt;  //4방향 배열잡고, 다 일반적으로 탐색하는 나이브한 방법. 
	
		
}


