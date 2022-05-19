#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main(){
    
    int righe=245;
    int colonne=13;
    string player;
    string difensori[righe][colonne];
    string layout[colonne]={"Nome: ","Squadra: ","Partite Giocate: ","Media Voto: ","FantaMedia: ","Gol Fatti: ","Rigori Calciati: ","Rigori Segnati: ","Rigori Sbagliati: ","Assist: ","Ammonizioni: ","Espulsioni: ","Autogol: "};
   
    int i,j;

    ifstream difesa("Difensori.txt");

    if(!difesa){
        cout<<"Problema apertura file...";
    }else{

        string nome="";
        string squadra="";
        string partite_giocate="";
        string media_voto="";
        string fanta_media="";
        string gol_fatti="";
        string rigori_calciati="";
        string rigori_segnati="";
        string rigori_sbagliati="";
        string assist="";
        string ammonizioni="";
        string espulsioni="";
        string autogol="";

        while(getline(difesa,nome,';')){ //chiediamo al tool di andare avanti fino a quando non trova un carattere ";" ,tutto ciò che legge prima verra messo in cognome
            
            j=0; 

            getline(difesa,squadra,';');
            getline(difesa,partite_giocate,';');
            getline(difesa,media_voto,';');
            getline(difesa,fanta_media,';');
            getline(difesa,gol_fatti,';');
            getline(difesa,rigori_calciati,';');
            getline(difesa,rigori_segnati,';');
            getline(difesa,rigori_sbagliati,';');
            getline(difesa,assist,';');
            getline(difesa,ammonizioni,';');
            getline(difesa,espulsioni,';');
            getline(difesa,autogol);

            
            difensori[i][j] = nome;
            difensori[i][j+1] = squadra;
            difensori[i][j+2] = partite_giocate;
            difensori[i][j+3] = media_voto;
            difensori[i][j+4] = fanta_media;
            difensori[i][j+5] = gol_fatti;
            difensori[i][j+6] = rigori_calciati;
            difensori[i][j+7] = rigori_segnati;
            difensori[i][j+8] = rigori_sbagliati;
            difensori[i][j+9] = assist;
            difensori[i][j+10] = ammonizioni;
            difensori[i][j+11] = espulsioni;
            difensori[i][j+12] = autogol;

            i++;            
        }

        cout<<"INSERIRE IL NOME DEL GIOCATORE CHE STAI CERCANDO: ";
        cin>>player;
        while(player != "fine"){
            for(int i=0;i<righe;i++){
                if(player == difensori[i][0]){
                    for(int j=0;j<colonne;j++){
                        cout<<layout[j];
                        cout<<difensori[i][j]<<endl;
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