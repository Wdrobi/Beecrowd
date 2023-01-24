#include <iostream>
using namespace std;

int summition(int a)
{
    int add = 0;
    for(int j=1;j<a;j++){
        if(a%j==0){
            add+=j;
        }
    }
    return add;
}

int main()
{
    int N,X,sum;
    cin>>N;
    for(int i=0; i<N; i++){
        cin>>X;
        sum = summition(X);
        if(sum==X){
            cout<<X<<" eh perfeito"<<endl;
        }
        else{
            cout<<X<<" nao eh perfeito"<<endl;
        }
    }
    return 0;
}
