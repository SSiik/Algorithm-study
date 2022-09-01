#include <iostream>
#include <cmath>
#include <string>
using namespace std;

/*
N개의 자연수가 입력되면 각 자연수를 뒤집은 후 그 뒤집은 수가 소수이면 그 수를 출력하는 
프로그램을 작성하세요. 예를 들어 32를 뒤집으면 23이고, 23은 소수이다. 그러면 23을 출력
한다. 단 910를 뒤집으면 19로 숫자화 해야 한다. 첫 자리부터의 연속된 0은 무시한다.
뒤집는 함수인 int reverse(int x) 와 소수인지를 확인하는 함수 bool isPrime(int x)를 반드시 
작성하여 프로그래밍 한다
*/

int reverse(int x){
	string result="";
	while(x>10){
		result += to_string(x%10);  //to_string은 바로 쓸수 있는 메소드! 
		x=x/10;
	}
	result += to_string(x);
	return stoi(result);  //뒤집을수 있는 구현력이 있느냐. 
}

bool isPrime(int x){
	for(int i=2;i<x;i++){ //소수 판단이므로 자기는 제외. 
		if(x%i==0) return false; 
	}
	return true; 
} 

int main() { 
	int N,val;
	cin>>N;
	for(int i=0;i<N;i++){
		cin>>val;
		int a=reverse(val);
		if(isPrime(a)) cout<<a<<" ";
	}
}

