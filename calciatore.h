#include <iostream>
#include <string>

using namespace std;

#ifndef CALCIATORE_H
#define CALCIATORE_H

class Calciatore{
    private:
        std::string nome;
        std::string squadra;
        int partite_giocate;
        float media_voto;
        float fanta_media;
        int ammonizioni;
        int espulsioni;

    public:

        Calciatore(std::string _nome,std::string _squadra,int _partite_giocate,float _media_voto,float _fanta_media,int _ammonizioni,int _espulsioni) : nome(_nome), squadra(_squadra), partite_giocate(_partite_giocate), media_voto(_media_voto), fanta_media(_fanta_media), ammonizioni(_ammonizioni), espulsioni(_espulsioni) {}

        Calciatore() : Calciatore("","",0,0.0,0.0,0,0) {}

        friend std::istream &operator>>(std::istream &input, Calciatore& obj){
            std::string partite_giocate_str, media_voto_str, fanta_media_str, ammonizioni_str, espulsioni_str;
            std::getline(input,obj.nome,';');
            std::getline(input,obj.squadra,';');
            std::getline(input,partite_giocate_str,';');
            std::getline(input,media_voto_str,';');
            std::getline(input,fanta_media_str,';');
            std::getline(input,ammonizioni_str,';');
            std::getline(input,espulsioni_str);

            obj.partite_giocate=std::atoi(partite_giocate_str.c_str());
            obj.media_voto=std::stof(media_voto_str);
            obj.fanta_media=std::stof(fanta_media_str);
            obj.ammonizioni=std::atoi(ammonizioni_str.c_str());
            obj.espulsioni=std::atoi(espulsioni_str.c_str());

            return input;

        }

        friend std::ostream &operator<<(std::ostream &output, const Calciatore &obj) {
			output << "Nome:" <<obj.nome<<endl<< "squadra:" <<obj.squadra<<endl<< "Partite Giocate:" <<obj.partite_giocate<<endl<< "Media Voto:" <<obj.media_voto<<endl<< "Fanta Media:" <<obj.fanta_media<<endl<< "Ammonizioni:" <<obj.ammonizioni<<endl<< "Espulzioni:" <<obj.espulsioni<<endl;
            return output;
		}
};

#endif