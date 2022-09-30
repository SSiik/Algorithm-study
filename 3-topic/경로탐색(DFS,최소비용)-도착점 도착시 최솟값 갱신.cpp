#include <iostream>
#include <vector>
using namespace std;
int minn=2147000000;
int N;
/*
  ����츦 �� ���Ƽ� �ּҺ������ �����մϴ�.
  �ִܰŸ��� �ƴ϶� �ּҺ���Դϴ�. ����� STEP���� �����İ� �ƴ϶� ���� ����ġ�Դϴ�.
   BFS�� ��ΰ� ������ ����(�ܰ�)�� ���ϱ� ������ ���� �������ĸ� �����Ҽ� �ֽ��ϴ�.
   �ٸ� ���� ����ġ��°� �����մϴ�. -> DFS ���.
*/
int chk[21];
vector<pair<int,int>> map[21];
   

void DFS(int start,int sum){
	if(start==N){
		if(minn>sum){
			minn=sum;
		}
	}
	else{
		for(int i=0;i<map[start].size();i++){
			if(chk[map[start][i].first]==0){
				chk[map[start][i].first]=1;
				DFS(map[start][i].first,sum+map[start][i].second);
				chk[map[start][i].first]=0;
					
			}
		}
	}
}


int main() {
	int M,start,finish,value;
	cin>>N>>M;
	for(int i=0;i<M;i++){
		cin>>start>>finish>>value;
		map[start].push_back({finish,value});
	}
	chk[1]=1;
	DFS(1,0);
	cout<<minn;
	//DFS�� ��� ��츦 ���ƺ��鼭 �ּڰ��� �����ϴ� �ɷ� �����Ұ� �����ϴ�. 
	 
}
