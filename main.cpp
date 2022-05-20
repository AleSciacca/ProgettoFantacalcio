#include "calciatore.h"

#include <iostream>
#include <fstream>

#define MAX_N 400

using namespace std;

int main(){

    int n=MAX_N;

    ifstream ifs("listone.txt");
    Calciatore* arr= new Calciatore[n];
    unsigned int count=0;
    while(ifs.good() && count<n){
        Calciatore cal;
        ifs>>cal;
        //arr[count++] = cal;
        cout<<cal<<endl;
        
    }


;
}