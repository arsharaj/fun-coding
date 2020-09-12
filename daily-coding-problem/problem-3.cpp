#include<iostream>
#include<string>
using namespace std;

void add() { cout << "Addition" << endl; }
void sub() { cout << "Subtraction" << endl; }
void mult() { cout << "Multiplication" << endl; }
void div() { cout << "Division" << endl; }

void perform_job(string job, string time)
{ 
  // Wait for n number of seconds.
  string command = "sleep ";
  command.append(time + "s ");
  system(command.data());
  if(job == "add") add();
  else if(job == "sub") sub();
  else if(job == "mult") mult();
  else if(job == "div") div();
  else cout << "No functionality" << endl;
}

int main()
{
  string job;
  string time;
  cout << "----Job Scheduler-----" << endl;
  cout << "Enter the job name : ";
  cin >> job;
  cout << "Enter the time to delay the job : ";
  cin >> time;
  perform_job(job, time);
  cout << endl;
  return 0;
}
