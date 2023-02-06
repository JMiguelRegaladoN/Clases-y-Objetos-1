//Juan Miguel Regalado Nuño 
#include <iostream>
#include <string>
#include <limits>//Contiene parámetros de entorno, información sobre limitaciones y rangos para tipos enteros.

using namespace std;
void menu();
class Empleado{
	private:
		int claveEmpleado;
		string nombre;
		string domicilio;
		float sueldo;
		string reportaA;
	public:
		Empleado(int ce,string n){
			claveEmpleado = ce;
			nombre = n;
			domicilio = "";
			sueldo = 0;
			reportaA = ""; 
		}
		void imprime(){
			cout<<"Clave de empleado: "<<claveEmpleado<<endl;
			cout<<"Nombre: "<<nombre<<endl;
			cout<<"Domicilio: "<<domicilio<<endl;
			cout<<"Sueldo: "<<sueldo<<endl;
			cout<<"Reporta a: "<<reportaA<<endl;			
		}
		void cambiarDomic(string nd){
			domicilio = nd;
		}
		void cambiarReportaA(string nra){
			reportaA = nra;
		}
		void actualSueldo(float ns){
			sueldo = ns;
		}
};
	int main(int argc, char** argv) {
		menu();
		return 0;
	}	
	void menu(){
		Empleado JefePlanta(1,"Miguel Regalado"),JefePersonal(2,"Luis Bautista");
		int op,ce;
		string dato;
		float sueldo;
		do{
			cout<<"...Puedes asignar los valores disponibles a los usuarios"<<endl;
			cout<<"1. Cambiar domicilio de un empleado"<<endl;
			cout<<"2. Actualizar sueldo de un empleado"<<endl;
			cout<<"3. Imprimir los datos de un empleado"<<endl;
			cout<<"4. Cambiar el nombre de a quien reporta un empleado"<<endl;
			cout<<"5. Salir\n";
			cout<<"Opcion: ";cin>>op;
			switch(op){
				case 1:
					cout<<"Digita la clave del empleado: ";cin>>ce;
					if(ce==1){
						cout<<"Digite el nuevo domicilio: ";
						cin.ignore(numeric_limits<std::streamsize>::max(), '\n');
						getline(cin,dato);
						JefePlanta.cambiarDomic(dato);
					}else if(ce==2){
						cout<<"Digite el nuevo domicilio: ";
						cin.ignore(numeric_limits<std::streamsize>::max(), '\n');
						getline(cin,dato);
						JefePersonal.cambiarDomic(dato);
					}else{
						cout<<"La clave no existe"<<endl;
					}
				break;
				case 2:
					cout<<"....Asigna el sueldo al empleado...."<<endl;
					cout<<"Digite la clave del empleado: ";cin>>ce;
					if(ce==1){
						cout<<"Digite el nuevo sueldo: ";cin>>sueldo;
						JefePlanta.actualSueldo(sueldo);
					}else if(ce==2){
						cout<<"Digite el nuevo sueldo: ";cin>>sueldo;
						JefePersonal.actualSueldo(sueldo);
					}else{
						cout<<"La clave no existe"<<endl;
					}
				break;
				case 3:
					cout<<"Digite la clave del empleado: ";cin>>ce;
					if(ce==1){
						JefePlanta.imprime();
					}else if(ce==2){
						JefePersonal.imprime();
					}else{
						cout<<"La clave no existe"<<endl;
					}
				break;
				case 4:
					cout<<"Digite la clave del empleado: ";cin>>ce;
					if(ce==1){
						cout<<"Digite el nuevo nombre: ";
						cin.ignore(numeric_limits<std::streamsize>::max(), '\n');
						getline(cin,dato);
						JefePlanta.cambiarReportaA(dato);
					}else if(ce==2){
						cout<<"Digite el nuevo nombre: ";
						cin.ignore(numeric_limits<std::streamsize>::max(), '\n');
						getline(cin,dato);
						JefePersonal.cambiarReportaA(dato);
					}else{
						cout<<"La clave no existe"<<endl;
					}
				break;
				case 5:
					cout<<"[+]Saliendo...";
				break;
				default:
					cout<<"[+]Esta opcion no existe"<<endl;
				break;
			}
		}while(op!=5);
	}
