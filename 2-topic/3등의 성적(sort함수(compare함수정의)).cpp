#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

/*
	N���� ���м����� �־����� �� �� 3���� �� ���м����� ����ϴ� ���α׷��� �ۼ��ϼ���.
���� �л��� ������ 100���� 3��, 99���� 2��, 98���� 5��, 97���� 3�� �̷������� ������ 
�����Ǹ� 1���� 3���̸�, 2���� 2���̸� 3���� 5���� �Ǿ� 98���� 3���� �� ������ �˴ϴ�.
	 
*/

bool compare(int a,int b){
	return a>b;  //������ũ���ϸ� ū�� �������� ������ ������������ ����. 
}
int main() {
	 int N,tmp;
	 cin>>N;
	 vector<int> v(N);
	 for(int i=0;i<N;i++){
	 	cin>>v[i];
	 }
	 sort(v.begin(),v.end(),compare); 
	 // ��ﳭ�� ���� compare�Լ��� ���� ���������, �������ķ� ������ִ�. 
	 
	 int count=1;  //�տ����� ���� ������ �ٸ��� ���غ���! 
	 for(int i=1;i<N;i++){
	 	if(v[i] != v[i-1]){
	 		count++; 
		}
		if(count==3){
			cout<<v[i];
			break;
		}
	 } 
	 
}
