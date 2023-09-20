#include "BrazoRobotico.h"

	BrazoRobotico::BrazoRobotico(double x2, double y2, double z2, bool sujetarobjeto2){
                double x = x2;
                double y = y2;
                double z = z2;
                bool sujetarobjeto = sujetarobjeto2;
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

	bool BrazoRobotico::consultarsujetarobjeto(){
                return sujetarobjeto;
	}

	void BrazoRobotico::coger(){
                sujetarobjeto = true;
	}

	void BrazoRobotico::soltar(){
                sujetarobjeto = false;
	}

	void BrazoRobotico::mover(double newx, double newy, double newz){
                x = newx;
                y = newy;
                z = newz;
	}
