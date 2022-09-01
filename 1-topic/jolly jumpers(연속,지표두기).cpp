#include <iostream>
#include <cmath>
#include <string>
using namespace std;

/*
N개의 정수로 이루어진 수열에 대해 서로 인접해 있는 두 수의 차가 1에서 N-1까지의 값을 
모두 가지면 그 수열을 유쾌한 점퍼(jolly jumper)라고 부른다. 예를 들어 다음과 같은 수열에
서 1 4 2 3 앞 뒤에 있는 숫자 차의 절대 값이 각각 3 ,2, 1이므로 이 수열은 유쾌한 점퍼가 
된다. 어떤 수열이 유쾌한 점퍼인지 판단할 수 있는 프로그램을 작성하라
*/

int ch[100];
int main() { 
    //차가 이제 1~N-1 까지의 값을 가지는가.
	int N,tmp,pre;
	cin>>N;
	
	for(int i=0;i<N;i++){
		cin>>tmp;
		if(i==0){
			pre=tmp;
		}
		else{
			ch[abs(tmp-pre)]++;  //역시나 카운트배열을 이용합니다. 
			pre=tmp;
		}
	}
	
	for(int i=1;i<N;i++){
		if(ch[i]!=1){  //그 카운트배열에 값이 있는지 확인. 
			cout<<"NO";
			return 0;
		}
	}
	cout<<"YES";
	return 0;
}
	

