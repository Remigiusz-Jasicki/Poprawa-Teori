#include <iostream>
#include <string>
#include <fstream>

using namespace std;
class pliczek{	
    public:
        pliczek(string const& Sciezka ){
            fstream pliczek;
            pliczek.open("dane.txt", ios::in);
            if(pliczek.good()  == true){
            	while(!pliczek.eof()){
            	cout << pliczek;
        		}
        		cout << "Nie udalo sie otworzyc pliku! ERROR" << endl;
                pliczek.close();
            }
        } 
};
class slowo{
	string slowo;
	public:
		slowo(string);
		bool sprawdz_czy_palindrom(string str){
        	for (int i=0; i<str.length()/2; i++)
           		if (str[i] != str[str.length()-1-i]) 
              	return false;

    		return true;
		}
};
int main(){
    slowo ("zakaz");
	cout << "palindrom" << slowo.czy_palindrom();
    return 0;
}
