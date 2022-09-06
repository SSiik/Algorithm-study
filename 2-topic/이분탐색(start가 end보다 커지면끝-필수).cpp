#include <iostream>
#include <algorithm>

using namespace std;

/*
 임의의 N개의 숫자가 입력으로 주어집니다. N개의 수를 오름차순으로 정렬한 다음 N개의 수 
중 한 개의 수인 M이 주어지면 이분검색으로 M이 정렬된 상태에서 몇 번째에 있는지 구하는 
프로그램을 작성하세요
*/

int ch[1000000];
int main() {
	int N,M,idx,start,end;
	cin>>N>>M;
	for(int i=0;i<N;i++){
		cin>>ch[i];
	}
	sort(ch,ch+N); //algorithm헤더의 sort함수를 배열로 적용.
	start=0; end=N-1;
	
	
	while(start<=end){  //시작점이 끝점을 넘어가면 끝납니다.
	                    // 시작점 <= 끝점. 
		idx= (start+end)/2;
		if(ch[idx] > M){
			end = idx-1; continue;
		}
		else if(ch[idx]==M){
			cout<<idx+1; return 0;
			// idx와 몇번째인지는 차이가있으니까.
			//idx +1 을해줘야합니다 idx가 0이면 실제로는 1번째니깐요. 
		}
		else{
			start=idx+1;
		}
	} 
}
