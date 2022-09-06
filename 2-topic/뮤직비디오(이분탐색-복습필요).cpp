#include <iostream>
#include <algorithm>

using namespace std;

/*
 
*/

int ch[1000],N;

int Count(int s){
	int cnt=1,sum=0; //cnt�� ���� �����Դϴ�. 
	for(int i=0;i<N;i++){
		if(sum+ch[i] > s){ //�Ѱ踦 �ʰ�������. �̸� Ȯ��. 
			cnt++;
			sum=ch[i]; //���� �׸��� ��� �� ���� �߿�. 
		}
		else{
			sum += ch[i];
		}  
	}
	return cnt;
} 


int main() {
	int M,mid,res,maxx=-2147000000;
	int lt=1,rt=0;
	cin>>N>>M;
	for(int i=0;i<N;i++){
		cin>>ch[i];
		rt += ch[i]; //�� ��ġ�°� ���� rt�� �˴ϴ�. ���� ���� ���̿� �����״ϱ��.
		if(ch[i]>maxx) maxx=ch[i]; //���� ū ���� ã���ϴ�. 
	}
	
	//�츰 DVD �� �ּ� �뷮 ũ�⸦ ã�ƾ��մϴ�. e.g) 1~45 ���̿� ����. 
	while(lt<=rt){ //�̺�Ž���� ���� �������� �غ� ����. 
		mid=(lt+rt)/2; // ���� lt=1 �� rt(�� ��ģ��) ���̿� ������ �����ϱ⶧���� ���� ���̿��� �����մϴ�.
		if(mid>= maxx && Count(mid) <= M){
		//�� ������ �� ������� �����Ϸ��� �غ��ô�.
		/*
		  �� ������ �Է°�(maxx)���� mid�� �翬�� ũ�ų� ���ƾ��մϴ�.
		  ��� ���ҵ� ����´ٸ� �װ� ���� �ȵǴ°Ű���. (����� �翬�Ѱ�)
		  
		  �׸��� ������ DVD �뷮���� ������ ������ ������ m���� �۰ų� ���ƾ߰���.	
		*/ 
			res=mid; //�ϴ� res�� �������� rt�� ���缭 �����ʿ��� ã�ƺ��ϴ�. 
			rt=mid-1; 
		}
		else{
			lt=mid+1;
		} 	
	}
	cout<<res<<'\n'; 
}
