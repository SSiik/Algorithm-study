#include <iostream>
#include <cmath>
#include <string>
using namespace std;


/*
	�ڿ��� N�� �ԷµǸ� 1���� N������ �� ���ڵ��� ����� ������ ����ϴ� ���α׷��� �ۼ��ϼ���. 
	���� N�� 8�� �Էµȴٸ� 1(1��), 2(2��), 3(2��), 4(3��), 5(2��), 6(4��), 7(2��), 8(4��) 
	�� ���� �� ������ ����� ������ �������ϴ�. 
	����� ������ ���� 1���� ���ʴ�� ����� ������ ����ϸ� �˴ϴ�. 
	1 2 2 3 2 4 2 4 �� ���� ����Ѵ�.
*/
int main() {
	int N;
	int arr[50001];  //ī��Ʈ �迭 
	arr[1]=1;
	cin>>N;
	for(int i=1;i<=N;i++){
		int count=0;
		for(int z=1;z<=sqrt(i);z++){  //����� ������ ��Ʈ�� ���� sqrt() 
			if(i%z==0){
				if((i/z)==z) count++;
				else count += 2;
			}
			arr[i]=count;
		}
	}
	for(int i=1;i<=N;i++){
		cout<<arr[i]<<" ";
	}
}

