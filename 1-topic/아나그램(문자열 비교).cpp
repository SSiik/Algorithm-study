#include <iostream>
#include <cmath>
#include <string>
using namespace std;

/*
Anagram이란 두 문자열이 알파벳의 나열 순서를 다르지만 그 구성이 일치하면 두 단어는 아
나그램이라고 합니다. 
예를 들면 AbaAeCe 와 baeeACA 는 알파벳을 나열 순서는 다르지만 그 구성을 살펴보면 
A(2), a(1), b(1), C(1), e(2)로 알파벳과 그 개수가 모두 일치합니다. 즉 어느 한 단어를 재 
배열하면 상대편 단어가 될 수 있는 것을 아나그램이라 합니다.
길이가 같은 두 개의 단어가 주어지면 두 단어가 아나그램인지 판별하는 프로그램을 작성하세
요. 아나그램 판별시 대소문자가 구분됩니다	
*/

char ch1[52];  //각 문자열마다 대문자 26개 소문자 26개를 담을 "카운트"배열. 
char ch2[52];
int main() { 
	
	string input1,input2;
	cin>>input1>>input2;

	if(input1.size() != input2.size()){
		cout<<"NO"; return 0;
	}
	//0~25 대문자 26~51  (+26-1)  97에 26매 
	for(int i=0;i<input1.size();i++){
	  if(input1[i]>=65 && input1[i] <= 90){
	  	  ch1[(int)input1[i]-65]++;
	  }
	  else{
	  	  ch1[(int)input1[i]-71]++;	
	  }
	}
	
	for(int i=0;i<input2.size();i++){
	  if(input2[i]>=65 && input2[i] <= 90){
	  	  ch2[(int)input2[i]-65]++;
	  }
	  else{
	  	  ch2[(int)input2[i]-71]++;	
	  }
	}
	
	for(int i=0;i<52;i++){
		if(ch1[i] != ch2[i]){ //사용갯수가 다른걸 발견하자마자. 
			cout<<"NO";
			return 0;
		}
	}
	cout<<"YES";
	return 0; 
}
	

