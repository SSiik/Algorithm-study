#include <iostream>
using namespace std;

/*
	선택정렬: 가장작은 숫자부터 앞에서 채워넣습니다. 
*/

int ch[100];
int main() {
	 int N,idx,tmp;
	 cin>>N;
	 for(int i=0;i<N;i++){
	 	cin>>ch[i];
	 }
	 for(int i=0;i<N-1;i++){ //마지막은 정렬되있을거니 안해도된다. 
	 	idx=i;
	 	for(int j=i+1;j<N;j++){
	 	  	if(ch[idx]>ch[j]) idx=j; 
			//idx에 제일작은값의 인덱스가 담김. 
			//제일작은값이 제일작은지 뒤에것들과 계속 확인. 
		}
		tmp=ch[i];
		ch[i]=ch[idx];
		ch[idx]=tmp;
	 }
	 for(int i=0;i<N;i++){
	 	cout<<ch[i]<<" ";
	 } 
}
