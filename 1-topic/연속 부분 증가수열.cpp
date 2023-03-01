#include <iostream>
#include <cmath>
#include <string>
using namespace std;

/*

	N개의 숫자가 나열된 수열이 주어집니다. 이 수열 중 연속적으로 증가하는 부분 수열을 최대 
	길이를 구하여 출력하는 프로그램을 작성하세요.
	만약 N=9이고 
	5 7 3 3 12 12 13 10 11 이면 “3 3 12 12 13”부분이 최대 길이 증가수열이므로 그 길이인 
	5을 출력합니다. 값이 같을 때는 증가하는 걸로 생각합니다.


*/


int main() { 
   //층간소음 문제처럼 변수를 두는문제, 입력받으면서 로직을 진행.
   //첫원소를 기준으로 잡는다.
   //조건에 맞는경우 계속 카운트하면서 값을 편집
   //조건에 틀린경우 우리가 필요한 정보를갱신하고 다시 restart하는 느낌으로 셋팅. 
   int count=1;
   int maxcount=-2147000000;
   int N,tmp,max;
   cin>>N;
   for(int i=0;i<N;i++){
   		cin>>tmp;  
   		if(i==0){
   		   max=tmp;  
		}
		else{
			if(tmp>=max){
				count++;
				max=tmp;
			}
			else{ //끊기는거다. 여태까지의 정보를 정리해야함. 
				if(count>maxcount) maxcount=count;
				count=1;
				max=tmp;
			}
		}
   }
   if(count>maxcount) maxcount=count; //마지막에도 추가해줘야합니다.
                                      //마지막까지 행위가 유지될수있으니 끊어줘야합니다. 
   cout<<maxcount; 
}
	

