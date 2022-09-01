#include <iostream>
#include <cmath>
#include <string>
using namespace std;

/*
	�ڿ��� N�� �ԷµǸ� 1���� N������ �Ҽ��� ������ ����ϴ� ���α׷��� �ۼ��ϼ���. 
	���� 20�� �ԷµǸ� 1���� 20������ �Ҽ��� 2, 3, 5, 7, 11, 13, 17, 19�� �� 8���Դϴ�.
	���ѽð��� 1���Դϴ�.
	
	�Ҽ��� ��Ժ��� ��������� �����̹Ƿ� ���⼭�� ��Ʈ�� ���ȴٴ°� �����սô�. 
*/

bool isPrime(int x){
	for(int i=2;i<=sqrt(x);i++){  //�Ҽ� �Ǻ��Ҷ��� sqrt�� ����Ҽ��ִٴ��� 
		if(x%i==0){
			return false;
		}	
	}
	return true;
}

int main() { 
	int N,count=0;
	cin>>N;
	for(int i=2;i<=N;i++){
		if(isPrime(i)) count++;
	}
	cout<<count;
}
	

