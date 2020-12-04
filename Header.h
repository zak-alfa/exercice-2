#pragma once
class point
{
private:
	double x;
	double y;
public:
	point();
	point(double, double);
	double getX();
	void setX(double);
	double getY();
	void setY(double);
	void affichage();
	void translation(double);
	bool comparer(point);
	double distance(point);
	
};


class cercle
{
private:
	double rayon;
	point centre;
public:
	cercle(double, point);
	cercle(double, double, double);
	void affichage();
	double getrayon();
	void setrayon(double);
	point getcentre();
	void translation(double);
	double surface();
	double perimetre();
	bool comparer(cercle);
	bool appartenance(point p);
	
	

	




};