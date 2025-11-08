#include<iostream>
class BrazoRobotico{
	private:
		int x,y,z;
		bool sujetando;
	public:
		BrazoRobotico(int x, int y, int z, bool sujetando) : x(x),y(y),z(z),sujetando(sujetando){}
		int getX(){
			return this->x;
		}
		
		int getY(){
			return this->y;
		}

		int getZ(){
			return this->z;
		}
		void mover(double x, double y, double z){
			this->x=x;
			this->y=y;
			this->z=z;
		}
		bool coger(){
			this->sujetando=true;
			return this->sujetando;
		}
		bool soltar(){
			this->sujetando=false;
			return this->sujetando;
		}		
};
