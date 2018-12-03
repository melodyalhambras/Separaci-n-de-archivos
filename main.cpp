#include <iostream>
#include <fstream>
#include <string>


using namespace std;

void leerArchivo();
void crear_archivo();
void separar_archivo();

int main()
{
    cout << "Arcchivos separados" <<endl;
    crear_archivo();
    separar_archivo();
    return 0;
}

void leerArchivo(){
    ifstream numeros; // abre el fichero de salida
    string nota;
    numeros.open ("numeros.txt");
    float val;
    if (numeros.fail()){
      cout << "Archivo malo\n";
    }
    while (!numeros.eof()) {
      getline(numeros,nota);
      val = std::stof(nota);
      if (val==7.8) {
        cout << "la encontre \n";
      }
      cout << val << endl;
    }
    numeros.close();
}

void crear_archivo(){                     //Crear Archivos para separar.

FILE *a=fopen("Unos.txt","w");
FILE *b=fopen("Dos.txt","w");
FILE *c=fopen("Tres.txt","w");
FILE *d=fopen("Cuatros.txt","w");
FILE *e=fopen("Cincos.txt","w");
FILE *f=fopen("Seis.txt","w");
FILE *g=fopen("Sietes.txt","w");

}

void separar_archivo(){                    //Guardar valores en rangos de 1.0 a 1,9 , 2.0 a 2.9 etc....
    ofstream n1("Unos.txt");
    ofstream n2("Dos.txt");
    ofstream n3("Tres.txt");
    ofstream n4("Cuatros.txt");
    ofstream n5("Cincos.txt");
    ofstream n6("Seis.txt");
    ofstream n7("Sietes.txt");

    ifstream fin("numeros.txt");

    string valor,aux;
    int i=0;
    float num;

   while(fin>> valor){

   aux=valor;
   aux[1]='.';

   num=strtof((aux).c_str(),0);

   if (num>=1.0 & num<=1.9){
    n1<<valor<<endl;
   }
   if (num>=2.0 & num<=2.9){
    n2<<valor<<endl;
   }
   if (num>=3.0 & num<=3.9){
    n3<<valor<<endl;
   }
   if (num>=4.0 & num<=4.9){
    n4<<valor<<endl;
   }
   if (num>=5.0 & num<=5.9){
    n5<<valor<<endl;
   }
   if (num>=6.0 & num<=6.9){
    n6<<valor<<endl;
    }
    if (num==7.0){
     n7<<valor<<endl;
   }
}
}
