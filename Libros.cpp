*//Sebastian Alvarado y Nelxon Villareal

*//Lab3_20182Libros

#include <iostream>
#include <string>

using namespace std;

class libro 
{
private:
	int codigo;
 	string nombre;
	char materialibro;
	string nombreautor;
	bool disponible;
public:
	libro *sig;
	libro();
	libro( int cod, string nom,char mat,string nomauto,bool dis);
	int getcodigo();
	string getnombre();
	char getmaterialibro();
	string getnombreautor();
	bool getdisponibilidad();
	void setcodigo(int cod);
	void setnombre( string nom);
	void setmaterialibro(char mat);
	void setnombreautor(string nomauto);
	void setdisponibilidad(bool dis);
	friend void buscar(string nomauto ,libro &);
	friend class libros;
};

class libros
{
	private :
	libro *li;
	public:
	libros(): li(NULL){}

	bool disponible( libro l[],string nom){
		for(int j=0;j<5;j++){
		  if(l[j].getnombre() == nom){
			return l[j].getdisponibilidad();
		  }
		}
	return false;
	}
};

void buscar(string nomauto, libro b[])
{
  bool res=false;

  for(int j=0;j<5;j++){
    if(b[j].getnombre() ==nomauto or b[j].getnombreautor()== nomauto )
    {
        res=true;
    }
  }
  if(res)
  {
    cout<<"libro encontrado "<<endl;
  }
  else{
    cout<<"libro no encontrado"<<endl;
  }
}

int main(int argc, char** argv)
{
  libro *li;
  li = new libro[5];
  li[0]= libro(1,"nom",'j',"jose",false);
  li[1]= libro(1,"dosmil",'j',"nelson",false);
  li[2]= libro(1,"mil",'j',"sebastian",true);
  li[3]= libro(1,"docientos",'j',"jj",false);
  li[4]= libro(1,"cien",'j',"pedro",false);
  buscar("jose",li);
  libros l;
  bool result =l.disponible(li,"mil");
  if(result)
  {
    cout<<"el libro esta disponible"<<endl;
  }
  else
  {
    cout<<"el libro no esta disponible"<<endl;
  }

  return 0;
}

libro::libro(){}

libro::libro(int cod,string nom,char mat,string nomauto,bool dis)
{
  codigo=cod;
  nombre =nom;
  materialibro=mat;
  nombreautor= nomauto;
  disponible= dis;
}

int libro::getcodigo()
{
  return codigo;
}

string libro::getnombre()
{
  return nombre;
}

char libro::getmaterialibro()
{
 return materialibro;
}

string libro::getnombreautor()
{
  return nombreautor;
}

bool libro::getdisponibilidad()
{
  return disponible;
}

void libro::setcodigo(int cod)
{
  codigo=cod;
}

void libro::setnombre(string nom)
{
  nombre=nom;
}

void libro::setmaterialibro(char mat)
{
  materialibro=mat;
}

void libro::setnombreautor(string nomauto)
{
  nombreautor=nomauto;
}

void libro::setdisponibilidad(bool dis)
{
  disponible= dis;
}
