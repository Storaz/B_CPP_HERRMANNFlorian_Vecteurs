#include <iostream>
#include <string>
#include <string.h>
#include "CVect2D.h"

int main() {


	float fltX;
	float fltY;
	float prod;

	CVect2D Vecteur1;
	CVect2D Vecteur2;
	CVect2D Vecteur3;
	CVect2D Scalaire;

	std::cout << "Veuillez saisir la valeur en X du premier vecteur:" << std::endl;
	std::cin >> fltX;
	Vecteur1.setVectX(fltX);
	Scalaire.setVectX(fltX);

	std::cout << "Veuillez saisir la valeur en Y du premier vecteur:" << std::endl;
	std::cin >> fltY;
	Vecteur1.setVectY(fltY);
	Scalaire.setVectX(fltX);

	std::cout << "Veuillez saisir la valeur en X du deuxieme vecteur:" << std::endl;
	std::cin >> fltX;
	Vecteur2.setVectX(fltX);
	Scalaire.setVectX(fltX);

	std::cout << "Veuillez saisir la valeur en Y du deuxieme vecteur:" << std::endl;
	std::cin >> fltY;
	Vecteur2.setVectY(fltY);
	Scalaire.setVectX(fltX);
	
	//Appel de fonction
	Vecteur3.additionVecteurs(Vecteur1, Vecteur2, Vecteur3);

	std::cout << "Addition de vecteurs " << std::endl;
	std::cout << "Valeur en X: " << Vecteur3.getVectX() << std::endl;
	std::cout << "Valeur en Y: " << Vecteur3.getVectY() << std::endl;

	//Appel de fonction
	Vecteur3.soustractionVecteurs(Vecteur1, Vecteur2, Vecteur3);

	std::cout << "Soustraction de vecteurs " << std::endl;
	std::cout << "Valeur en X: " << Vecteur3.getVectX() << std::endl;
	std::cout << "Valeur en Y: " << Vecteur3.getVectY() << std::endl;

	std::cout << "Multiplication de vecteurs " << std::endl;
	std::cout << "Valeur : " << Vecteur3.multiplicationVecteurs(Vecteur1, Vecteur2) << std::endl;

	std::cout << "Veuillez saisir la valeur en X du premier vecteur:" << std::endl;
	std::cin >> fltX;
	Scalaire.setVectX(fltX);

	std::cout << "Veuillez saisir la valeur en Y du premier vecteur:" << std::endl;
	std::cin >> fltY;
	Scalaire.setVectY(fltY);

	std::cout << "Veuillez saisir la valeur du produit:" << std::endl;
	std::cin >> prod;

	Scalaire.produitScalaire(Scalaire, prod);

	std::cout << "Produit Scalaire " << std::endl;
	std::cout << "Valeur en X: " << Scalaire.getVectX() << std::endl;
	std::cout << "Valeur en Y: " << Scalaire.getVectY() << std::endl;


	std::cout << "Norme " << Vecteur3.normeVecteur(Vecteur1, Vecteur2, Vecteur3)<< std::endl;
	

	system("pause");

	return 0;
}