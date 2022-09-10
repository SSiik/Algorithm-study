#include <iostream>
#include <algorithm>
#include <vector>
#include <queue>
using namespace std;
int maxx=-2147000000;
int answer=0;
//����� ���� ������ �ּ����� �̿��Ϸ���, ���� ������ ������ ����ϴ�. �׷��� -1 ������ ���� ���� �հ���.
// �׸��� �� ������ -�� ���� ������ �ּ����� ����� ������� ���ְ���.
bool cmp(pair<int,int> a,pair<int,int> b){
	if(a.first==b.first){
		return a.second > b.second; //�׷� ������ ��������. 
	} 
	
	return a.first > b.first; //��¥������ ��������. 
}
int main() {
	// queue ����� include�ϸ� priority_queue�� ����Ҽ� �ֽ��ϴ�. 
	//ť �����.  ���� ū ���� top���� ���Եɰ̴ϴ�. ������������.
	// push�ϸ� ���ο� �ڵ����� ���ĵǴ� �����Դϴ�. 
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
	//�ϴ� ���� ������������ �ؾ��մϴ�.
	//1������ �� 3�������� �ع����� ���߿� 2������ 1�������� ���ϰԵȴ�.
	//�׷��� ���������� �������ϲ��� �ְ� �����층 �ϴ°� ����.
	
	int j=0;
	for(int i=maxx;i>=1;i--){
		//������������ ���°̴ϴ�.
		//���� ��� ���� ������ �ؾ� ����Ǯ���� ���������� ��� ������ �ֽ��ϴ�. 
		for(;j<N;j++){
				if(i > v[j].first) break;
				pQ.push(v[j].second);
				//i�� �ش��ϴ� ��¥�� pQ�� ��� �־���� �ű⼭ ��÷�� ���̴ϴ�. 
		}
		//���� �־���� �ĺ����� ���̿��� ���� ������ ������.
		//�̶� priority_queue�� �̿��ؼ� ���⼭ top�� �ִ°� ������.
		if(!pQ.empty()){
			answer += pQ.top();
			pQ.pop(); //�����ϰ� ���۴ϴ�. 
		}
	}
	cout<<answer<<'\n'; 	
}
