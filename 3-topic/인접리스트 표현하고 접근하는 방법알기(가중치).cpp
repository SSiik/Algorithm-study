#include <iostream>
#include <vector>
using namespace std;

//��������Ʈ ǥ���ϰ� �����ϴ� ����˱�. 

int N,M;
vector<pair<int,int>> v[21]; // �ڿ� �迭ǥ�� '[]' �� �پ��� �׷��� ���ο��ҷ� �տ� ���¸� �����ٴ°Ŵ�. 
                             // vector<pair<int,int>> �� ���ҷ� ������ �迭�� ������. 
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


