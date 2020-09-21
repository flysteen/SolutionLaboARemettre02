//But:Écrire un programme pour calculer le montant qu’un individu devra débourser pour faire un voyage dans une
//automobile louée.
//Auteur:Rafael Witty
//Date: 2020-09-16


#include <iostream>

using namespace std;

int main()
{
	setlocale(LC_ALL, "");
	
	//déclaration de variables
	
	int distance;
	float coutTotal = 0 ;
	int nbJour;

	//On demande les valeurs de la distance parcouru et de la durée du voyage
	cout << " Veuiller entrer un votre distance parcouru(km) en entier positif : ";
	cin >> distance;
	
	cout << "Veuiller entrer la durée de votre voyage(jours) en entier positif : ";
	cin >> nbJour;
	// On fait la formule avec les variables
	// KM : Dépend de la durée de la location
	if (distance > 250)
	{
		coutTotal += (nbJour * 45) + ((distance*7.6/100)*1.25)+((distance - 250) * 0.05);
		


	}
	else
	{
		coutTotal += ( nbJour * 45) + ((distance * 7.6 / 100) * 1.25);
	}



	cout << "Le cout total est en $ : " << coutTotal ;



return 0;
}

/*plan de test
distance parcouru(km)                               Veuiller entrer la durée de votre voyage(jours)              Affichage        
100                                                                 1                                             54.5  
400								4                                             225.5    
250                                                                 5                                             248.75  
0								0							0
500								10		                                       510

// KM : Manque le cas où il dépasse 250 km par jour
*/                                   
/*
•	La solution est bien nommée et comporte un projet 5/ 5
•	Les fichiers sources contiennent l'identification complète du programme et de son auteur	5/5
•	Le code source est sans erreur de compilation 15/ 15
•	Le programme est fonctionnel 15/ 20
•	Le programme passe le plan de tests 15/ 20
•	Le code source est largement commenté 15 / 20				// KM : dans les calculs
•	La solution est déposée dans LEA et dans GitHub.L'adresse est envoyée via Outlook	10/15
// KM : Dans LEA, il y a juste le sln


Note 85/100
Bon  travail !!! Attetnion aux calculs
*/
