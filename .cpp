#include <iostream>
#include <string>
#include <cstdlib> 

using namespace std;

class alumno
{    private:
	         string nombre;
	         string carrera;
	 public:
	         alumno(); 
			 ~alumno();
			 void ingresar();
			 void imprimir();       
};

alumno::alumno()
{   nombre=" ";
    carrera=" ";
}

alumno::~alumno()
{
}

void alumno::ingresar()
{
	cout<<" COlocar";
	cin>>nombre;
	cout<<"Ingrese carrera: "; 
	cin>>carrera;
    
}

void alumno::imprimir() 
{
	cout<<"Nombre Alumno: ";
	cout<<nombre<<"\n";
	cout<<"Carrera: ";
	cout<<carrera<<"\n";
}

int main() 
{	alumno al;

    
    
system("PAUSE");
return 0;
}
