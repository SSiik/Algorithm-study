#include <iostream>
#include <algorithm>
#include <vector>
#include <queue>
using namespace std;
int maxx=-2147000000;
int answer=0;
//양수의 값만 담을때 최소힙을 이용하려면, 값을 담을때 음수로 담습니다. 그러면 -1 같은게 제일 위에 잇겟죠.
// 그리고 또 뺄때는 -를 떼서 꺼내면 최소힙의 기능을 어느정도 해주겠죠.
bool cmp(pair<int,int> a,pair<int,int> b){
	if(a.first==b.first){
		return a.second > b.second; //그럼 돈으로 내림차순. 
	} 
	
	return a.first > b.first; //날짜순으로 내림차순. 
}
int main() {
	// queue 헤더를 include하면 priority_queue를 사용할수 있습니다. 
	//큐 만들기.  가장 큰 수가 top으로 오게될겁니다. 내림차순느낌.
	// push하면 내부에 자동으로 정렬되는 느낌입니다. 
	priority_queue<int> pQ; 
	int N,M,D;
	cin>>N;
	vector<pair<int,int>> v; 
	for(int i=0;i<N;i++){
		cin>>M>>D;
		v.push_back({D,M});
		if(maxx<D) maxx=D;
	}
	sort(v.begin(),v.end(),cmp);
	//일단 요일 내림차순으로 해야합니다.
	//1일차에 막 3일차꺼를 해버리면 나중에 2일차나 1일차꺼를 못하게된다.
	//그래서 마지막부터 마지막일꺼로 넣게 스케쥴링 하는게 좋다.
	
	int j=0;
	for(int i=maxx;i>=1;i--){
		//마지막날부터 고르는겁니다.
		//뭔가 어디서 부터 결정을 해야 쉽게풀릴것 같은느낌이 드는 문제가 있습니다. 
		for(;j<N;j++){
				if(i > v[j].first) break;
				pQ.push(v[j].second);
				//i에 해당하는 날짜를 pQ에 모두 넣어놓고 거기서 추첨에 들어갈겁니다. 
		}
		//이제 넣어놓은 후보군들 사이에서 제일 좋은걸 골라야함.
		//이때 priority_queue를 이용해서 여기서 top에 있는걸 선정함.
		if(!pQ.empty()){
			answer += pQ.top();
			pQ.pop(); //선택하고 없앱니다. 
		}
	}
	cout<<answer<<'\n'; 	
}
