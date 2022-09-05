#include <iostream>
#include <vector>

using namespace std;

/*
   1부터 n까지의 수를 한 번씩만 사용하여 이루어진 수열이 있을 때, 1부터 n까지 각각의 수 
앞에 놓여 있는 자신보다 큰 수들의 개수를 수열로 표현한 것을, 
 Inversion Sequence라 한다. 
예를 들어 다음과 같은 수열의 경우 
 4 8 6 2 5 1 3 7
1앞에 놓인 1보다 큰 수는 4, 8, 6, 2, 5. 이렇게 5개이고,
2앞에 놓인 2보다 큰 수는 4, 8, 6. 이렇게 3개,
3앞에 놓인 3보다 큰 수는 4, 8, 6, 5 이렇게 4개......
따라서 4 8 6 2 5 1 3 7의 inversion sequence는 5 3 4 0 2 1 1 0 이 된다.
n과 1부터 n까지의 수를 사용하여 이루어진 수열의 inversion sequence가 주어졌을 때, 원래
의 수열을 출력하는 프로그램을 작성하세요
*/

int ch[100];
int ch2[100];
int main() {
	//큰거부터 먼저 넣어버리겠다는겁니다. 맨뒤에서부터 위치.
	//앞에 있는 큰숫자만큼 땡기는 방법을 이용합니다. 
	// 큰수를 앞에 위치시켜버리고 자기가 들어가는겁니다. 
	int N,pos;
	cin>>N;
	for(int i=1;i<N+1;i++){
		cin>>ch[i];
	}
	
	for(int i=N;i>=1;i--){
		pos=i;
		for(int j=1;j<=ch[i];j++){ //그냥 횟수대로하는 루프. 
			ch2[pos]=ch2[pos+1]; //뒤에있는걸 앞으로 땡기기.
			pos++;  //앞으로 땡겨오면서 포인터를 높임. pos가 들어갈자리. 
		}
		ch2[pos]=i;
	}
	
	for(int i=1;i<=N;i++){
		cout<<ch2[i]<<" ";
	}
	
	 
}
