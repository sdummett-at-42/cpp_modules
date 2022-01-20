/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdummett <sdummett@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/20 14:51:08 by sdummett          #+#    #+#             */
/*   Updated: 2022/01/20 15:52:03 by sdummett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Vehicule.hpp"
#include <vector>
using namespace std;

void	presenter(Vehicule const&  v) {
	v.affiche();
}

int main() {
	// Vehicule v(17000); // NE COMPILERA PAS CAR Vehicule est une classe abstraite
	Vehicule *ptr(0);
	Voiture caisse(2000, 5);
	Moto	moto(8, 8.8);
	ptr = &caisse;
	cout << ptr->nbRoues() << endl;

	ptr = &moto;
	cout << ptr->nbRoues() << endl;

	return 0;
}

/* Test d'une collection heterogene */
// int main()
// {
//     vector<Vehicule*> listeVehicules;

// 	listeVehicules.push_back(new Voiture(15000, 5));
//     listeVehicules.push_back(new Voiture(12000, 3));  //…
//     listeVehicules.push_back(new Moto(2000, 212.5));

// 	listeVehicules[0]->affiche();
// 	listeVehicules[1]->affiche();
// 	listeVehicules[2]->affiche();
//     //On utilise les voitures et les motos
//     for(long unsigned int i(0); i<listeVehicules.size(); ++i)
//     {
//         delete listeVehicules[i];  //On libère la i-ème case mémoire allouée
//         listeVehicules[i] = 0;  //On met le pointeur à 0 pour éviter les soucis
//     }
//     return 0;
// }

/* Test du polymorphisme avec des pointeurs et 
	test des cas du constructeur et du destructeurs */
// int main()
// {
//     Vehicule *v(0);
//     v = new Voiture;
//     //On crée une Voiture et on met son adresse dans un pointeur de Vehicule

//     v->affiche();  //On affiche "Ceci est une voiture."

//     delete v;      //Et on détruit la voiture

//     return 0;
// }

	/* Test du polymorphisme avec une reference */
// int main() {

// 	cout << "hello fworld" << endl;

// 	Vehicule	vehicule;
// 	Voiture		voiture;
// 	Moto		moto;
// 	// vehicule.affiche();
// 	presenter(vehicule);

// 	// voiture.affiche();
// 	presenter(voiture);

// 	// moto.affiche();

// 	return 0;
// }