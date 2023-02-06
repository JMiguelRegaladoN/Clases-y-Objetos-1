//Juan Miguel Regalado Nuño 
#include <iostream>
using namespace std;
class Materia{
	private:
		int Clave;
		string Nombre;
		string ProfesorTit;
		string LibroTexto;
	protected:
	public:
		Materia(int C,string N,string P,string L):Clave(C),Nombre(N),ProfesorTit(P),LibroTexto(L){}
		void imprimir(){
			cout << "\nClave: "<< Clave<< "\n"<< "Nombre: "<< Nombre<< "\n"<< "Profesor: "<< ProfesorTit<< "\n"<< "Libro de texto: "<< LibroTexto<< "\n";   
		}
		void CambiaClave(int newclave){
			Clave = newclave;
			cout << "La clave ha sido cambiada exitosamente"; 
		}
		void CambiarProfe(string newprofe){
			ProfesorTit = newprofe;
			cout << "El maestro ha sido cambiado exitosamente";
		}
};
void menu(){
	cout <<"1. Cambiar la clave de la materia programacion"<<endl;
	cout <<"2. Cambiar el nombre del maestro"<<endl;
	cout <<"3. Imprimir los datos"<<endl;
	cout <<"4. Salir del programa"<<endl;
	cout << "Digite la opcion deseada: ";
}
int main(){
	int opc,terminarPrograma = 0,newclave;
	string newprofe;
	Materia Programacion(5434,"Miguel","Juan Regalado","Aprende a programar en Bash");
	Materia BasesDatos(2492,"Alejandro","Diego Silva","Como crear una base de datos desde consola");
	while(terminarPrograma == 0){
		menu();
		cin >> opc;
		switch(opc){
			case 1: 
				cout << "\nDigita la clave nueva para Programacion: ";
				cin >> newclave; 
				Programacion.CambiaClave(newclave);
				break;
			case 2:
				cout << "\nDigita el nuevo nombre del maestro solo 1 nombre: ";
				cin >> newprofe;
				BasesDatos.CambiarProfe(newprofe);
				break;
			case 3:
				BasesDatos.imprimir();
				break;
			case 4:
				terminarPrograma = 1;
				cout << "[+]Saliendo del programa..."; break;
			default: cout << "[+]Digite una opcion valida"; break;
		}
	cout << "\n\n";
	}
	return 0;
}
