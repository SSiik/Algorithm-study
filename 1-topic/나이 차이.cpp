#include <iostream>
#include <cmath>
using namespace std;

/*
N(2<=N<=100)명의 나이가 입력됩니다. 
이 N명의 사람 중 가장 나이차이가 많이 나는 경우는 
몇 살일까요? 최대 나이 차이를 출력하는 프로그램을 작성하세요.
*/
int main() {
	int max = -2147000000;
	int min = 2147000000;
	int a,N;
	cin>>N;
	for(int i=0;i<N;i++){
		cin>>a;
		if(a>max) max=a;
		if(a<min) min=a;
	}
	// 가장 큰 값에서 가장 작은값을 빼주면 되겠죠. 입력값중에서. 
	cout<<max-min;
	
}

