#include <iostream>
#include "BrazoRobotico.h"
int main(){
    BrazoRobotico b1(0,0,0,false);
    b1.mover(1.0,2.0,3.0);
    std::cout<<b1.coger();


    return 0;
}