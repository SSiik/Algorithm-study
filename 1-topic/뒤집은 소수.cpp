#include <iostream>
#include <cmath>
#include <string>
using namespace std;

/*
N���� �ڿ����� �ԷµǸ� �� �ڿ����� ������ �� �� ������ ���� �Ҽ��̸� �� ���� ����ϴ� 
���α׷��� �ۼ��ϼ���. ���� ��� 32�� �������� 23�̰�, 23�� �Ҽ��̴�. �׷��� 23�� ���
�Ѵ�. �� 910�� �������� 19�� ����ȭ �ؾ� �Ѵ�. ù �ڸ������� ���ӵ� 0�� �����Ѵ�.
������ �Լ��� int reverse(int x) �� �Ҽ������� Ȯ���ϴ� �Լ� bool isPrime(int x)�� �ݵ�� 
�ۼ��Ͽ� ���α׷��� �Ѵ�
*/

int reverse(int x){
	string result="";
	while(x>10){
		result += to_string(x%10);  //to_string�� �ٷ� ���� �ִ� �޼ҵ�! 
		x=x/10;
	}
	result += to_string(x);
	return stoi(result);  //�������� �ִ� �������� �ִ���. 
}

bool isPrime(int x){
	for(int i=2;i<x;i++){ //�Ҽ� �Ǵ��̹Ƿ� �ڱ�� ����. 
		if(x%i==0) return false; 
	}
	return true; 
} 

int main() { 
	int N,val;
	cin>>N;
	for(int i=0;i<N;i++){
		cin>>val;
		int a=reverse(val);
		if(isPrime(a)) cout<<a<<" ";
	}
}

