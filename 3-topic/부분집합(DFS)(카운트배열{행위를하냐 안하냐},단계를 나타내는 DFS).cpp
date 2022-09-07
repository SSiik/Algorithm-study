#include <iostream>
using namespace std;

/*
  재귀함수 분석. 
*/

int ch[11];
int N;
/*
   1 2 3
   1 2
   1 3
   1
   0 2 3
     2

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


