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
		if(s.top()>9){  //16������ Ư���Ѱ���̹Ƿ� ���ڸ� ����ؾ��մϴ�. 
			cout<<(char)(s.top()+55); //������� �ذ��� �ǳ׿�. 
		}
		else{
			cout<<s.top();
		}
		s.pop();
	}
	
}


