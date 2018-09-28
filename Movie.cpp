include<string>
include<iostream.h>

using namespace std;

class movie 
{
private:
    int id;
    string nombre;
    string genero;
    string director;
    float rating;
    int numcal;
    float sumacal;
public :
    movie();
    movie(int i,string nom,string gen, string dir,float rat, int numc,float sumc );
    int getid();
    string getnombre();
    string getgenero();
    string getdirector();
    float getrating();
    int getnumcal();
    float getsumacal();
    void setid(int i);
    void setnombre(string nom);
    void setgenero(string gen);
    void setdirector(string dir);
    void setrating(float rat);
    void setnumcal(int num);
    void setsumacal(float sum);
    movie(const movie &p);
};

movie::movie( const movie &p):id(p.id),nombre(p.nombre),genero(p.genero),director(p.director),rating(p.rating),numcal(p.numcal),sumacal(p.sumacal){}

int buscar ( movie m [], string nom,int len)
{
    int encontrada=7;
    for(int j=0;j<len;j++){
        if(m[j].getnombre()==nom)
        {
            encontrada=j;
        }
    }
    return encontrada;
}

int main(int argc, char** argv)
{
    movie *m;
    int len=2;
    m = new movie[6];
    m[0] = movie(1,"300","accion","nelson",0.0,0,0);
    m[1] = movie(1,"500","accion","nelson",0.0,0,0);
    int opc=0;
    int resultado;
    string nom;
    string gen;
    string dir;
    float calificacion=-1;
    int id=0;

    while(opc !=3){
        cout<<"Menu"<<endl;
        cout<<" 1-calificar peliculas  \n 2-peliculas recomendadas \n 3-salir "<<endl;
        cin>>opc;

        if(opc==1){
            cout<<"ingrese el nombre de la pelicula "<<endl;
            cin>>nom;
            resultado=buscar(m,nom,len+1);

            if(resultado !=7){
                while(calificacion <0 or calificacion>5){
                    cout<<" ingrese calificacion 0 - 5 "<<endl;
                    cin>>calificacion;
                }
                float suma=m[resultado].getsumacal() + calificacion;
                int cal=m[resultado].getnumcal()+1;
                m[resultado].setsumacal(suma);
                m[resultado].setnumcal(cal);
                m[resultado].setrating(m[resultado].getsumacal()/m[resultado].getnumcal());
                cout<<"calificacion "<<m[resultado].getrating()<<endl;
            }

            else{
                cout<<"crear pelicula"<<endl;
                cout<<" ingrese id de la pelicula"<<endl;
                cin>>id;
                cout<<"ingrese nombre de la pelicula "<<endl;
                cin>>nom;
                cout<<"ingrese genero de la pelicula "<<endl;
                cin>>gen;
                cout<<"ingrese director "<<endl;
                cin>> dir;

                while(calificacion <0 or calificacion >5){
                    cout<<" ingrese calificacion 0 - 5 "<<endl;
                    cin>>calificacion;
                }
                m[len] = movie(id,nom,gen,dir,calificacion,1,calificacion)	;
                len= len+1;

            }
        }
        else

            if(opc==2){

                cout<<"peliculas recomendadas"<<endl;

                for(int j=0;j<len;j++){
                    if(m[j].getrating() >=4 ){
                        cout<<" pelicula "<<m[j].getnombre()<<" genero "<<m[j].getgenero()<<" director "<<m[j].getdirector()<<" calificacion "<<m[j].getrating()<<endl;
                    }
                }
            }
    }
    return 0;
}

movie::movie(){}

movie::movie(int i,string nom,string gen,string dir,float rat,int numc, float sumc)
{
    id=i;
    nombre=nom;
    genero=gen;
    director=dir;
    rating=rat;
    numcal=numc;
    sumacal=sumc;
}

int movie::getid()
{
    return id;
}

string movie::getnombre()
{
    return nombre;
}

string movie::getgenero()
{
    return genero;
}

string movie::getdirector()
{
    return director;
}

float movie::getrating()
{
    return rating;
}

int movie::getnumcal(){
    return numcal;
}
float movie::getsumacal()
{
    return sumacal;
}
void movie::setid(int i)
{
    id=i;
}

void movie::setnombre(string nom)
{
    nombre=nom;
}

void movie::setdirector(string dir)
{
    director=dir;
}

void movie::setgenero(string gen)
{
    genero=gen;
}

void movie::setrating(float rat){
    rating= rat;
}


void movie::setnumcal(int num){
    numcal=num;
}

void movie::setsumacal(float sum){
    sumacal = sum;
}
