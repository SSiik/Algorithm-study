#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

/*
   �ڿ��� N�� �ԷµǸ� N! ������ ���� �ڸ����� ���������� ��0���� �� �� �ִ��� ���ϴ� ���α�
���� �ۼ��ϼ���.
���� 5! = 5*4*3*2*1 = 120 ���� �����ڸ����� �������� ��0���� ������ 1�Դϴ�.
���� 12! = 479001600���� �����ڸ����� �������� ��0���� ������ 2�Դϴ�.

*/

int main() {
	int N,tmp,numOftwo=0,numOffive=0;   
	cin>>N;
	for(int i=2;i<=N;i++){
		tmp=i;
		int first=2;
		while(1){
			if(tmp%first==0){
				if(first==2) numOftwo++;
				else if(first==5) numOffive++;
				
				tmp=tmp/first;
				if(tmp==1) break;
			}
			else{
				first++;
			}
		}
	}  //���丮�󰪿��� 2�� ������ 5�� ������ ã���ϴ�. 
	
	if(numOftwo <= numOffive){
		cout<<numOftwo;
	}
	else{
		cout<<numOffive;
	}
		

}
