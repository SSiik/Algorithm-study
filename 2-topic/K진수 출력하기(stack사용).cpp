#include <iostream>
#include <stack>
using namespace std;

/*
  
*/


int main() {
	stack<int> s;
	int N,k;
	cin>>N>>k;
	
	while(N>=1){
		s.push(N%k);
		N = N/k;
	}
	
	
	while(!s.empty()){
		if(s.top()>9){  //16진수가 특수한경우이므로 문자를 출력해야합니다. 
			cout<<(char)(s.top()+55); //감싸줘야 해결이 되네요. 
		}
		else{
			cout<<s.top();
		}
		s.pop();
	}
	
}


