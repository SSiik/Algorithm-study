#include <iostream>
#include <stack>
#include <string>
using namespace std;

/*
  �ùٸ� ��ȣ�� stack���� Ǯ��ô�. 
*/


int main() {
	string a;
	cin>>a;
	
	stack<char> s;
	for(int i=0;i<a.size();i++){
		if(a[i]==')'){
			if(s.empty()){  //â�������� ��������. )�� �����µ� ����ִٸ�? �߸��Ȱ�.
			                // �̷��� ����ȭ �Ϸ��� ��µ� �ʿ��մϴ�...  => �̷� case. 
				cout<<"NO"; return 0;
			}
			s.pop(); // ���� ���ó����� (�� �׿���������. 
		}
		else{
			s.push('(');
		}
	}
	
	if(s.empty()) cout<<"YES";
	else cout<<"NO";
}


