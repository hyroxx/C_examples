#include <iostream>

using namespace std;

 double evaluatePolynomial(double p[],int size,int a)
{
	int j = 0;
	double result = 0;
	for( j = 0;j<size;j++)
	{
		result = result + p[j]*(a^j);
		
	}

	return result;
}
void addPolynomials(double p1[],double p2[],double p3[],int size)
{
	for(int i = 0; i<size;i++)
	{
		p3[i] = p1[i]+p2[i];
	}
}

void multiplyPolynomials(double p1[],double p2[],double p3[],int size)
{
	for(int i = 0;i<size;i++)
	{
		cout << endl;
		for(int j = 0;j<size;j++)
		{
			if(i == 0)
			{
				p3[j] = p1[i]*p2[j];
				cout << p3[j];
			}
			else
			{
				p3[i+j] = p3[i+j] + (p1[i]*p2[j]);
				cout << p3[i+j];
			}
		}
	}
}

void printPolynomial(double p[],int size)
{
	bool first_element = true;
	for(int i = size-1;i>=0;i--)
	{
		if(p[i] != 0)
		{
			if(i == 0)
			{
				if(first_element)
				{
					cout << p[i];
					first_element = false;
				}
				else
				{
					cout << "+" << p[i];
				}
				
			}
			else
			{
				if(p[i] > 0)
			{
				if(first_element)
				{
					cout << p[i] << "x^" << i;
				    first_element = false;
				}
				else
				{
					cout << "+" << p[i] << "x^" << i;
				}
				
			}
			if(p[i] < 0)
			{
				cout <<  p[i] << "x^" << i;
				first_element = false;
			}
			}
			
		}
	}
}
int main()
{
	int N = 10;
	int i=0;
	

   
	double arr1[N] = {1 ,0 ,-3, 4, 0, 0, 0, 0, 0, 0};
	double arr2[N] = {0, 0, 0, 2, -1, 0, 0, 1, 0, 0};
	double arr3[N+N];
	
 
    for ( i = 0; i<2*N; i++) {
  arr3[i] = 0; 
   }

addPolynomials(arr1,arr2,arr3,N);
printPolynomial(arr3,N);
multiplyPolynomials(arr1,arr2,arr3,N);
printPolynomial(arr3,N+N);
printPolynomial(arr2,N);
	int result = evaluatePolynomial(arr2,N,5);
	cout << result;
	
}
