#include <iostream>
using namespace std;


int N,sum=0,sum2=0;
int ch[10];
int ch2[10]; 
// DFS�� �ܺ������� �����ϴ� ��찡 ����. 
// �ܰ踦 �ö󰡰ų�, Ž���ϴ� ���� ��������. 

void DFS(int L){
	if(L==N){
		return;
	}
	if( sum2 == sum/2 ){
		cout<<"YES";
		exit(0);
	}
	sum2 += ch[L]; // "������ �ϳ� ���ϳ�"�� ���⼱ ����� ǥ���մϴ�. 
	DFS(L+1);
	sum2 = sum2-ch[L]; //���� �����ܰ�(�����ε���)�� ����.
	DFS(L+1); 
	
	
}


int main() {
	cin>>N;
	for(int i=0;i<N;i++){
		cin>>ch[i];
		sum += ch[i];
	}
	if(sum%2==1) {  
	    // Ȧ���� ������ �Ҽ������� ���͹���.. �ڿ����� �����δ� �Ҽ����� ���ü�����.
		// �̷� ���ܻ����� ó���ϴ°� �ʹ� ������ ����. 
		cout<<"NO"; 
		return 0;	
	}
	DFS(0);
	cout<<"NO";
}


