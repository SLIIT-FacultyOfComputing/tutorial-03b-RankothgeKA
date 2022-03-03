#include <iostream>
#include<iomanip>
using namespace std;

int main() {
  
 float marks[] = {78.4, 90.6, 45.9, 72.2, 54.4};
  
 char names[][20] = {"Ajith", "Wimal", "Kanthi", "Suranji", "Kushmitha"};
  
 cout << "No\t\t\t"<< "Name\t"<<"Marks"<< endl;
  
 for (int r = 0; r < 5; r++) {
   
     cout <<  r+1 <<setw(15)
          <<  names[r]
       
          <<setiosflags(ios::fixed)<<setprecision(2)
       
          <<setw(10) << marks[r]<< endl;
 }
}