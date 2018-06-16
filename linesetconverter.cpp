#include <iostream>
using namespace std;
int main(){
cout<< "This program will take full lineset length, including" <<endl;
cout<< "90 degree elbows and 45 degree elbows and calculate additional"<<endl;
cout<< "charge. Follow the prompts."<<endl;
int lineLength; 
int totalLineLength;
int total90s;
int total45s;
cout << "How many 90s are in the lineset? "<<endl;
cin>> total90s;
cout << "How many 45s are in the lineset? "<<endl;
cout << "How long is the lineset copper? " <<endl;
cin >> total45s;
cout <<"Total 90s: "<< total90s<<endl;
cout <<"Total 45s: "<<total45s<<endl;
return 0;
}
