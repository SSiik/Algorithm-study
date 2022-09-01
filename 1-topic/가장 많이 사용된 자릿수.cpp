#include <iostream>
#include <cmath>
#include <string>
#include <vector>
using namespace std;

/*
N자리의 자연수가 입력되면 입력된 자연수의 자릿수 중 가장 많이 사용된 숫자를 출력하는 프
로그램을 작성하세요.
예를 들어 1230565625라는 자연수가 입력되면 5가 3번 상용되어 가장 많이 사용된 숫자입니
다. 답이 여러 개일 경우 그 중 가장 큰 수를 출력하세요

sol 전역변수로 이렇게 int ch[10] -> 10개가 다 0으로 초기화되는 느낌?
    main함수 내에서 선언하면 적용되지 않는것 같습니다. 
*/
int ch[10];
int main() { //배열의 쓰레기값 초기화 방지를 위해서 벡터사용 
	string a; 
	cin>>a;
	for(int i=0;i<a.size();i++){
		ch[(int)a[i]-48]++;		
	}
	
	int max=-2147000000; int key=0;
	for(int i=0;i<10;i++){
		if(ch[i]>=max){ //같아도 처리해줘야함 
			max=ch[i];
			key=i;
		}
	}
	cout<<key;
}

