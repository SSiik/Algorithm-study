#include <iostream>
using namespace std;


int N,sum=0,sum2=0;
int ch[10];
int ch2[10]; 
// DFS가 외부정보를 참고하는 경우가 많음. 
// 단계를 올라가거나, 탐색하는 경우로 생각하자. 

void DFS(int L){
	if(L==N){
		return;
	}
	if( sum2 == sum/2 ){
		cout<<"YES";
		exit(0);
	}
	sum2 += ch[L]; // "참여를 하나 안하나"를 여기선 산수로 표현합니다. 
	DFS(L+1);
	sum2 = sum2-ch[L]; //빼고 다음단계(다음인덱스)로 진행.
	DFS(L+1); 
	
	
}


int main() {
	cin>>N;
	for(int i=0;i<N;i++){
		cin>>ch[i];
		sum += ch[i];
	}
	if(sum%2==1) {  
	    // 홀수를 나누면 소숫점으로 나와버림.. 자연수의 합으로는 소숫점이 나올수없음.
		// 이런 예외사항을 처리하는게 너무 어려운것 같다. 
		cout<<"NO"; 
		return 0;	
	}
	DFS(0);
	cout<<"NO";
}


