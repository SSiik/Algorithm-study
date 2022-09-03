#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

/*
   자연수 N이 입력되면 N! 값에서 일의 자리부터 연속적으로 ‘0’이 몇 개 있는지 구하는 프로그
램을 작성하세요.
만약 5! = 5*4*3*2*1 = 120 으로 일의자리부터 연속적된 ‘0’의 개수는 1입니다.
만약 12! = 479001600으로 일의자리부터 연속적된 ‘0’의 개수는 2입니다.

*/

int main() {
	int N,tmp,numOftwo=0,numOffive=0;   
	cin>>N;
	for(int i=2;i<=N;i++){
		tmp=i;
		int first=2;
		while(1){
			if(tmp%first==0){
				if(first==2) numOftwo++;
				else if(first==5) numOffive++;
				
				tmp=tmp/first;
				if(tmp==1) break;
			}
			else{
				first++;
			}
		}
	}  //팩토리얼값에서 2의 개수와 5의 개수를 찾습니다. 
	
	if(numOftwo <= numOffive){
		cout<<numOftwo;
	}
	else{
		cout<<numOffive;
	}
		

}
