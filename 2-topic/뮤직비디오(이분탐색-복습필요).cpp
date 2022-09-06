#include <iostream>
#include <algorithm>

using namespace std;

/*
 
*/

int ch[1000],N;

int Count(int s){
	int cnt=1,sum=0; //cnt가 이제 갯수입니다. 
	for(int i=0;i<N;i++){
		if(sum+ch[i] > s){ //한계를 초과햇을시. 미리 확인. 
			cnt++;
			sum=ch[i]; //새로 그릇에 담는 이 느낌 중요. 
		}
		else{
			sum += ch[i];
		}  
	}
	return cnt;
} 


int main() {
	int M,mid,res,maxx=-2147000000;
	int lt=1,rt=0;
	cin>>N>>M;
	for(int i=0;i<N;i++){
		cin>>ch[i];
		rt += ch[i]; //다 합치는게 이제 rt가 됩니다. 답은 여기 사이에 있을테니깐요.
		if(ch[i]>maxx) maxx=ch[i]; //가장 큰 값도 찾습니다. 
	}
	
	//우린 DVD 의 최소 용량 크기를 찾아야합니다. e.g) 1~45 사이에 존재. 
	while(lt<=rt){ //이분탐색을 위한 투포인터 준비 조건. 
		mid=(lt+rt)/2; // 이제 lt=1 과 rt(다 합친값) 사이에 무조건 존재하기때문에 여기 사이에서 셋팅합니다.
		if(mid>= maxx && Count(mid) <= M){
		//자 로직이 좀 어려워도 이해하려고 해봅시다.
		/*
		  자 들어오는 입력값(maxx)보다 mid가 당연히 크거나 같아야합니다.
		  어떠한 원소도 못담는다면 그건 말이 안되는거겠죠. (어찌보면 당연한것)
		  
		  그리고 결정된 DVD 용량으로 했을때 나오는 갯수가 m보다 작거나 같아야겠죠.	
		*/ 
			res=mid; //일단 res에 때려놓고 rt를 낮춰서 낮은쪽에서 찾아봅니다. 
			rt=mid-1; 
		}
		else{
			lt=mid+1;
		} 	
	}
	cout<<res<<'\n'; 
}
