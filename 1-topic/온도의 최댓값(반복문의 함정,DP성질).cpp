#include <iostream>
#include <cmath>
#include <string>
using namespace std;

/*

	매일 측정한 온도가 정수의 수열로 주어졌을 때, 연속적인 며칠 동안의 온도의 합이 가장 큰 
	값을 계산하는 프로그램을 작성하시오.
	
	sol ) 내가 정한 새로운 유형 -> 반복문의 함정 (분노유발자와 비슷한 문제)
	나이브한 반복문으로 풀게하려는 함정을 띄고있다.
	이런문제는 어떻게하면 쉽게풀까? 를 생각해봐야한다. 머리를 써야함.
	단순히 앞에서부터 K개를 연속적으로 더하는게 아니라 겹치는 부분을 생각했다.
	"DP의 성질을 띈다. 이전의 값을 이용하는 느낌을 가져야합니다."
	"반복문의 함정 => DP성으로 이전의 값을 어떻게 활용할지를 생각" 
*/

int main() { 
	int max=-2147000000;
	int N,K,sum=0;
	int ch[100000];
	cin>>N>>K;
	for(int i=0;i<N;i++){
		cin>>ch[i];
	}
	for(int i=0;i<=N-K;i++){
		if(i==0){
			for(int i=0;i<K;i++){
				sum += ch[i];
			}
		}
		else{
			sum = sum - ch[i-1] + ch[i+(K-1)]; //K를 통해서 떨어진값을 구해야한다. 
		}
		if(sum>max) max=sum;
	}
	cout<<max;
}
	

