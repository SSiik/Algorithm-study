#include <iostream>
#include <cmath>
#include <string>
using namespace std;

/*
	T편한 세상 아파트는 층간소음 발생 시 윗집의 발뺌을 방지하기 위해 애초 아파트를 지을 때 
바닥에 진동센서를 설치했습니다. 이 센서는 각 세대의 층간 진동소음 측정치를 초단위로 아
파트 관리실에 실시간으로 전송합니다. 그리고 한 세대의 측정치가 M값을 넘으면 세대호수와 
작은 경보음이 관리실 모니터에서 울립니다. 한 세대의 N초 동안의 실시간 측정치가 주어지면 
최대 연속으로 경보음이 울린 시간을 구하세요. 경보음이 없으면 -1를 출력합니다
*/

int main() { // sol, 최대 연속으로 울린시간을 지표로써 기록합니다. 
	int maxcount=-2147000000,pre=-5;  //꺼지면 이제, 최대 횟수랑 비교하면서 count는 다시0으로 회귀. 
	int N,M,val,count=0;
	cin>>N>>M;
	for(int i=0;i<N;i++){
		cin>>val;
		if(val>M){
			count++;
		}
		else{
			if(count>maxcount) maxcount=count;
			count=0;
		}
	}
	if(count>maxcount) maxcount=count;
	cout<<maxcount;
}
	

