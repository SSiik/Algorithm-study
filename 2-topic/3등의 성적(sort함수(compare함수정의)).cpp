#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

/*
	N명의 수학성적이 주어지면 그 중 3등을 한 수학성적을 출력하는 프로그램을 작성하세요.
만약 학생의 점수가 100점이 3명, 99점이 2명, 98점이 5명, 97점이 3명 이런식으로 점수가 
분포되면 1등은 3명이며, 2등은 2명이며 3등은 5명이 되어 98점이 3등을 한 점수가 됩니다.
	 
*/

bool compare(int a,int b){
	return a>b;  //왼쪽을크게하면 큰게 왼쪽으로 몰려서 내림차순으로 진행. 
}
int main() {
	 int N,tmp;
	 cin>>N;
	 vector<int> v(N);
	 for(int i=0;i<N;i++){
	 	cin>>v[i];
	 }
	 sort(v.begin(),v.end(),compare); 
	 // 기억난다 이제 compare함수를 따로 정의해줘야, 역순정렬로 만들수있다. 
	 
	 int count=1;  //앞에꺼랑 값이 같은지 다른지 비교해본다! 
	 for(int i=1;i<N;i++){
	 	if(v[i] != v[i-1]){
	 		count++; 
		}
		if(count==3){
			cout<<v[i];
			break;
		}
	 } 
	 
}
