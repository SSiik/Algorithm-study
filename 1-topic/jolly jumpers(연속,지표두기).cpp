#include <iostream>
#include <cmath>
#include <string>
using namespace std;

/*
N���� ������ �̷���� ������ ���� ���� ������ �ִ� �� ���� ���� 1���� N-1������ ���� 
��� ������ �� ������ ������ ����(jolly jumper)��� �θ���. ���� ��� ������ ���� ������
�� 1 4 2 3 �� �ڿ� �ִ� ���� ���� ���� ���� ���� 3 ,2, 1�̹Ƿ� �� ������ ������ ���۰� 
�ȴ�. � ������ ������ �������� �Ǵ��� �� �ִ� ���α׷��� �ۼ��϶�
*/

int ch[100];
int main() { 
    //���� ���� 1~N-1 ������ ���� �����°�.
	int N,tmp,pre;
	cin>>N;
	
	for(int i=0;i<N;i++){
		cin>>tmp;
		if(i==0){
			pre=tmp;
		}
		else{
			ch[abs(tmp-pre)]++;  //���ó� ī��Ʈ�迭�� �̿��մϴ�. 
			pre=tmp;
		}
	}
	
	for(int i=1;i<N;i++){
		if(ch[i]!=1){  //�� ī��Ʈ�迭�� ���� �ִ��� Ȯ��. 
			cout<<"NO";
			return 0;
		}
	}
	cout<<"YES";
	return 0;
}
	

