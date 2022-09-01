#include <iostream>
#include <cmath>
#include <string>
using namespace std;

/*
	자연수 N이 입력되면 1부터 N까지의 소수의 개수를 출력하는 프로그램을 작성하세요. 
	만약 20이 입력되면 1부터 20까지의 소수는 2, 3, 5, 7, 11, 13, 17, 19로 총 8개입니다.
	제한시간은 1초입니다.
	
	소수도 어떻게보면 약수문제의 일종이므로 여기서도 루트가 사용된다는걸 인지합시다. 
*/

bool isPrime(int x){
	for(int i=2;i<=sqrt(x);i++){  //소수 판별할때도 sqrt를 사용할수있다는점 
		if(x%i==0){
			return false;
		}	
	}
	return true;
}

int main() { 
	int N,count=0;
	cin>>N;
	for(int i=2;i<=N;i++){
		if(isPrime(i)) count++;
	}
	cout<<count;
}
	

