#include <iostream>
#include <cmath>
using namespace std;

/*
N(2<=N<=100)���� ���̰� �Էµ˴ϴ�. 
�� N���� ��� �� ���� �������̰� ���� ���� ���� 
�� ���ϱ��? �ִ� ���� ���̸� ����ϴ� ���α׷��� �ۼ��ϼ���.
*/
int main() {
	int max = -2147000000;
	int min = 2147000000;
	int a,N;
	cin>>N;
	for(int i=0;i<N;i++){
		cin>>a;
		if(a>max) max=a;
		if(a<min) min=a;
	}
	// ���� ū ������ ���� �������� ���ָ� �ǰ���. �Է°��߿���. 
	cout<<max-min;
	
}

