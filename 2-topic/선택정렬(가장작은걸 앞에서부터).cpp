#include <iostream>
using namespace std;

/*
	��������: �������� ���ں��� �տ��� ä���ֽ��ϴ�. 
*/

int ch[100];
int main() {
	 int N,idx,tmp;
	 cin>>N;
	 for(int i=0;i<N;i++){
	 	cin>>ch[i];
	 }
	 for(int i=0;i<N-1;i++){ //�������� ���ĵ������Ŵ� ���ص��ȴ�. 
	 	idx=i;
	 	for(int j=i+1;j<N;j++){
	 	  	if(ch[idx]>ch[j]) idx=j; 
			//idx�� ������������ �ε����� ���. 
			//������������ ���������� �ڿ��͵�� ��� Ȯ��. 
		}
		tmp=ch[i];
		ch[i]=ch[idx];
		ch[idx]=tmp;
	 }
	 for(int i=0;i<N;i++){
	 	cout<<ch[i]<<" ";
	 } 
}
