#include <iostream>
#include <stack>
#include <string>

using namespace std;

/*
  ���� ����. 
*/


int main() {
	int N,tmp;
	string str = "";
	cin>>N;
	
	int count=1; 
	stack<int> s;
	
	for(int i=0;i<N;i++){
		cin>>tmp;
		s.push(tmp);
		str += "P";  //�⺻������ push�� ����. 
		if(count == s.top()){  // �ְ� ���� �������� Ȯ���ϰ�, 
			while(1){          //���⼭ �ݺ������� �����ɼ������� while���� ����. 
 				s.pop();
				str += "O";
				count++;
				if(s.empty()) break;   //�������츦 ó��������ϳ�? 
				if(count != s.top()) break;  //stack�� ����ִµ� �����Ϸ��� ��������.!! 
			}
		}
	}
	if(!s.empty()){
		cout<<"impossible\n";
		return 0;
	}
	cout<<str<<'\n'; 
}


