#include <iostream>
using namespace std;

/*
  


   밑에 처럼 DFS()에 인자로 계속 변하는 숫자가 들어오는게 아니라,
   DFS마다 들어오는 숫자는 계속 규칙적이고, 아규먼트가 지금 몇단계인지를 나타내는지 표시하고,
   전역변수 카운트배열의 정보로 진행할때가 있습니다. 
   마치 회원가입에서 누군가는 체크를 하고 다음단계로 넘어간거고, 어떤 사람은 체크를 안하고 다음단계로 넘어간겁니다.
   원소가 참여를 하냐 안하냐는 체크배열을 쓸수도 있는거고, 더할거면 더하고 빼버릴거면 빼고 이런식으로 2분적으로 선택하는겁니다.

   이진트리 처럼 계속 가변적인 숫자가 dfs의 아규먼트로 들어올때가 있습니다.
   이걸 잘 구분해서 진행을 합시다.

   1. 단계를 나타내는 DFS  (외부정보 이용) , 일반적으로 이분적임 하냐 안하냐. 그리고 직선적.
   2. 가변적인 Argument의 DFS 

   => 쉽지않다.
*/
void DFS(int L){
	if(L==N+1){ //n+1 까지 갓으면 n개를 선택했을것. 
		for(int i=1;i<=N;i++){
			if(ch[i]==1) cout<<i<<" ";
		}
		cout<<'\n';
		//더이상 들어가지 않고 나오겠죠. 
	}
	else{
		ch[L]=1;  //1이면 부분집합으로써 참여하는 지표(카운트 배열)
		DFS(L+1);
		ch[L]=0; //돌아오면서 하나를 빼버리고 다시 다음단계로 들어갑니다.
		DFS(L+1);  // 이렇게 Level 지표를 통해서 할거냐 마냐 개념을 포함시킬수 있습니다. 
		
		//DFS함수 인자로는 단계만 올려주고, 다른 카운트배열을 이용해서 다르게 구현. 
	}
}

int main() {
	cin>>N;
	DFS(1);
	
}


