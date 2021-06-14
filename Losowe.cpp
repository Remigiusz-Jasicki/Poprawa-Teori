#include <iostream>
#include <cstdlib>
#include <ctime>

int main()
{
    srand( time( NULL ) );
    std::cout << "Wylosowanie pierwsze: " <<(( std::rand() % 9 )) << std::endl;
    int liczba =( std::rand() % 1 ) + 12;
    std::cout << "Wylosowanie drugie: " << liczba << std::endl;

	return 0;
}
