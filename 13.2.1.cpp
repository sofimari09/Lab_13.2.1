#include <iostream>
#include <cmath>
#include <stdio.h>

using namespace std;
#define z 6

#define INPUT(x) cin>>x //���
#define PRINT(str) cout<<(str) //����
#define ENDL cout << endl //����� �����

#define SQUARE(x) ((x)*(x)) //������

#define MIN(x,y) (((x)<(y))?(x):(y)) //�����
#define MAX(x,y) (((x)>(y))?(x):(y)) //��������

int main()
{
	double x, y, w;
	//���������� ������� �������� ������
	PRINT("x= "); INPUT(x);
	PRINT("y= "); INPUT(y);
	PRINT("z= "); PRINT(z); ENDL;

	//���������� �������
#if z>5 && z<10
	w = MIN(x,z) * MAX(x+z, x*z);
#elif z<=5 || z>=10
	w = SQUARE(MAX(abs(x-z), z));
#endif

	//���� ���������� ����������
	PRINT("w= "); PRINT(w); ENDL;
}