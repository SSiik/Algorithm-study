#include <iostream>
#include <cmath>
#include <vector>
using namespace std;

/*
  �� ���� ��հ� ���� ����. 
*/

int v1[9][9]; 
int min=2147000000;
int main() {
	//���� cmath�� �⺻�Լ��� �Ҽ��� ù��° �ڸ��� �ݿø��ϴ� ��ɸ� �����մϴ�. 
	vector< pair<int,int> > v;
	for(int i=0;i<9;i++){
		int min=2147000000,minvalue;
		float sum=0;
		float avg;
		for(int j=0;j<9;j++){
			cin>>v1[i][j];
			sum += v1[i][j];
		}
		avg=round(sum/9);
		
		
		for(int j=0;j<9;j++){
			if(min>abs(avg-v1[i][j])){
				min= abs(avg-v1[i][j]);  //���� ���� 
				minvalue = v1[i][j];  //�׿� ���� �� ����. 
			} 
			else if(min==abs(avg-v1[i][j])){ //���ٸ� ������? 
				if(minvalue<v1[i][j]) minvalue=v1[i][j]; //���߿� ū�� ����.
				 
			}
		}
		v.push_back({avg,minvalue});
	}
	for(int i=0;i<9;i++){
		cout<<v[i].first<<" "<<v[i].second<<'\n';
	}		
}


