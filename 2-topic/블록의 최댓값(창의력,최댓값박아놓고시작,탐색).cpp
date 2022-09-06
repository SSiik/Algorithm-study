#include <iostream>
#include <cmath>
#include <vector>
using namespace std;

/*
  블록의 최댓값 문제. 
*/

int ch[10][10];
int front[10];
int side[10];
int main() {
	int N,sum=0;
	cin>>N;
	for(int i=0;i<N;i++){
		cin>>front[i];
		for(int j=0;j<N;j++){
			ch[j][i]=front[i];
		}  //미리 정면정보로 최대로 박아버리고, 
		   //사이드정보에서 몇개씩 빼가는겁니다. (탐색) 
	}
	
	for(int i=0;i<N;i++){
		cin>>side[i];
	}
	
	for(int i=N-1;i>=0;i--){  // N-1 + 2-n
		int maxx= side[i];
		for(int j=0;j<N;j++){  
			if(ch[N-1-i][j] > maxx){
				ch[N-1-i][j]=maxx;
			}
			sum+=ch[N-1-i][j];
		}
	} 
	
	cout<<sum<<'\n';
	
}


