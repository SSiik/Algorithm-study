#include <iostream>
#include <stack>
#include <string>

using namespace std;

/*
  기차 운행. 
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
		str += "P";  //기본적으로 push는 진행. 
		if(count == s.top()){  // 넣고 이제 같은지를 확인하고, 
			while(1){          //여기서 반복적으로 삭제될수있으니 while문을 진행. 
 				s.pop();
				str += "O";
				count++;
				if(s.empty()) break;   //비었을경우를 처리해줘야하나? 
				if(count != s.top()) break;  //stack은 비어있는데 참조하려면 오류를냄.!! 
			}
		}
	}
	if(!s.empty()){
		cout<<"impossible\n";
		return 0;
	}
	cout<<str<<'\n'; 
}


