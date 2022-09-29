#include <iostream>
#include <vector>
#include <queue>
using namespace std;

/*
   BFS �⺻
*/
int chk[8];
vector<int> map[8];



int main() {
	int start,finish,cur;
	for(int i=0;i<6;i++){
		cin>>start>>finish;
		map[start].push_back(finish);
	}
	// BFS�� �⺻���౸�� ��ü������ �ٰ��� 1�ܰ�� �ö󰡸鼭 Ž���Ѵ�.
	// �ϳ� CASE�� �İ� ���� CASE�Ѿ�°Ծƴ϶� ��ü���� CASE�� ���� 1�ܰ辿 �ø��� �����̴�.
	 
	queue<int> q;   //BFS������ QUEUE�� ����Ѵٴ��� 
	q.push(1);      //������ ����. 
	while(!q.empty()){  //�� ť�� ��������. 
		cur = q.front();
		q.pop();
		for(int i=0;i<map[cur].size();i++){
			q.push(map[cur][i]);
		}  //�ش��ϴ°� ť�� �ְ� ������. 
		cout<<cur;  //���⿡�� �۾��� ������. 
	}		
	 
}
