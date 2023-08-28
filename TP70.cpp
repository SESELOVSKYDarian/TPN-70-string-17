#include <iostream>
#include <string>
using namespace std;
bool EsNombreElegante(string f);
int main()
{
    string frase;
    string msg="No es un nombre elegante";
    cout<<"Ingrese la frase: ";
    getline(cin, frase);
    if (EsNombreElegante(frase))
    {
    	msg="Es un nombre elegante";
	}
    cout<<msg<<endl;
	return 0;
}

bool EsNombreElegante(string f)
{
	bool flag=false;
	if (f.front () == 'A' && f.back () == 'A')
	{
		flag=true;
	}
	return flag;
}