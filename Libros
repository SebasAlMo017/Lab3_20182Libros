*//Sebastian Alvarado y Nelxon Villareal

# Lab3_20182Libros

#include <iostream>

using namespace std;
class libro{
	private:
	int codigo;
	char *nombre;
	char materia;
	char *nombreautor;
	bool estado;
	
	public:
		libro(int cod,char *nom,char mat, char *nomaut,bool est);
		int getcodigo();
		char *getnombre();
		char getmateria();
		char *getnombreautor();
		bool  getestado();
		void setcodigo(int cod);
		void setnombre(char *nom);
		void setmateria(char mat);
		void setnombreautor(char *nomau);
		void setestado(bool est);
	friend void buscar(char *nom,libro li[]);
};
void buscar(char *nom ,libro li []){
	for(int j=0;j<5;j++){
		if(nom== li[j].getnombre() or nom== li[j].getnombreautor() ){
			cout<<"libro encontrado"<<endl;
		}
	}
}

libro::libro(int cod,char *nom, char mat, char *nomaut, bool est){
	this->codigo = cod;
	this->nombre =nom;
	this->materia=mat;
	this->nombreautor = nomaut;
	this->estado= est;
}
int libro::getcodigo(){
	return codigo;
}
char * libro::getnombre(){
	return nombre;
}
char libro::getmateria(){
	return materia;
}
char *libro::getnombreautor(){
	return this->nombreautor;
}
bool libro::getestado(){
	return estado;
}
void libro::setcodigo(int cod){
	this->codigo = cod;
}
void libro::setnombre(char *nom){
	this->nombre = nom;
}
void libro::setmateria(char mat){
	this->materia=mat;
}
void libro::setnombreautor(char *nomaut){
	this->nombreautor=nomaut;
}
int main(int argc, char** argv) {
	return 0;
}
