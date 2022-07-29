// On veut affiher les nombre qui vont de 10 à 0 

#include <iostream>
using namespace std;

int main()
{
	int nombre(10);
	while (nombre >= 0)
	{
		cout << nombre  << endl;

		--nombre; // sortir de la boucle
	}
	cout << "sortie de la boucle" << endl; 

	return 0;
}