#include <iostream>
using namespace std;

int main()
{
    int N;
    cin>>N;
    int X[N],small,pos;


    for(int i=0;i<N;i++){
        cin>>X[i] ;
    }
    small = X[0];
    for(int i=0;i<N;i++){

        if(X[i]<small){
            small = X[i];
            pos = i;
        }
    }
    cout<<"Menor valor: "<<small<<endl;
    cout<<"Posicao: "<<pos<<endl;
    return 0;
}
