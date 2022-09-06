#include <iostream>
#include <algorithm>

using namespace std;

/*
 ������ N���� ���ڰ� �Է����� �־����ϴ�. N���� ���� ������������ ������ ���� N���� �� 
�� �� ���� ���� M�� �־����� �̺а˻����� M�� ���ĵ� ���¿��� �� ��°�� �ִ��� ���ϴ� 
���α׷��� �ۼ��ϼ���
*/

int ch[1000000];
int main() {
	int N,M,idx,start,end;
	cin>>N>>M;
	for(int i=0;i<N;i++){
		cin>>ch[i];
	}
	sort(ch,ch+N); //algorithm����� sort�Լ��� �迭�� ����.
	start=0; end=N-1;
	
	
	while(start<=end){  //�������� ������ �Ѿ�� �����ϴ�.
	                    // ������ <= ����. 
		idx= (start+end)/2;
		if(ch[idx] > M){
			end = idx-1; continue;
		}
		else if(ch[idx]==M){
			cout<<idx+1; return 0;
			// idx�� ���°������ ���̰������ϱ�.
			//idx +1 ��������մϴ� idx�� 0�̸� �����δ� 1��°�ϱ��. 
		}
		else{
			start=idx+1;
		}
	} 
}
