#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

/*
	������ ��ǻ�Ͱ� ���̷����� �ɷ� ����ܾ �پ��� ��ҹ��ڰ� ȥ�յǾ� ǥ���ȴ�. 
���� ��� �Ƹ��ٿ� �̶� ���� ������ �ִ� beautiful �ܾ ��bE au T I fu L�� �� ���� 
��ǻ�Ϳ� ǥ�õǰ� �ֽ��ϴ�. ���� ���� ������ ǥ�õǴ� ����ܾ ������ ǥ����� ������ 
�����ϰ� �ҹ���ȭ ���� ����ϴ� ���α׷��� �ۼ��ϼ���.

sol)
getline(cin,���ڿ�����) �̿��ϸ� "������ ������ ���ڿ�"�� ������ �ֽ��ϴ�.
���� cin�� ������ ���ԵǸ� �޾����� �ʴ°� �����ϴ�. 
cstring ���̺귯���� ����Ѱ��� string ���̺귯����? 
*/
int main() {

	// 97~122  65~90
	string tmp,result="";
	getline(cin,tmp);
	for(int i=0;i<tmp.size();i++){
	   if(tmp[i]>=97 && tmp[i]<=122){
	   		result += tmp[i];
	   }
	   else if(tmp[i]>=65 && tmp[i]<=90){
	   		result += (char)((int)tmp[i]+32);
	   }
	   else{  //���鹮�ڸ� �׳� ����� �����Խ�Ŵ. 
	   		continue;
	   }
	}
	cout<<result;
}

