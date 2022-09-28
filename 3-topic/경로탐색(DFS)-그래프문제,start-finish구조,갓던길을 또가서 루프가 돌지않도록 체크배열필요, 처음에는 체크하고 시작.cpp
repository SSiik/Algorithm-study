#include <iostream>
#include <vector>
using namespace std;

vector<int> map[21];
int chk[21]; 
int N,M,count=0;




void DFS(int start){
	if(start==N){
		count++;
		return;
	}
	else{ //�迭�� �ִ°� �� ���ƾ��ϴ� for���� �̿��غ��Ҵ�. 
	      //�̰� �� �ȵȴٸ�, ��� ���� ������ �����ִ°̴ϴ�. �ݺ��ϰ� �ִ°���.
		  //�̰� ���ѷ����� ������ �ȵ˴ϴ�. Ȥ�� �����ִ°� �ƴѰ��� Ȯ���غ��ô�. 
		for(int i=0;i<map[start].size();i++){
			if(chk[map[start][i]]==0){
				chk[map[start][i]]=1;
				DFS(map[start][i]);	 
				//�����ܰ迡�� �̷��� ���� �ܰ迡�� ���������� �����̴ϴ�.
				//���� ����Ǽ������� �����ֵ��� ���ƿ��� üũ�� �������ݴϴ�.
				chk[map[start][i]]=0;  
				// DFS������ ������ ������ �ִ��� �ƴ����� üũ�սô�. 
			}
		}	  
	}
	
}


int main() {
	cin>>N>>M;
	int start,finish;
	for(int i=0;i<M;i++){
		cin>>start>>finish;
		map[start].push_back(finish);
	}
	chk[1]=1; //1���� �湮�ϰ� �����սô�. 
	DFS(1);
	cout<<count;
	
	
}


