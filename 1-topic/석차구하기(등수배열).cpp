#include <iostream>
#include <vector>
#include <string>
using namespace std;

/*
	N명의 학생의 수학점수가 입력되면 각 학생의 석차를 
	입력된 순서대로 출력하는 프로그램을 작성하세요.
	
	sol) 등수정하기.
	전부다 일단 1등이라고 가정하는 배열.
	원소하나 잡고, 나머지와 비교해서 내가 작다면 내 순위를 올려버립니다.(낮아지는거죠) 
*/

int ch1[100],ch2[100];
int main() { 
    int N,tmp;
	cin>>N;
	for(int i=0;i<N;i++){
		cin>>ch1[i]; //입력값들. 
		ch2[i]=1;  //등수배열. 
	}
	for(int i=0;i<N;i++){
		for(int j=0;j<N;j++){ //i를 기준으로 j를 다 탐색해봄. i의 순위를 정함. 
			if(ch1[i]<ch1[j]) ch2[i]++; 
		}
	}
	for(int i=0;i<N;i++){
		cout<<ch2[i]<<" ";
	}
	return 0;	 
}
	

