#include <iostream>
using namespace std;

void sizeVar(){
  //Problem 2
  //Write a program that prints the sizes of the following fundamental types, namely: int, float, double, char, string, void, bool. Use the sizeof operator.
  
  cout<< "The size of an integer in C++ is " << sizeof(int) << "bytes.\n";
  cout<< "The size of a float in C++ is " << sizeof(float) << " bytes.\n";
  cout<< "The size of a double in C++ is " << sizeof(double) << " bytes.\n";
  cout<< "The size of a char in C++ is " << sizeof(char) << " byte.\n";
  cout<< "The size of a string in C++ is " << sizeof(string) << " bytes.\n";
  //cout<< "The size of void in C++ is " << sizeof(void) << " bytes.\n";
  cout<< "The size of a bool in C++ is " << sizeof(bool) << " byte.\n";
}

void salary(){
  //Problem 3
  string firstName;
  float payRate, hoursWorked, salary;
  cout << "Enter your first name: ";
  cin >> firstName;
  cout << "Enter your pay rate per hour: $";
  cin >> payRate;
  cout << "Enter the number of hours your worked last week: ";
  cin >> hoursWorked;
  
  salary = payRate * hoursWorked;

  cout << "\nFirst Name: " << firstName << "\nPay Rate: $" << payRate << "\nHours Worked: " << hoursWorked << "\nSalary: $" << salary;

}

void secTime(){
  //Problem 4
  int seconds, hours, minutes;
  cout << "\n\nEnter the elapsed time in seconds: ";
  cin >> seconds;

  cout << "The elapsed time in seconds = " << seconds;
  
  hours = seconds/3600;
  minutes = seconds/60 - hours*60;
  seconds = seconds % 60;
  
  cout << "\nThe equivalent time in hours:minutes:seconds = " << hours << ":" << minutes << ":" << seconds;
  
}

void checkEven(){
  int n;
  cout << "\n\nInput a random number: ";
  cin >> n;
  if(n % 2 == 0){
    cout << true;
  }
  else{
    cout << false;
  }
}

int main() {
  cout << "Hello World!\n";
  
  //Problem 2
  sizeVar();

  //Problem 3
  salary();

  //Problem 4
  secTime();

  //Problem 5
  checkEven();
}