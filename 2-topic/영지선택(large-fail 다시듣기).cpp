#include <iostream>
#include <vector>
using namespace std;

/*

*/


int main() {
	int H,W,x,y;
	cin>>H>>W;
	vector< vector<int> > v(H,vector<int>(W,0));
	for(int i=0;i<H;i++){
		for(int j=0;j<W;j++){
			cin>>v[i][j];	
		}
	}
	cin>>x>>y;  //x행 y열 만큼의 정보.
	
	int sum=0;
	vector< pair<int,int> > v1;
	for(int i=0;i<=H-x;i++){
		for(int k=i;k<i+x;k++){
			for(int j=0;j<y;j++){
				sum+= v[k][j];
			}
		}
		v1.push_back({i,sum});
		sum=0;
	}
	
	
}


