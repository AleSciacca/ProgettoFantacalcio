#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main(){
    
    int righe=75;
    int colonne=10;
    string player;
    string portier[righe][colonne];
    string layout[colonne]={"Nome: ","Squadra: ","Partite Giocate: ","Media Voto: ","FantaMedia: ","Gol Subiti: ","Rigori Parati: ","Ammonizioni: ","Espulsioni: ","Autogol: "};
   
    int i,j;

    string addio="GRAZIE PER AVER USATO IL MIO TOOL <3";

    ifstream porta("portieri.txt");

    if(!porta){
        cout<<"Problema apertura file...";
    }else{

        string nome="";
        string squadra="";
        string partite_giocate="";
        string media_voto="";
        string fanta_media="";
        string gol_subiti="";
        string rigori_parati="";
        string ammonizioni="";
        string espulsioni="";
        string autogol="";

        while(getline(porta,nome,';')){ //chiediamo al tool di andare avanti fino a quando non trova un carattere ";" ,tutto ciò che legge prima verra messo in cognome
            
            j=0; 

            getline(porta,squadra,';');
            getline(porta,partite_giocate,';');
            getline(porta,media_voto,';');
            getline(porta,fanta_media,';');
            getline(porta,gol_subiti,';');
            getline(porta,rigori_parati,';');
            getline(porta,ammonizioni,';');
            getline(porta,espulsioni,';');
            getline(porta,autogol);

            
            portier[i][j] = nome;
            portier[i][j+1] = squadra;
            portier[i][j+2] = partite_giocate;
            portier[i][j+3] = media_voto;
            portier[i][j+4] = fanta_media;
            portier[i][j+5] = gol_subiti;
            portier[i][j+6] = rigori_parati;
            portier[i][j+7] = ammonizioni;
            portier[i][j+8] = espulsioni;
            portier[i][j+9] = autogol;

            i++;            
        }

        cout<<"INSERIRE IL NOME DEL GIOCATORE CHE STAI CERCANDO: ";
        cin>>player;
        while(player != "fine"){
            for(int i=0;i<righe;i++){
                if(player == portier[i][0]){
                    for(int j=0;j<colonne;j++){
                        cout<<layout[j];
                        cout<<portier[i][j]<<endl;
                    }
                    cout<<endl<<endl;
                    break;
                }
            }
            cout<<"CERCHI ALTRI GIOCATORI? ";
            cin>>player;
        }
    }
    
    return 0;
}