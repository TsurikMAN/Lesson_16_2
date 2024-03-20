


#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <ctime>


using namespace std;

int main()
{
	
	
	const int N=22;

	int array[N][N];
	
	for (int i = 0; i < N; i++)
	{
		cout << i+1 << " Line|";
		for (int j = 0; j < N; j++)
		{
			array[i][j] = i + j;
			cout << array[i][j]<<" ";
		}
		cout << endl;
	}
	cout << endl;
	
	int sum=0;
	time_t t;
	time(&t); 
	int day = localtime(&t)->tm_mday;
	int line = day % N;
	int line1 = (day % N) + 1;
	int line2 = day/N;
	
	cout << "The date is: " << day <<endl;
	cout << day << "/" << N<<" = " << line2 << " and "<<line1<<" modulo" << endl;
	cout << "We choose the " << line1<<" line" << endl;
	cout << "Sum of "<<line1<<" line: ";

	for (int x = 0; x < N; x++)
		{	
		sum += array[line][x];
		}
		
	for (int k = 0; k < N; k++)
	{
		cout << array[day % N][k];
		if (k < (N - 1))
		{
			cout << "+";
		}
	}
	cout <<"=" << sum << endl;

	return 0;
	
}

