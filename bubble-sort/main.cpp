#include <iostream>

using namespace std;

// vector

int i, j, temp, num, vector1[6];

main ()
{
	for (i=1; i<=5; i=i+1)
	{
		cout << "Digite un numero " << i << "--> ";
		cin >> vector1[i];
		
	}
	for (i=1; i<=5; i=i+1)
	{
		cout << "El numero " << i << " = " << vector1[i] << endl;
		
	}
// Ordenamiento Burbuja 

    for (i=1; i<= 4; i++ )
    {
    	for (j=1; j <= 5-i; j++)
    	{
    		
        //ordenamiento de menor a mayor
        
    		if (vector1[j] > vector1[j+1])
    		{
    			temp= vector1[j+1];
    			vector1[j+1]= vector1[j];
    			vector1[j]= temp;
    			
			}
		}
	}
	cout << "El vector ordenado es: " << endl; 
	for (i=1; i<= 5; i=i+1)
	{
		cout << "El numero" << i << " = " << vector1[i] << endl;
	}
        
}
