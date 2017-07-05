#include<iostream>
#include<string>

using namespace std;

int main(){

int numberGuessed;

do{

cout<<"Enter your number between 1 and 10 "<<endl;
cin>>numberGuessed;

}while(numberGuessed!=5);

cout<<"You win!"<<endl;

return 0;

}
