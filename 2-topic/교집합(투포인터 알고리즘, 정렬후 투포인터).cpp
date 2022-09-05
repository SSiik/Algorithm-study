#include <iostream>
#include <algorithm>

using namespace std;

/*
   두 배열에서의 교집합 구하기.
   
   solution idea)
   한쪽배열의 원소중에서 하나를 잡고,
   다른쪽 배열을 전부다 탐색한다는게 일반적인 생각이지만 이건 너무 무모합니다.
   
   -> 두개의 배열을 일단 모두 '정렬'합니다.
   그리고 맨앞부터 비교하는데 한쪽배열원소를잡고 다른한쪽 배열을 비교할텐데.
   
   이제 비교할때 반대쪽 배열원소가 나보다 크다면? 더이상 비교할 필요가
   없는겁니다. 그 뒤는 나보다 크기때문이죠.  => 최적화. 
*/

int ch[30000];
int ch2[30000];
int main() {
	int N,M,tmp;
	cin>>N;
	for(int i=0;i<N;i++){
		cin>>ch[i];
	}
	cin>>M;
	for(int i=0;i<M;i++){
		cin>>ch2[i];
	}
	
	//배열의 포인터 + (배열의포인터+크기) 
	sort(ch,ch+N);    //인자가 이렇게 들어갑니다 배열시. 
	sort(ch2,ch2+M);
	
	int p1=0,p2=0;
	
	while(p1<N && p2<M){ //이렇게 범위확인 최적화! 포인터의 범위를 확인가능. 
		if(ch[p1] == ch2[p2]){
			cout<<ch[p1++]<<" ";
			p2++;    //같으면 서로 포인터를 올림. 
		}
		else if(ch[p1] < ch2[p2]){
			p1++; //p2가 크면 p1쪽 포인터를 올려야함. 
		}
		else{
			p2++;   //p1이 크면 p2포인터를 올려봐야함. 
		}
	}
	 
}
