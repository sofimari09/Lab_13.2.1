#include <iostream>
#include <cmath>
#include <stdio.h>

using namespace std;
#define z 6

#define INPUT(x) cin>>x //ввід
#define PRINT(str) cout<<(str) //вивід
#define ENDL cout << endl //новий рядок

#define SQUARE(x) ((x)*(x)) //квідрат

#define MIN(x,y) (((x)<(y))?(x):(y)) //мінімум
#define MAX(x,y) (((x)>(y))?(x):(y)) //максимум

int main()
{
	double x, y, w;
	//користувач вводить значення змінних
	PRINT("x= "); INPUT(x);
	PRINT("y= "); INPUT(y);
	PRINT("z= "); PRINT(z); ENDL;

	//обчислення функції
#if z>5 && z<10
	w = MIN(x,z) * MAX(x+z, x*z);
#elif z<=5 || z>=10
	w = SQUARE(MAX(abs(x-z), z));
#endif

	//вивід результатів обчислення
	PRINT("w= "); PRINT(w); ENDL;
}