#include <iostream>
#include <algorithm>

using namespace std;

/*
 
*/
int N;
int Count(int mid,int ch[]){
	//1번에는 무조건 배치를 하고 시작할겁니다. 
	int cnt=1,pos=ch[0]; //pos는 말을 담는 위치. 포인터를 하나 두는 느낌. 
	for(int i=1;i<N;i++){
		if(ch[i]-pos>=mid){ //mid로 들어온걸로 해보겠다는거기 때문에 확인을해봅니다.
		                    //적용이되는지. 여기서 mid는 최소거리입니다. 
			cnt++;			// mid보다는 커야한다 느낌입니다. 이중에서 최대를 찾으니깐요. 
			pos=ch[i];				  	
		}
	} 
	return cnt;
}

int main() {
	int C,lt=1,rt,mid,res;
	//C가 이제 말의 수. N이 마굿간의 수. 
	cin>>N>>C;
	int *ch = new int[N];
	for(int i=0;i<N;i++){
		cin>>ch[i];
	}
	rt=ch[N-1];  //사이의 거리가 최대가 되는 최댓값 
	sort(ch,ch+N);  //이분탐색을위해서 정렬은 필수.
	while(lt<=rt){
		mid=(lt+rt)/2;
		if(Count(mid,ch)>=C){
			res=mid;
			lt=mid+1; //더 큰걸 찾아봐야하니 계속해본다. 
		}
		else{
			rt=mid-1; //여긴 크니까 줄여야함. 
		} 
	}
	cout<<res<<'\n'; 
}

/*
결정 알고리즘 흐름.
lt와 rt 변수를 놓습니다.
lt는 문제따라 다르겟지만 보통 1이고, rt는 이제 내가 문제를 통해서 마지막점을 찾아야합니다.
답이 되는 범위를 찾고 답에 해당될수있는 마지막값으로 잡습니다.
그리고 정렬이 필요하겠죠.
그리고 결정알고리즘으로 진입합니다. -> while(lt<=rt)
내부에서 이제 돌아가는데, 내부에서는 또 해당값으로 돌아가는 외부함수를 만들어줍니다.
그 외부함수의 결과값이 만족한다면 정답을 초기화하고,
답중에서 큰걸 찾아야한다면, lt를 mid+1로 옮겨서 더 큰 답을 찾을수 있겠죠.
만약 결과값을 초기화할수없다, 너무크다면 줄여줘야합니다. rt를 mid-1로 줄입니다.

결정알고리즘에서 답은 여러개입니다. -> 최적의 답을 찾는겁니다.
""해당값으로 돌아가는 외부함수를 만들어주는게 핵심이라고 할수 있습니다. ""

*/
