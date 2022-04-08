#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main(){
    int DIM=0;
    string player;
    string** portieri;
    int i,j;

    ifstream porta("portieri.txt");

    if(!porta){
        cout<<"Problema apertura file...";
    }else{
        string nome="";

       string squadra="";

        string quotazione_attuale_str="";
        int quotazione_attuale=0;

        string quotazione_iniziale_str="";
        int quotazione_iniziale=0;

        while(getline(porta,nome,';')){ 
            i=0; //chiediamo al tool di andare avanti fino a quando non trova un carattere ";" ,tutto ciò che legge prima verra messo in cognome
            getline(porta,squadra,';');
            getline(porta,quotazione_attuale_str,';');
            getline(porta,quotazione_iniziale_str);

            portieri[i][j] = nome;
            portieri[i+1][j] = squadra;
            portieri[i+2][j] = quotazione_attuale_str;
            portieri[i+3][j] = quotazione_iniziale_str;

            DIM++;
            j++;            
        }  
        porta.close(); porta.clear();

        cout<<DIM<<endl;

        int righe=DIM;
        int colonne=4;

        cout<<"INSERIRE IL NOME DEL GIOCATORE CHE STAI CERCANDO: ";
        cin>>player;

       /* for(int i=0;i<righe;i++){
            if(player)
        }*/

    }
    return 0;
}