#include <iostream>
#include <cmath>
using namespace std;

// ����� ���ϱ�. 
int main() {

	int N,sum=1;
	cin>>N;
	cout<<1;
	for(int i=2;i<N;i++){
		if(N%i==0){
			sum += i;
			cout<<" + "<<i;
		}
	} //�� �ڽ��� �������ϴ� ����� Ȯ�ΰ���
	// "="�� �������� ���ͼ� ����Ҽ� �ֽ��ϴ�.
	// ��� �ݺ��������� Ȯ���մϴ�. "+ ���� "�� �ݺ������Դϴ�. 
	cout<<" = "<<sum;
}

