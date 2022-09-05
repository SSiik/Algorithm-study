#include <iostream>

using namespace std;

/*
   LRU 정책 (카카오 캐시문제 변형) 
   어떻게보면 단순합니다. 있나없나 배열에서 찾아보고.
   다 뒤로 한칸식 미루어둔다음에 맨앞에 인덱스 0에 들어온 데이터를 넣습니다.
   제거하는 개념도 거기를 기준으로 앞에걸 땡겨오면되겠죠. (위치 옮기기) 
*/


int ch[10];
int main() {
	int S,N,tmp;
	cin>>S>>N;
	for(int i=0;i<N;i++){
		cin>>tmp;
		int loc;
		bool flag = false;
		for(int i=0;i<S;i++){
			if(ch[i]==tmp){
				flag=true;
				loc=i;
				break;
			}
		}
		if(flag){
			for(int i=loc;i>0;i--){
				ch[i]=ch[i-1];
			}
			ch[0]=tmp;
		}
		else{
			for(int i=S-1;i>0;i--){
				ch[i]=ch[i-1];
			}
			ch[0]=tmp;
		}
	}
	
	for(int i=0;i<S;i++){
		cout<<ch[i]<<" ";	
	}
	 
}
