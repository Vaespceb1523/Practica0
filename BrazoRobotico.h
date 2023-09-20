#include <iostream>
using namespace std;


	class BrazoRobotico{
	private:
                double x;
                double y;
                double z;
                bool sujetarobjeto;


        public:
                BrazoRobotico(double x2,double  y2,double z2, bool sujetarobjeto2);

                double consultarx();

                double consultary();

                double consultarz();

                bool consultarsujetarobjeto();

		void coger();

                void soltar();

                void mover(double newx, double newy, double newz);
		
};

