#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

/*
	현수의 컴퓨터가 바이러스에 걸려 영어단어가 뛰어쓰기와 대소문자가 혼합되어 표현된다. 
예를 들면 아름다운 이란 뜻을 가지고 있는 beautiful 단어가 “bE au T I fu L” 과 같이 
컴퓨터에 표시되고 있습니다. 위와 같이 에러로 표시되는 영어단어를 원래의 표현대로 공백을 
제거하고 소문자화 시켜 출력하는 프로그램을 작성하세요.

sol)
getline(cin,문자열변수) 이용하면 "공백을 포함한 문자열"도 받을수 있습니다.
기존 cin은 공백이 포함되면 받아지지 않는거 같습니다. 
cstring 라이브러리를 계산한것이 string 라이브러리다? 
*/
int main() {

	// 97~122  65~90
	string tmp,result="";
	getline(cin,tmp);
	for(int i=0;i<tmp.size();i++){
	   if(tmp[i]>=97 && tmp[i]<=122){
	   		result += tmp[i];
	   }
	   else if(tmp[i]>=65 && tmp[i]<=90){
	   		result += (char)((int)tmp[i]+32);
	   }
	   else{  //공백문자면 그냥 결과에 안포함시킴. 
	   		continue;
	   }
	}
	cout<<result;
}

