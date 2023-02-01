#include <iostream>
#include <cmath>
using namespace std;

// 진약수 구하기. 
int main() {

	int N,sum=1;
	cin>>N;
	cout<<1;
	for(int i=2;i<N;i++){
		if(N%i==0){
			sum += i;
			cout<<" + "<<i;
		}
	} //나 자신을 안포함하니 진약수 확인가능
	// "="를 마지막에 나와서 출력할수 있습니다.
	// 어디가 반복패턴인지 확인합니다. "+ 숫자 "가 반복패턴입니다. 
	cout<<" = "<<sum;
}

