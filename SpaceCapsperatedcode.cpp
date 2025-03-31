
#include <iostream>
using namespace std;

string formating(string& s){
    string result="";
    for(int i=0;i<s.size();i++){
        if(i==0){
            result+=toupper(s[i]);
        }
        else if(isupper(s[i])){
            result+=" ";
            result+=s[i];
        }
        else{
            result+=s[i];
        }
    }
    return result;
}
int main() {
    string s="";
    cout<<"enter the string"<<endl;
    cin>>s;
    
    string formatedstring=formating(s);
    cout<<formatedstring<<endl;

    return 0;
}
