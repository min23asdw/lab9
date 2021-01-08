#include <iostream>
#include <iomanip>
#include <fstream>
#include <cstdlib>
#include <cmath>
using namespace std;

int main(){
int member;
float mean,deviation,sum,indev;
string data;

ifstream txt("score.txt");
while (getline(txt,data)) {
  member++;
  sum+=atof(data.c_str());
  indev += pow(atof(data.c_str()),2.0);
}
mean= sum/member;
deviation = pow(( (indev/float(member)) - pow(mean,2.0) ) ,0.5);
    cout << "Number of data = "<< member<<"\n";
    cout << setprecision(3);
    cout << "Mean = "<<mean<<"\n";
    cout << "Standard deviation = "<< deviation<<"\n";
}
