#include <iostream>
#include <string>
#include <cmath>
using namespace std;

/*
     ź��(C)�� ����(H)�θ� �̷���� ȭ�չ��� źȭ���Ҷ�� �մϴ�.
	ź��(C) �� ���� ������ 12g, ����(H) �� ���� ������ 1g�Դϴ�.
	��ƿ��(C2H4)�� ������ 12*2+1*4=28g�Դϴ�.
	��ź(CH4)�� ������ 12*1+1*4=16g�Դϴ�.
	źȭ���ҽ��� �־����� �ش� ȭ�չ��� ������ ���ϴ� ���α׷��� �ۼ��ϼ���.

	H��ġ�� ã���� �ݷ����� ����������
            ���� �ݷ����� �����ϵ��� �߽��ϴ�. �� ���߿� H��ġ�� ����صξ���.
            ����ó��(��������� ���)�ؼ� ���ڿ� ��ü���̿͵� �����־���մϴ�. H������ġ��.
*/

int main() {
	 string s;
	 cin>>s;
	 int locC,locH,res=0;
	 string cvalue="",hvalue="";
	 for(int i=1;i<s.size();i++){
	 	if(s[i]=='H'){
	 		if(i==1){
	 			res=12; locH=i; break; 
			}
			else{
				res = 12*stoi(cvalue); locH=i; break;
			}
		}
		else{
			cvalue += s[i];
		}
	}
	
	if(locH+1 == s.size()) res += 1;  //�ʰ��Ѱ�. �������ΰ�. 
	else{
		for(int i=locH+1;i<s.size();i++){
			hvalue += s[i];
		}
		res += stoi(hvalue);
	}
	
	cout<<res;
}
