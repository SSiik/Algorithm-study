#include <iostream>
#include <cmath>
#include <string>
using namespace std;

/*


N개의 자연수가 입력되면 각 자연수의 자릿수의 합을 구하고, 
그 합이 최대인 자연수를 출력하는 프로그램을 작성하세요. 
각 자연수의 자릿수의 합을 구하는 함수를 int digit_sum(int x)를 
꼭 작성해서 프로그래밍 하세요.
*/


int digit_sum(int x){
	int sum=0;
	while(x >= 10){ //나눌때는 나눠지는수 기준으로. 
		sum += (x%10);  
		x=x/10;   //초기화 해주는거죠!
	}
	sum += x;  //끝나고 남은거 처리? 
	return sum;	
}

int main() {
	int value[100];
	int N,tmp;
	pair<int,int> max = {0,0};  //여기선 pair를 이용했습니다.
	cin>>N;
	for(int i=0;i<N;i++){
		cin>>tmp;
		int result = digit_sum(tmp);
		
		if(result > max.second){
			max.first = tmp;
			max.second = result;
		}
		else if(result == max.second){
			if(tmp > max.first){
				max.first=tmp;
			}
		}
	}
	cout<<max.first;
}

