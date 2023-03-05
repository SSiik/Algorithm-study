#include <iostream>
#include <cmath>
#include <string>
using namespace std;

/*


N���� �ڿ����� �ԷµǸ� �� �ڿ����� �ڸ����� ���� ���ϰ�, 
�� ���� �ִ��� �ڿ����� ����ϴ� ���α׷��� �ۼ��ϼ���. 
�� �ڿ����� �ڸ����� ���� ���ϴ� �Լ��� int digit_sum(int x)�� 
�� �ۼ��ؼ� ���α׷��� �ϼ���.
*/


int digit_sum(int x){
	int sum=0;
	while(x >= 10){ //�������� �������¼� ��������. 
		sum += (x%10);  
		x=x/10;   //�ʱ�ȭ ���ִ°���!
	}
	sum += x;  //������ ������ ó��? 
	return sum;	
}

int main() {
	int value[100];
	int N,tmp;
	pair<int,int> max = {0,0};  //���⼱ pair�� �̿��߽��ϴ�.
	cin>>N;
	for(int i=0;i<N;i++){
		cin>>tmp;
		int result = digit_sum(tmp);
		
		if(result > max.second){
			max.first = tmp;
			max.second = result;
		}
		else if(result == max.second){
			if(tmp > max.first){
				max.first=tmp;
			}
		}
	}
	cout<<max.first;
}

