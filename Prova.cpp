#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main(){
    int DIM=0;
    int righe=65;
    int colonne=4;
    string player;
    string portier[righe][colonne];
    string layout[colonne]={"Nome","Squadra","Q.A","Q.I"};
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
            j=0; //chiediamo al tool di andare avanti fino a quando non trova un carattere ";" ,tutto ciò che legge prima verra messo in cognome
            getline(porta,squadra,';');
            getline(porta,quotazione_attuale_str,';');
            getline(porta,quotazione_iniziale_str);
            
            
            portier[i][j] = nome;
            portier[i][j+1] = squadra;
            portier[i][j+2] = quotazione_attuale_str;
            portier[i][j+3] = quotazione_iniziale_str;

            DIM++;
            i++;            
        }

        righe=DIM;
        colonne=4;

        cout<<"INSERIRE IL NOME DEL GIOCATORE CHE STAI CERCANDO: ";
        cin>>player;
        while(player != "fine"){
            for(int i=0;i<righe;i++){
                if(player == portier[i][0]){
                    cout<<"Nome   Squadra   Q.A   Q.I"<<endl;
                    for(int j=0;j<colonne;j++){
                        cout<<portier[i][j]<<" ";
                    }
                    cout<<endl<<endl;
                    break;
                }
            }
            cout<<"CERCHI ALTRI GIOCATORI?"<<endl;
            cin>>player;
        }
    }
    return 0;
}
