#include <iostream>
#include <string>
#include <cmath>
using namespace std;

/*
     탄소(C)와 수소(H)로만 이루어진 화합물을 탄화수소라고 합니다.
	탄소(C) 한 개의 질량은 12g, 수소(H) 한 개의 질량은 1g입니다.
	에틸렌(C2H4)의 질량은 12*2+1*4=28g입니다.
	메탄(CH4)의 질량은 12*1+1*4=16g입니다.
	탄화수소식이 주어지면 해당 화합물의 질량을 구하는 프로그램을 작성하세요.

	H위치를 찾으면 반루프를 끝내버리고
            다음 반루프를 실행하도록 했습니다. 그 와중에 H위치를 기록해두엇죠.
            예외처리(비엇을것을 대비)해서 문자열 전체길이와도 비교해주어야합니다. H다음위치가.
*/

int main() {
	 string s;
	 cin>>s;
	 int locC,locH,res=0;
	 string cvalue="",hvalue="";
	 for(int i=1;i<s.size();i++){
	 	if(s[i]=='H'){
	 		if(i==1){
	 			res=12; locH=i; break; 
			}
			else{
				res = 12*stoi(cvalue); locH=i; break;
			}
		}
		else{
			cvalue += s[i];
		}
	}
	
	if(locH+1 == s.size()) res += 1;  //초과한것. 마지막인것. 
	else{
		for(int i=locH+1;i<s.size();i++){
			hvalue += s[i];
		}
		res += stoi(hvalue);
	}
	
	cout<<res;
}
