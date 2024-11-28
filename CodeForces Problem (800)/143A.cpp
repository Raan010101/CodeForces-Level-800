#include <iostream>
using namespace std; 

int main (){

int k = 0; //counter that increases as problems are solved
int m; 
cin>>m; //get number of problems from user
while(m--){

int a,b,c; 
cin>>a>>b>>c;
if (a+b+c >= 2){
    k++; 
}

}

cout<<k; 


}