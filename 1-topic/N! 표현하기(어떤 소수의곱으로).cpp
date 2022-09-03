#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

/*
   임의의 N에 대하여 N!은 1부터 N까지의 곱을 의미한다. 이는 N이 커짐에 따라 급격하게 커진
다. 이러한 큰 수를 표현하는 방법으로 소수들의 곱으로 표현하는 방법이 있다. 먼저 소수는 
2, 3, 5, 7, 11, 13... 순으로 증가함을 알아야 한다. 예를 들면 825는 (0 1 2 0 1)로 표현이 
가능한데, 이는 2는 없고 3은 1번, 5는 2번, 7은 없고, 11은 1번의 곱이라는 의미이다. 101보
다 작은 임의의 N에 대하여 N 팩토리얼을 이와 같은 표기법으로 변환하는 프로그램을 작성해 
보자. 출력은 아래 예제와 같이 하도록 한다.

사실상 소수를 찾는문제인거 같다. 소인수분해? 
*/

int main() {
	int N,tmp;
	cin>>N;
	vector<int> ch(N+1); //시간 최적화를 위해서 벡터를 사용했습니다. 
	
	for(int i=2;i<=N;i++){ //팩토리얼 하나당 모든 소수로 검색해봅니다. 2부터 하는거죠. 
		tmp=i;  // 2~N! 까지 각각의 요소를 소수로 나눠봅시다. 
		int first=2;
		while(tmp>1){
		if(tmp%first==0){
			ch[first]++;
			tmp=tmp/first;
		}
		else{
			first++;
		}
	    }
	}


	cout<<N<<"! =";
	for(int i=2;i<=N;i++){ //N까지만 딱 진행. 
		if(ch[i] != 0) cout<<" "<<ch[i];
	}
	
}
