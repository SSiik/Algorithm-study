#include <iostream>

using namespace std;

/*
   LRU ��å (īī�� ĳ�ù��� ����) 
   ��Ժ��� �ܼ��մϴ�. �ֳ����� �迭���� ã�ƺ���.
   �� �ڷ� ��ĭ�� �̷��д����� �Ǿտ� �ε��� 0�� ���� �����͸� �ֽ��ϴ�.
   �����ϴ� ���䵵 �ű⸦ �������� �տ��� ���ܿ���ǰ���. (��ġ �ű��) 
*/


int ch[10];
int main() {
	int S,N,tmp;
	cin>>S>>N;
	for(int i=0;i<N;i++){
		cin>>tmp;
		int loc;
		bool flag = false;
		for(int i=0;i<S;i++){
			if(ch[i]==tmp){
				flag=true;
				loc=i;
				break;
			}
		}
		if(flag){
			for(int i=loc;i>0;i--){
				ch[i]=ch[i-1];
			}
			ch[0]=tmp;
		}
		else{
			for(int i=S-1;i>0;i--){
				ch[i]=ch[i-1];
			}
			ch[0]=tmp;
		}
	}
	
	for(int i=0;i<S;i++){
		cout<<ch[i]<<" ";	
	}
	 
}
