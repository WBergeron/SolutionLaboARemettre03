// But : Complétez ce programme pour qu'il donne la possibilité à l'utilisateur de deviner le nombre contenu dans iRandom.
//		 L'utilisateur a un maximum de 5 chances. Le programme vérifie que l'utilsateur a bien enté un nombre en 0 et 100 et lui indique s'il gagne,
//		 ou dans le cas contraire lui indique le nombre d'essais restant et lui redemande un nombre.
// Auteur : William Bergeron
// Date : 2020-10-03

#include <iostream>
#include <time.h>
using namespace std;

int main()	// Début main
{
	setlocale(LC_ALL, "");		// Pour voir les caractères accentuer

	// Déclaration des variables
	int choix;
	int chance = 4;
	int iRandom;	// Variable aléatoire

		srand(time(0));		//pour activer l'aléatoire dans le programme
		iRandom = rand() % 101;		// l'ordinateur calcule un nombre en 0 et 100 et le stocke dans iRandom

		// Message de Bienvenue
		cout << "Bienvenue dans le programme de << Trouver le nombre entre 1 et 100 !!!>>" << endl;
		cout << "Comme son nom l'indique vous devez trouver le nombre aléatoire que l'ordinateur aura générer entre 0 et 100." << endl;
		cout << "Pour ceci vous aurez cinq chances. Vous êtez prêt? Parter!!!" << endl << endl;

		// Demande d'information a l'utilisateur
		cout << "Veuillez entrer un nombre entre 0 et 100 : ";
		cin >> choix;

		// Vérifier si le nombre saisie est bien entre 0 et 100
		if (choix < 0 || choix > 100)
		{
			cout << "Erreur : Se nombre n'est pas compris entre 0 et 100." << endl;
		}
		else
		{
			// Message de Victoire
			if (choix == iRandom)
			{
				cout << "Bravo vous avez trouver le nombre que l'ordinateur a générer!!!";
				return 0;
			}
			else
			{
				

				while (chance != 0)
				{
					// Vérifier si le nombre saisie est bien entre 0 et 100
					if (choix < 0 || choix > 100)
					{
						cout << "Erreur : Se nombre n'est pas compris entre 0 et 100." << endl;
						return 0;
					}

					// Afficher que le nombre entrer n'est pas le bon
					cout << "Ce n'est pas le nombre que l'ordinateur a générer, veuillez réessayer." << endl;
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
						cout << "Bravo vous avez trouver le nombre que l'ordinateur a générer!!!";
						return 0;
					}

					chance--;

					// Message de défaite
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
choix				résultat
4					pas de réponse sur, car facteur aléatoire
-1					Ce nombre n'est pas compris entre 0 et 100
104					Ce nombre n'est pas compris entre 0 et 100
*/