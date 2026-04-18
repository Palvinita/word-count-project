#include<iostream>
#include<string>
using namespace  std;
int main (){
    string str;
cout<< "enter a string ";
getline(cin ,str);
cout<< str << endl;
int length = str.length();

cout<< length << endl;
int count =0;
for(int i =0 ; i< length; i++){
    if(str[i]!=' ' && ( i==0 || str[i-1]== ' ')){
        count++;
    } 

}
cout<< count << endl;
}