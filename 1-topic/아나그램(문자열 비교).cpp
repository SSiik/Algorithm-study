#include <iostream>
#include <cmath>
#include <string>
using namespace std;

/*
Anagram�̶� �� ���ڿ��� ���ĺ��� ���� ������ �ٸ����� �� ������ ��ġ�ϸ� �� �ܾ�� ��
���׷��̶�� �մϴ�. 
���� ��� AbaAeCe �� baeeACA �� ���ĺ��� ���� ������ �ٸ����� �� ������ ���캸�� 
A(2), a(1), b(1), C(1), e(2)�� ���ĺ��� �� ������ ��� ��ġ�մϴ�. �� ��� �� �ܾ �� 
�迭�ϸ� ����� �ܾ �� �� �ִ� ���� �Ƴ��׷��̶� �մϴ�.
���̰� ���� �� ���� �ܾ �־����� �� �ܾ �Ƴ��׷����� �Ǻ��ϴ� ���α׷��� �ۼ��ϼ�
��. �Ƴ��׷� �Ǻ��� ��ҹ��ڰ� ���е˴ϴ�	
*/

char ch1[52];  //�� ���ڿ����� �빮�� 26�� �ҹ��� 26���� ���� "ī��Ʈ"�迭. 
char ch2[52];
int main() { 
	
	string input1,input2;
	cin>>input1>>input2;

	if(input1.size() != input2.size()){
		cout<<"NO"; return 0;
	}
	//0~25 �빮�� 26~51  (+26-1)  97�� 26�� 
	for(int i=0;i<input1.size();i++){
	  if(input1[i]>=65 && input1[i] <= 90){
	  	  ch1[(int)input1[i]-65]++;
	  }
	  else{
	  	  ch1[(int)input1[i]-71]++;	
	  }
	}
	
	for(int i=0;i<input2.size();i++){
	  if(input2[i]>=65 && input2[i] <= 90){
	  	  ch2[(int)input2[i]-65]++;
	  }
	  else{
	  	  ch2[(int)input2[i]-71]++;	
	  }
	}
	
	for(int i=0;i<52;i++){
		if(ch1[i] != ch2[i]){ //��밹���� �ٸ��� �߰����ڸ���. 
			cout<<"NO";
			return 0;
		}
	}
	cout<<"YES";
	return 0; 
}
	

