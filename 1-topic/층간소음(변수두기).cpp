#include <iostream>
#include <cmath>
#include <string>
using namespace std;

/*
	T���� ���� ����Ʈ�� �������� �߻� �� ������ �߻��� �����ϱ� ���� ���� ����Ʈ�� ���� �� 
�ٴڿ� ���������� ��ġ�߽��ϴ�. �� ������ �� ������ ���� �������� ����ġ�� �ʴ����� ��
��Ʈ �����ǿ� �ǽð����� �����մϴ�. �׸��� �� ������ ����ġ�� M���� ������ ����ȣ���� 
���� �溸���� ������ ����Ϳ��� �︳�ϴ�. �� ������ N�� ������ �ǽð� ����ġ�� �־����� 
�ִ� �������� �溸���� �︰ �ð��� ���ϼ���. �溸���� ������ -1�� ����մϴ�
*/

int main() { // sol, �ִ� �������� �︰�ð��� ��ǥ�ν� ����մϴ�. 
	int maxcount=-2147000000,pre=-5;  //������ ����, �ִ� Ƚ���� ���ϸ鼭 count�� �ٽ�0���� ȸ��. 
	int N,M,val,count=0;
	cin>>N>>M;
	for(int i=0;i<N;i++){
		cin>>val;
		if(val>M){
			count++;
		}
		else{
			if(count>maxcount) maxcount=count;
			count=0;
		}
	}
	if(count>maxcount) maxcount=count;
	cout<<maxcount;
}
	

