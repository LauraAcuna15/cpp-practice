#include <iostream>

using namespace std;

int i, num, notas[6], buscar_cod, codigo_ok;

char nombres [7][10]= {"", "Gustavo","Santiago","Angela", "Sara", "Jorge","Laura"};

main ()
{
	for (i=1; i<=6; i=i+1)
	{
		cout << "Digite el numero " << i << "--> ";
		cin >> num;
		notas [i] = num;
		
	}
	for (i=1; i<=6; i=i+1)
	{
		cout << "El numero " << notas[i] << " nombre --> " << nombres [i] << endl;

		
	}
	
	cout << "Que codigo quiere buscar";
	cin >> buscar_cod;
	for (i=1; i<=6; i=i+1)
	{
		if (buscar_cod == notas[i])
		    {
		   	    codigo_ok = i; 
		    }
	}
	cout << "El codigo " << notas[codigo_ok] << " corresponde a --> " << nombres [codigo_ok] << endl;
	
}
