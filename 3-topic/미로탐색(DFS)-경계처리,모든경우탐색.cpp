#include <iostream>
using namespace std;

int dx[4]={-1,0,1,0};
int dy[4]={0,1,0,-1};

int map[7][7];
int chk[7][7];
int count=0;

/*
 ���� �������� Ž���ϴ°� �ƴմϴ�. ���� �ִ� ����� ���� �� �غ��°̴ϴ�.  
 DFS�� ��ĭ��ĭ �����ܰ�� ���ٰ�����սô�. �� "����������� ���ؼ� ���ѷ���"�� ������ �ʵ���
 üũ�迭�� �̿����ִ°͵� �ٽ��Դϴ�. 
*/
void DFS(int x,int y){
	if(x==6 && y==6){
		count++;
		return;
	}
	else{
	
		for(int i=0;i<4;i++){
			if(x+dx[i]<0 || x+dx[i]>6 || y+dy[i] < 0 || y+dy[i] > 6 ) continue; //������ �Ѿ�� ����ó���� �ؾ���. 
			if(map[x+dx[i]][y+dy[i]]==0 && chk[x+dx[i]][y+dy[i]]==0){
				chk[x+dx[i]][y+dy[i]]=1;
				DFS(x+dx[i],y+dy[i]);
				chk[x+dx[i]][y+dy[i]]=0;
			}
		}
	}
}

int main() {
	for(int i=0;i<7;i++){
		for(int j=0;j<7;j++){
			cin>>map[i][j];
		}
	}
	
	chk[0][0]=1; //ù��°�� �湮�� ��.
	DFS(0,0);
	cout<<count;
	 
}
