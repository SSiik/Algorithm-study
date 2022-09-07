#include <iostream>


using namespace std;

/*
  재귀함수 분석. 
*/

void recursive(int N){
	if(N<=0) return;
	recursive(N/2);
	cout<<N%2;  
}

int main() {
	int N;
	cin>>N;
	recursive(N);
	
}


