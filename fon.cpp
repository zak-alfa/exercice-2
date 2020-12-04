#include<iostream>
#include"header.h"

using namespace std;

//constructeur par défaut 
point::point()
{
	this->x = 0;
	this->y = 0;
}

//constructeur avec paramètres 
point::point(double a, double b)
{
	this->x = a;
	this->y = b;
}

//accès en lecture à l'attribut x
double point::getX()
{
	return x;
}
//changement d'etat de l'attribut x
void point::setX(double a)
{
	this->x = a;

}
//accès en lecture à l'attribut y
double point::getY()
{
	return y;
}
//changement d'etat de l'attribut y
void point::setY(double b)
{
	this->y = b;

}


cercle::cercle(double r, point p)
{
	this->rayon = r;
	this->centre = p;
}

cercle::cercle(double r, double x, double y)
{
	this->rayon = r;
	centre.setX(x);
	centre.setX(y);
}


//Affichage de caractéristiques du cercle 
void point::affichage()
{
	cout << "le centre du cercle : ( " << this->x << " , " << this->y << " )";
	
	
}

void cercle::affichage()
{
	cout << "Le rayon du cercle = " << this->rayon << endl;
	
}

//accès en lecture à l'attribut rayon
double cercle::getrayon()
{
	return rayon;
}

//changement d'etat de l'attribut rayon
void cercle::setrayon(double r)
{

	this->rayon = r;

}





//translation centre
void point::translation(double a)
{
	this->x += a;
	this->y += a;
}

void cercle::translation(double a)
{
	centre.translation(a);
}

//calcul surface et périmètre
double cercle::surface()
{
	return this->rayon * this->rayon * 3.14;
}

double cercle::perimetre()
{
	return 2 * this->rayon * 3.14;
}

//comparaison de deux cercles 
bool point::comparer(point p)
{
	if (this->x == p.x && this->y == p.y)
	{
		return true;
	}

	return false;
}

bool cercle::comparer(cercle c)
{
	return (c.rayon == this->rayon && centre.comparer(c.centre));
}


//appartenance au cercle
double point::distance(point p)
{
	return sqrt(pow(this->x - p.x, 2) + pow(this->y - p.y, 2));
}

bool cercle::appartenance(point p)
{
	if (this->centre.distance(p) <= this->rayon)
	{
		return true;
	}
	return false;
}

