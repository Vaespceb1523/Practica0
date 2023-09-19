#include "BrazoRobotico.h"

	BrazoRobotico::BrazoRobotico(double x, double y, double z, bool sujetarbjeto){
                x = x;
                y = y;
                z = z;
                sujetarobjeto = sujetarobjeto;
	}

	double BrazoRobotico::consultarx(){
                return x;
	}

	double BrazoRobotico::consultary(){
                return y;
	}	

	double BrazoRobotico::consultarz(){
                return z;
	}

	bool BrazoRobotico::consultar sujetarobjeto(){
                return sujetarobjeto;
	}

	void BrazoRobotico::coger(bool sujetarobjeto){
                sujetarobjeto = true;
	}

	void BrazoRobotico::soltar(bool sujetarobjeto){
                sujetarobjeto = false;
	}

	void BrazoRobotico::mover(double newx, double newy, double newz){
                x = newx;
                y = newy;
                z = newz;
	}
