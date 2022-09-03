#include <iostream>
using namespace std;

/*
  마라톤 문제. 
  역시나 '등수 문제'입니다.  
  등수 문제의 특징은 미리 초기화된 등수 배열을 이용한다는점입니다. 
  미리 등수를 어떻게 초기화할지는 문제의 패턴마다 다릅니다. 
  배열은 이제 전역변수에서 선언해줘야 쓰레기값으로 초기화가 안된다.
*/


int ch[10001];
int ch2[10001];
int main() {
	int N,tmp;
	cin>>N;
	for(int i=1;i<=N;i++){
		cin>>ch[i];  //1번인덱스부터 10000번 인덱스를 사용. 
		ch2[i]=i;  //등수배열 초기화.	
	}
	for(int i=1;i<=N;i++){
		for(int j=i-1;j>=1;j--){
		   	if(ch[i] > ch[j]){
		   		ch2[i]--;	
			}	
		}
	}
	
	for(int i=1;i<=N;i++){
		cout<<ch2[i]<<" ";
	}
	
}
