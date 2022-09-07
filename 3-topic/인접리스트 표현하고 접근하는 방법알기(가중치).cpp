#include <iostream>
#include <vector>
using namespace std;

//인접리스트 표현하고 접근하는 방법알기. 

int N,M;
vector<pair<int,int>> v[21]; // 뒤에 배열표시 '[]' 가 붙었다 그러면 내부원소로 앞에 형태를 가진다는거다. 
                             // vector<pair<int,int>> 를 원소로 가지는 배열을 가진다. 
int main() {
	int start,finish,value;
	cin>>N>>M;
	for(int i=0;i<M;i++){
		cin>>start>>finish>>value;
		v[start].push_back({finish,value});
	}
	
	for(int i=1;i<=N;i++){
		for(int j=0;j<v[i].size();j++){
			cout<<v[i][j].first<<" "<<v[i][j].second<<'\n';
		}
	}
}


