#include <iostream>
#include <cmath>
#include <string>
using namespace std;


/*
	자연수 N이 입력되면 1부터 N까지의 각 숫자들의 약수의 개수를 출력하는 프로그램을 작성하세요. 
	만약 N이 8이 입력된다면 1(1개), 2(2개), 3(2개), 4(3개), 5(2개), 6(4개), 7(2개), 8(4개) 
	와 같이 각 숫자의 약수의 개수가 구해집니다. 
	출력은 다음과 같이 1부터 차례대로 약수의 개수만 출력하면 됩니다. 
	1 2 2 3 2 4 2 4 와 같이 출력한다.
*/
int main() {
	int N;
	int arr[50001];  //카운트 배열 
	arr[1]=1;
	cin>>N;
	for(int i=1;i<=N;i++){
		int count=0;
		for(int z=1;z<=sqrt(i);z++){  //약수의 개수니 루트가 등장 sqrt() 
			if(i%z==0){
				if((i/z)==z) count++;
				else count += 2;
			}
			arr[i]=count;
		}
	}
	for(int i=1;i<=N;i++){
		cout<<arr[i]<<" ";
	}
}

