#include <iostream>
#include <stack>
#include <string>
using namespace std;




/*

	괄호가 입력되면 올바른 괄호이면 “YES", 올바르지 않으면 ”NO"를 출력합니다.
	(())() 이것은 괄호의 쌍이 올바르게 위치하는 거지만, (()()))은 올바른 괄호가 아니다.
	
	sol) 스택에 쌓아가는 느낌으로 생각합시다. ')'가 들어왓을때가 핵심입니다.
	     내부 괄호는 계속해서 소거 되는 입장입니다. 만들어지면 내부 작은괄호들은 바로바로 삭제됩니다. 
*/
int main() {
	string tmp;
	stack<char> s;
	cin>>tmp;
	for(int i=0;i<tmp.size();i++){
		if(tmp[i]=='('){
			s.push(tmp[i]);
		}
		else{
			if(s.empty() || s.top() != '('){
				cout<<"NO"; return 0;
			}
			s.pop(); // (면 pop을 진행 , 내부 쌍을 없앱니다. 
		}
	}
	if(s.empty()) cout<<"YES";
	else cout<<"NO";
	return 0;
}

