#include <iostream>
#include <vector>
using namespace std;

/*
  ��Ƽ�½�ŷ -> ȸ������ (������ �����̼� �� ����ִ� ģ�����۾�)
                         (����ִ� ģ������ �۾��Ϸ������? -> ó��)
						 (����ó�� ���� ��ƽ��ϴ�.) 
*/



int main() {
	int N,K,pos=1,cnt=0,sum=0;
	vector<int> v(N+1);
	cin>>N;
	for(int i=1;i<=N;i++){
		cin>>v[i];
		sum += v[i];
	}
	cin>>K;
	if(K>=sum){
		cout<<"-1\n"; return 0;  
	} //��ģ�ͺ��� K�� ������ �̹� ��ó��������. ����ȭ�Ҽ� �ִ� ���? 
	
	while(1){
		//ȸ������. 
		if(pos>N) pos=1;  //������ �����̼� -> �߿䰳��. 
		if(v[pos] > 0){ //����ִ°͸� ī���ͷ� ģ��. 
			if(cnt==K){
				cout<<pos;
				break;
			}
			v[pos]--;
			cnt++; //����ִ°� �۾��ߴٴ� ī��Ʈ. 
		}
		pos++;
	}
}


