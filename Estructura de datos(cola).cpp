#include<iostream>
#include<stdlib.h>
#include<windows.h>
#include<ctime>
using namespace std;


char valorChar[10],*ptrChar;
// validacion
bool validar(char*num){
    if((char)*num>=48 && (char)*num<=57)
    {
        system("cls");
        return true;
    }
    else{
        cout<<"\nIngresa un valor valido: ";
        return false;
    }
}

class cola{
  private:
      int inicio,fin;
      int dato[10];



  public:
      cola();
      void mostrarCola();
      void llenar();
      int vacio();
      int lleno();
      void mostrarInicio();
      void mostrarFinal();
      void eliminar();









};
cola::cola(){
 inicio=0;
 fin=-1;



}

void cola::mostrarInicio(){

    if(vacio()==0){


        cout<<"el inicio de la cola es="<<endl;
        cout<<dato[0]<<endl;


    }


}

void cola::mostrarFinal(){
    if(vacio()==0){

            if(fin>=1){
            cout<<"el final de la cola es"<<endl;
            cout<<dato[fin];
            }else{
                cout<<"todavia no tiene un final"<<endl;


            }



    }



}
void cola::mostrarCola(){
    if(vacio()==0){
     system("cls");

    printf("\n\n\t\t%c%c%c%c%c%c  \n",201,205,205,205,205,187);

            for(int i=fin;i>=0;i--){
            if(i==0){
                   printf("INICIO->");
                 printf("\t%c ",186,205);
                cout<<dato[i]; printf("  %c\n",186);
                printf("\t\t%c%c%c%c%c%c\n",200,205,205,205,205,188);
            }
            else{
                if(i==fin)
                {
                    printf("FIN->");
                }
                printf("\t\t%c ",186,205);
                cout<<dato[i]; printf("  %c\n",186);
                printf("\t\t%c%c%c%c%c%c\n",200,205,205,205,205,185);
            }
        }
    }

}

void cola::llenar(){
    int x;
    if(lleno()==0){
      fin++;
    cout<<"ingresa el primer caracter"<<endl;
    cin>>x;
    cin.ignore();
    dato[fin]=x;
    cout<<dato[fin];
    system("pause");





    }





}
 cola::vacio(){

if(fin==-1){
   cout<<"cola vacia"<<endl;
   system("pause");
   return 1;
}
   else{


    return 0;
   }



}

cola::lleno(){

    if(fin==9){

        cout<<"la cola esta llena"<<endl;
         return 1;



    }
    else{

        return 0;
    }



}


void cola::eliminar(){
    if(vacio()==0){


        for(int i=0;i<=fin;i++){
                cout<<dato[i]<<endl;

            dato[i]=dato[i+1];







        }
        //dato[fin]=-1;

        fin--;


    }
}

int main(){
   int dato;
       int opcion;
       char res[100];
       cola c;
do{
    system("cls");
    c.mostrarCola();
    cout<<""<<endl;
    cout<<"Menu"<<endl;
       cout<<"[1]Encolar(push)"<<endl;
    cout<<"[2]Mostrar inicio"<<endl;
    cout<<"[3]Mostrar fin"<<endl;
    cout<<"[4]Des-Encolar(pop)"<<endl;
    cout<<"[5]Mostrar cola"<<endl;
    cout<<"[6].Salir"<<endl;
    do
        {
            cin>>valorChar;
            cin.ignore();
            ptrChar=&valorChar[0];
        }while(!validar(ptrChar));
        opcion = atoi(ptrChar);
       switch(opcion){
           case 1:
                   c.llenar();
                   break;
           case 2: c.mostrarInicio();
                break;
        case 3: c.mostrarFinal();
                break;
           case 4: c.eliminar();
                  break;
        case 5: c.mostrarCola();
                 break;
        default: std::cout << "\nOpcion no disponible" << '\n';
        break;
       }

       }while(opcion!=6);
   }

