#include "BrazoRobotico.h"

int main(){
    BrazoRobotico brazo(3, 8, 13, false);
    brazo.mover(6, 10, 15);
    std::cout << " el brazo se movió " << std::endl;
    brazo.coger();
    std::count << " el brazo cogió " << std::endl;
    return 0;
}
