#include <iostream>
#include <cmath>
#include <cstring>
using namespace std;

/*
	주민등록증의 번호가 주어지면 주민등록증 주인의 나이와 성별을 판단하여 출력하는 프로그램
	을 작성하세요. 주민등록증의 번호는 -를 기준으로 앞자리와 뒷자리로 구분된다.
	뒷자리의 첫 번째 수가 1이면 1900년대생 남자이고, 2이면 1900년대생 여자, 3이면 2000년대
	생 남자, 4이면 2000년대생 여자이다.
	올해는 2019년입니다. 해당 주민등록증 주인의 나이와 성별을 출력하세요.
*/
int main() {
	string tmp,a="";
	cin>>tmp;
	if(tmp[7]=='1'){
		a += tmp[0];
		a += tmp[1];
		cout<<2000-(stoi(a)+1900)+20<<" M";
	}
	else if(tmp[7]=='2'){
		a += tmp[0];
		a += tmp[1];
		cout<<2000-(stoi(a)+1900)+20<<" W";
	}
	else if(tmp[7]=='3'){
		a += tmp[0];
		a += tmp[1];
		cout<<2019-(stoi(a)+2000)+1<<" M";
	}
	else {
		a += tmp[0];
		a += tmp[1];
		cout<<2019-(stoi(a)+2000)+1<<" W";
	}
	// cstring 헤더를 포함하고 stoi()메소드를 통해서 string 형태를 int형으로 유연하게 바꿉니다. 
}

