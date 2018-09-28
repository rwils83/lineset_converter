/*Written By Ryan J. Wilson
 * This program is based on York requirements
 * that R410a must be added based on total lineset length
 * - 15' that is factory charged to the system. */
#include <iostream>
using namespace std;
int main(){
cout<< "This program will take full lineset length, including" <<endl;
cout<< "90 degree elbows and 45 degree elbows and calculate additional"<<endl;
cout<< "charge. Please Follow the prompts."<<endl;
int lineLength; 
int totalLineLength;
int total90s;
int total45s;
int addR410aLbs;
float addR410aOz;
int totalOzs;
cout << "How many 90s are in the lineset? "<<endl;
cin>> total90s;
cout << "How many 45s are in the lineset? "<<endl;
cin >> total45s;
cout << "How long in feet is the lineset copper? " <<endl;
cin >> lineLength;
cout <<"Total 90s: "<< total90s<<endl;
cout <<"Total 45s: "<<total45s<<endl;
cout << "Linset is " <<lineLength << " feet" <<endl;
totalLineLength = (total90s * 10) + (total45s *5) + lineLength;
cout << "Your Total Length is: " <<  totalLineLength << endl;
// Take away 15 feet from total linelength to account for factory charge
totalOzs = (totalLineLength -15) *.6;
addR410aLbs = totalOzs/16;
//cout <<"LBS TO ADD"<< addR410aLbs<<endl;
addR410aOz = totalOzs - (addR410aLbs *16);
cout << "Based on ARHI match you need to add: " << addR410aLbs << "pounds, "<< addR410aOz<< "ozs." <<endl; 
return 0;
}
