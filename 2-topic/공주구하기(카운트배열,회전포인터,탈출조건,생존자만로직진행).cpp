#include <iostream>
#include <vector>
using namespace std;

/*
  ���� ���ϱ� ����. 
*/



int main() {
	int N,K,cnt=0,pos=0,bp=0;
	cin>>N>>K;
	vector<int> ch(N+1); //�� �� ���ͷ� �ϴϱ� �ǳ�... 
	// K�� ��ģ����� ���ܵǴ� �̴ϴ�.


	while(1){
		pos++;
		if(pos>N) pos=1; //������ ȸ����Ű��.. 
		if(ch[pos]==0){  //0�϶� ����������� ���°�. 
			cnt++;
			if(cnt==K){
				ch[pos]=1;
				cnt=0;
				bp++; 
			}
		}
		if(bp==N-1) break; // �� �������ϰ� Ż������, ���������� ��ǥ�� �δ°� ����. 
	}
	
	for(int i=1;i<=N;i++){
		if(ch[i]==0){
			cout<<i<<'\n';
			break;
		}
	}
}


