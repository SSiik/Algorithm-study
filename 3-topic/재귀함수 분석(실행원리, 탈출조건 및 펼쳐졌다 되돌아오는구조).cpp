#include <iostream>


using namespace std;

/*
  ����Լ� �м�. 
*/

void recursive(int N){
	if(N==0) return;
	recursive(N-1);
	cout<<N<<" ";  //���Ⱑ ����Ǹ鼭 �ö������. 
}

int main() {
	int N;
	cin>>N;
	recursive(N);
	
}


