#include <iostream>


using namespace std;

/*
  재귀함수 분석. 
*/

void recursive(int N){
	if(N==0) return;
	recursive(N-1);
	cout<<N<<" ";  //여기가 실행되면서 올라오겠죠. 
}

int main() {
	int N;
	cin>>N;
	recursive(N);
	
}


