#include <iostream>
using namespace std;

//단계적 dfs -> 할거냐 말거냐. 다음단계로 어떻게 갈래?
//해서 다음단계로 가거나 안하고 다음단계로 가거나. 어디까지 하는지는 정해져있음.

 
 

int ch[10],count=0; 
int N,M;

// DFS에서 이제 파라미터로 레벨뿐만 아니라
//  다른것도 넘기는걸 생각해야합니다. 산술같은경우 넘기는게 좋은거같습니다. 

void DFS(int L,int sum){
	if(L==N){
		if(sum==M){
			count++;
		}
	}
	else{
		DFS(L+1,sum+ch[L]); //갈래가 많을경우 파라미터단에서 유지. 
		DFS(L+1,sum);
		DFS(L+1,sum-ch[L]);  
		//단순하게 외부정보(전역변수)만 가지고 갈수는 있는데,
		// 이렇게 파라미터로 정보를 넘기는게...
		// 갈래가 많아지는 경우에는 무조건 DFS의 파라미터를 이용하는게 좋다. 
		
		//필기합시다.
		//갈래가 많아지는 경우에는 파라미터로 변수넘기기가 좋다. 
	}                      
	
}
int main() {
	cin>>N>>M;
	for(int i=0;i<N;i++){
		cin>>ch[i];
	}
	DFS(0,0); //0단계부터 시작(0인덱스부터 시작)
	if(count==0){
		cout<<-1;	
	} else{
		cout<<count;
	} 
}


