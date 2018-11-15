#include "CVect2D.h"
#include <math.h>

//On récupère X
float CVect2D::getVectX() const
{
	return this->Vecteur_fltX;
}

//On set X
void CVect2D::setVectX(float fltX)
{
	this->Vecteur_fltX = fltX;
}

//On récupère Y
float CVect2D::getVectY() const
{
	return this->Vecteur_fltY;
}

//On set Y
void CVect2D::setVectY(float fltY)
{
	this->Vecteur_fltY = fltY;
}
 
//Addition de vecteurs
void CVect2D::additionVecteurs(CVect2D Vect1, CVect2D Vect2, CVect2D &Vect3)
{
	Vect3.Vecteur_fltX = Vect1.getVectX() + Vect2.getVectX();
	Vect3.Vecteur_fltY = Vect1.getVectY() + Vect2.getVectY();
}





//Soustraction de vecteurs
void CVect2D::soustractionVecteurs(CVect2D Vect1, CVect2D Vect2, CVect2D &Vect3)
{
	Vect3.Vecteur_fltX = Vect1.getVectX() - Vect2.getVectX();
	Vect3.Vecteur_fltY = Vect1.getVectY() - Vect2.getVectY();
}

//Multiplication de vecteurs
float CVect2D::multiplicationVecteurs(CVect2D Vect1, CVect2D Vect2)
{
	return ((Vect1.getVectX() * Vect2.getVectX()) + (Vect1.getVectY() * Vect2.getVectY()));
}

//Produit scalaire
void CVect2D::produitScalaire(CVect2D &Scalaire, float produit)
{
	Scalaire.Vecteur_fltX = Scalaire.getVectX() * produit;
	Scalaire.Vecteur_fltY = Scalaire.getVectY() * produit;
}

//Norme
float CVect2D::normeVecteur(CVect2D Vect1, CVect2D Vect2, CVect2D &Vect3)
{
	return sqrt(pow(Vect2.getVectX() - Vect1.getVectX(),2) + pow(Vect2.getVectY() - Vect1.getVectY(),2));
}

//Constructeur sans paramètres
CVect2D::CVect2D() 
{
	this->Vecteur_fltX = this->Vecteur_fltY = 0.0f;
}

//Constructeur avec paramètres
CVect2D::CVect2D(float fltX, float fltY)
{
	this->Vecteur_fltX = fltX;
	this->Vecteur_fltY = fltY;
}


//Constructeur avec paramètres par défaut
/*
CVect2D::CVect2D(float fltX, float fltY)
{
	this->fltX = fltX;
	this->fltY = fltY;
}
*/
CVect2D::~CVect2D()
{

}
