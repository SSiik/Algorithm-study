#include <iostream>
#include <cmath>
#include <vector>
using namespace std;

/*
  각 행의 평균과 가장 가까운값. 
*/

int v1[9][9]; 
int min=2147000000;
int main() {
	//이제 cmath의 기본함수는 소수점 첫번째 자리를 반올림하는 기능만 제공합니다. 
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
				min= abs(avg-v1[i][j]);  //간격 저장 
				minvalue = v1[i][j];  //그에 대한 값 저장. 
			} 
			else if(min==abs(avg-v1[i][j])){ //같다면 간격이? 
				if(minvalue<v1[i][j]) minvalue=v1[i][j]; //둘중에 큰걸 저장.
				 
			}
		}
		v.push_back({avg,minvalue});
	}
	for(int i=0;i<9;i++){
		cout<<v[i].first<<" "<<v[i].second<<'\n';
	}		
}


