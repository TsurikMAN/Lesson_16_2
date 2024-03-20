


#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <ctime>


using namespace std;

int main()
{
	
	
	const int N=10;

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
	int line = (day % N)+1;
	
	cout << "The date is: " << day <<endl;
	cout << "Date%Count of lines = " << line<<endl;
	cout << "Sum of "<<line<<" line: ";

	for (int x = 0; x < N; x++)
		{	
		sum += array[day % N][x];
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

