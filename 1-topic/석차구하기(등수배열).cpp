#include <iostream>
#include <vector>
#include <string>
using namespace std;

/*
	N���� �л��� ���������� �ԷµǸ� �� �л��� ������ 
	�Էµ� ������� ����ϴ� ���α׷��� �ۼ��ϼ���.
	
	sol) ������ϱ�.
	���δ� �ϴ� 1���̶�� �����ϴ� �迭.
	�����ϳ� ���, �������� ���ؼ� ���� �۴ٸ� �� ������ �÷������ϴ�.(�������°���) 
*/

int ch1[100],ch2[100];
int main() { 
    int N,tmp;
	cin>>N;
	for(int i=0;i<N;i++){
		cin>>ch1[i]; //�Է°���. 
		ch2[i]=1;  //����迭. 
	}
	for(int i=0;i<N;i++){
		for(int j=0;j<N;j++){ //i�� �������� j�� �� Ž���غ�. i�� ������ ����. 
			if(ch1[i]<ch1[j]) ch2[i]++; 
		}
	}
	for(int i=0;i<N;i++){
		cout<<ch2[i]<<" ";
	}
	return 0;	 
}
	

