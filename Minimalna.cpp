#include<iostream>
#include<cstdlib>

using namespace std;

int main()
{
	
	int min, tab[]={2, 6, 5, 7, 3, 5, 11, 8, 4, 9}; 
	
	min=tab[0];
	
	for(int i=1; i<10; i++) 
		if(min>tab[i])
		min=tab[i];
	
	cout<<"minimalna liczba jest  "<<min<<endl;
	
	system("pause");
	return 0;
}
