#include <iostream>


using namespace std;

/*
  ����Լ� �м�. 
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


