/*
	BetweenAdder.cpp
*/

#include <iostream.h>

int main(void)
{
	int val1, val2;
	int result=0;

	cout<<"�ΰ��� ���� �Է� : ";
	cin>>val1>>val2;

	if(val1<val2)	//val2�� ũ�ٸ�.
	{
		for(int i=val1+1; i<val2; i++)
			result+=i;
	}
	else			//val1�� ũ�ٸ�.
	{
		for(int i=val2+1; i<val1; i++)
			result+=i;
	}

	cout<<"�� �� ���̿� �����ϴ� ������ �� : "<<result<<endl;

	return 0;
}