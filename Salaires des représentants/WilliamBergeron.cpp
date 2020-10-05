// But : D�veloppez un programme qui entre les ventes brutes hebdomadaires de chaque repr�sentant et qui calcule et affiche son salaire.
// Auteur : William Bergeron
// Date : 2020-10-03

#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "");

	// D�claration des variables
	float venteBrut;
	float salaireTotal = 0;

	// D�claration des constante
	const float salaireFixe = 250;
	const float p100 = 7.5;

	// Demande d'information � l'utilisateur
	cout << "Veuillez rentrer le montant total de vente brute : ";
	cin >> venteBrut;

	// R�fucation des donn�es �roner

	if (venteBrut <= -2)
	{
		cout << "Erreur : Le Montant de vente brute ne peut pas �tre n�gatif";
		
	}
	else
	{
		// Utilisation d'une boucle pour demander les ventes
	
		while (venteBrut != -1)
		{
			//Calcule du salaire

			salaireTotal = salaireFixe + ((venteBrut * p100) / 100);

			// Affiche du salaire total sur la console
							
			cout << "Votre salaire est de : " << salaireTotal << endl;

			// Si l'utilisateur veut continuer a utiliser le programme
			cout << "Veuillez rentrer un montant de vente brute : ";
			cin >> venteBrut;

			if (venteBrut <= -2)
			{
				cout << "Erreur : Le Montant de vente brute ne peut pas �tre n�gatif";
				return 0;
			}

		}
	
	}
	return 0;
}
/*
Plan de test
Vente Brut					salaire fixe			salaireTotal
4000						250						550
9560						250						967
0							250						250
-1													Ferme le programme
-16													Erreur : Le montant de vente brut ne peut pas �tre n�gatif
*/