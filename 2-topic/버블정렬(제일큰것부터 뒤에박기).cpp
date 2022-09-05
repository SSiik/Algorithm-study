#include <iostream>
using namespace std;

/*
	버블 정렬 : 바로바로 바꾸면서 거품을내면서 올라갑니다. (큰게 뒤로갑니다)
	for(마지막 인덱스전까지 루프)
	  for(갈수록 맨뒤쪽은 정렬이되니까 유동적인 루프)
	=> 이렇게 2중 루프로 여긴 맨뒤부터 박아놓는 정렬방법입니다.
	
	선택정렬의 경우 제일작은것부터 맨앞에 넣어놓는구조.
	여긴 앞쪽이 계속 앞으로 전진하겠죠 루프에서. 
*/

int ch[100];
int main() {
	 int N,tmp;
	 cin>>N;
	 for(int i=0;i<N;i++){
	 	cin>>ch[i];
	 }
	 for(int i=0;i<N-1;i++){
	 	for(int j=0;j<N-i-1;j++){ //뒤쪽이 정렬되어있기때문에, 마지막이 유동적으로 바뀜,
		                          // 선택정렬은, 앞쪽이 유동적으로 바뀌었음. 
	 		if(ch[j]>ch[j+1]){
	 			tmp=ch[j];
	 			ch[j]=ch[j+1];
	 			ch[j+1]=tmp;  //큰게 뒤로가는 개념. 
			}
		}
	}
	
	for(int i=0;i<N;i++){
		cout<<ch[i]<<" ";
	}
}
