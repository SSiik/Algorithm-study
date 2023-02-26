#include <iostream>
#include <stack>
#include <string>
using namespace std;




/*

	��ȣ�� �ԷµǸ� �ùٸ� ��ȣ�̸� ��YES", �ùٸ��� ������ ��NO"�� ����մϴ�.
	(())() �̰��� ��ȣ�� ���� �ùٸ��� ��ġ�ϴ� ������, (()()))�� �ùٸ� ��ȣ�� �ƴϴ�.
	
	sol) ���ÿ� �׾ư��� �������� �����սô�. ')'�� ���������� �ٽ��Դϴ�.
	     ���� ��ȣ�� ����ؼ� �Ұ� �Ǵ� �����Դϴ�. ��������� ���� ������ȣ���� �ٷιٷ� �����˴ϴ�. 
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
			s.pop(); // (�� pop�� ���� , ���� ���� ���۴ϴ�. 
		}
	}
	if(s.empty()) cout<<"YES";
	else cout<<"NO";
	return 0;
}

