#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main(){
    ifstream porta("Portieri.txt");

    if(!porta){
        cout<<"Problema apertura file...";
    }else{
        string nome="";

       /* string squadra="";*/

        string quotazione_attuale_str="";
        int quotazione_attuale=0;

        string quotazione_iniziale_str="";
        int quotazione_iniziale=0;

        while(getline(porta,nome,';')){  //chiediamo al tool di andare avanti fino a quando non trova un carattere ";" ,tutto ciò che legge prima verra messo in cognome
           /* getline(porta,squadra,';');*/
            getline(porta,quotazione_attuale_str,';');
            getline(porta,quotazione_iniziale_str);
          

            cout<<"Giocatore: "<<nome<<endl;
           /* cout<<"Squadra: "<<squadra<<endl;*/
            cout<<"Quotazione attuale: "<<quotazione_attuale<<endl;
            cout<<"Quotazione iniziale: "<<quotazione_iniziale<<endl;

            cout<<string(40,'=')<<endl;
        }  
        porta.close(); porta.clear();

    }
    return 0;
}