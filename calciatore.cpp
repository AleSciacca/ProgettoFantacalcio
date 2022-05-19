#include <iostream>
#include <string>

#ifndef CALCIATORE_H
#define CALCIATORE_H

using namespace std;

class Calciatore{
    private:
        string nome;
        string squadra;
        string partite_giocate;
        string media_voto;
        string fanta_media;
        string ammonizioni;
        string espulsioni;

    public:
        Calciatore(string _nome,string _squadra,string _partite_giocate,string _media_voto,string _fanta_media,string _ammonizioni,string _espulsioni) : nome(_nome), squadra(_squadra), partite_giocate(_partite_giocate), media_voto(_media_voto), fanta_media(_fanta_media), ammonizioni(_ammonizioni), espulsioni(_espulsioni) {}

        Calciatore() : Calciatore("","","","","","","") {}

        
};



#endif
