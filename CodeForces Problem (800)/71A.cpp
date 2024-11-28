#include <iostream>
#include <vector>
using namespace std; 

int main (){


int g ; 
cin>>g; 


vector<string> words;
string n; 

    for (int i = 0; i<g; i++)
    {  
        cin>>n; 
        words.push_back(n); 
            
    }

cout<<endl; 

for (const string& word : words)
{
    if (word.length()>=10)
    {
        cout << word[0] <<word.length() -2 <<word[word.length()-1]<<endl; 
    }
    else
    cout<< word<<endl; 

}


}
