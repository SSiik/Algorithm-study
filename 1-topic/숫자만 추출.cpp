#include <iostream>
#include <cmath>
#include <cstring>
using namespace std;

/*
	문자와 숫자가 섞여있는 문자열이 주어지면 그 중 숫자만 추출하여 그 순서대로 자연수를 만
	듭니다. 만들어진 자연수와 그 자연수의 약수 개수를 출력합니다.
	만약 “t0e0a1c2her”에서 숫자만 추출하면 0, 0, 1, 2이고 이것을 자연수를 만들면 12가 됩니
	다. 즉 첫 자리 0은 자연수화 할 때 무시합니다. 출력은 12를 출력하고, 다음 줄에 12의 약
	수의 개수를 출력하면 됩니다.
	추출하여 만들어지는 자연수는 100,000,000을 넘지 않습니다.

             sol) 48~57 사이가 숫자문자라는점 (직접 찍어보기)
                  그리고 "약수의 갯수" 는 최적화시에 루트까지 해보는게 핵심.
                  나눈수와 몫이 같냐로 몇개를 추가할건지. , 여전히 stoi함수는 필수적.
*/
int main() {
	// 숫자문지를 출력해보면 되겟죠. 
	string inp,tmp="";
	int count=0;
	cin>>inp;
	for(int i=0;i<inp.size();i++){
		if((int)inp[i]>=48 && (int)inp[i]<=57){
			tmp += inp[i];	
		}
	}
	int result1 = stoi(tmp);
	for(int i=1;i<=sqrt(result1);i++){
		if(result1%i==0){
			if((result1/i)==i) count++;
			else{
				count += 2;
			}
		}
	}    
    cout<<result1<<'\n'<<count;        
}

