#include "calciatore.h"

#include <iostream>
#include <fstream>

#define MAX_N 245

using namespace std;

int main(){

    int n=MAX_N;

    ifstream ifs("listone.txt");
    Calciatore* arr= new Calciatore[n];
    unsigned int count=0;
    while(count<n){
        Calciatore cal;
        ifs>>cal;
        arr[count++] = cal;
        cout<<cal<<endl;

        // non so il motivo ma se provo ad aprire il file exe non riesco a leggere nulla e crasha
        
        
    }


;
}