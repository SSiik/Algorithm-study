#include <iostream>
#include <stack>
#include <string>
using namespace std;

/*
  올바른 괄호를 stack으로 풀어봅시다. 
*/


int main() {
	string a;
	cin>>a;
	
	stack<char> s;
	for(int i=0;i<a.size();i++){
		if(a[i]==')'){
			if(s.empty()){  //창의적으로 생각하자. )가 들어오는데 비어있다면? 잘못된것.
			                // 이렇게 최적화 하려는 노력도 필요합니다...  => 이런 case. 
				cout<<"NO"; return 0;
			}
			s.pop(); // 이제 스택내에는 (만 쌓여져잇을뿐. 
		}
		else{
			s.push('(');
		}
	}
	
	if(s.empty()) cout<<"YES";
	else cout<<"NO";
}


