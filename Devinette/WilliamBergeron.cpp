// But : Compl�tez ce programme pour qu'il donne la possibilit� � l'utilisateur de deviner le nombre contenu dans iRandom.
//		 L'utilisateur a un maximum de 5 chances. Le programme v�rifie que l'utilsateur a bien ent� un nombre en 0 et 100 et lui indique s'il gagne,
//		 ou dans le cas contraire lui indique le nombre d'essais restant et lui redemande un nombre.
// Auteur : William Bergeron
// Date : 2020-10-03

#include <iostream>
#include <time.h>
using namespace std;

int main()	// D�but main
{
	setlocale(LC_ALL, "");		// Pour voir les caract�res accentuer

	// D�claration des variables
	int choix;
	int chance = 4;
	int iRandom;	// Variable al�atoire

		srand(time(0));		//pour activer l'al�atoire dans le programme
		iRandom = rand() % 101;		// l'ordinateur calcule un nombre en 0 et 100 et le stocke dans iRandom

		// Message de Bienvenue
		cout << "Bienvenue dans le programme de << Trouver le nombre entre 1 et 100 !!!>>" << endl;
		cout << "Comme son nom l'indique vous devez trouver le nombre al�atoire que l'ordinateur aura g�n�rer entre 0 et 100." << endl;
		cout << "Pour ceci vous aurez cinq chances. Vous �tez pr�t? Parter!!!" << endl << endl;

		// Demande d'information a l'utilisateur
		cout << "Veuillez entrer un nombre entre 0 et 100 : ";
		cin >> choix;

		// V�rifier si le nombre saisie est bien entre 0 et 100
		if (choix < 0 || choix > 100)
		{
			cout << "Erreur : Se nombre n'est pas compris entre 0 et 100." << endl;
		}
		else
		{
			// Message de Victoire
			if (choix == iRandom)
			{
				cout << "Bravo vous avez trouver le nombre que l'ordinateur a g�n�rer!!!";
				return 0;
			}
			else
			{
				

				while (chance != 0)
				{
					// V�rifier si le nombre saisie est bien entre 0 et 100
					if (choix < 0 || choix > 100)
					{
						cout << "Erreur : Se nombre n'est pas compris entre 0 et 100." << endl;
						return 0;
					}

					// Afficher que le nombre entrer n'est pas le bon
					cout << "Ce n'est pas le nombre que l'ordinateur a g�n�rer, veuillez r�essayer." << endl;
					// Dire si le choix de l'utilisateur est plus petit ou plus grand que son dernier nombre entrer
					if (iRandom < choix)
					{
						cout << "La valeur a trouver est plus petite que votre dernier nombre entrer" << endl << endl;
					}
					else
					{
						cout << "La valeur a trouver est plus grande que votre dernier nombre entrer" << endl << endl;
					}
					// Affichage du nombre de chance restante
					cout << "Il vous reste " << chance << " chance pour trouver le nombre" << endl << endl;
					// Demande d'information a l'utilisateur
					cout << "Veuillez entrer un nombre entre 0 et 100 : ";
					cin >> choix;

					// Message de Victoire
					if (choix == iRandom)
					{
						cout << "Bravo vous avez trouver le nombre que l'ordinateur a g�n�rer!!!";
						return 0;
					}

					chance--;

					// Message de d�faite
					if (chance == 0)
					{
						cout << "Dommage vous avez perdu... Meilleur chance la prochaine fois!";
					}

				}
				
			}
			
		
		}

	return 0;	// Fin du main
}
/*
Plan de test
choix				r�sultat
4					pas de r�ponse sur, car facteur al�atoire
-1					Ce nombre n'est pas compris entre 0 et 100
104					Ce nombre n'est pas compris entre 0 et 100
*/