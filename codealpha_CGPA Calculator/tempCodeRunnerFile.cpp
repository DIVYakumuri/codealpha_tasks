#include <iostream>
#include <string>
using namespace std; // It tells the compiler:“I want to use things from the standard library (std) without writing std:: again and again.”
class CGPA
{
private:
  int semester;
  int subjectsno[17] ;
  float cgpa;
  string subjectname[15][15];
  int credithr[15][15];
  int grade_points[15][15];
  int grade[15][15];
  float scgpa[10];
  int overall_credits=0;
  float overall_points=0.0;

public:
  void input();
  float calculate();
  void output();
};
void CGPA::input()
{
  int i, j;
  cout << "Enter the Number of Semester:\n";
  cin >> semester;
  for (i = 0; i < semester; i++)
  {
    cout << "Enter the Number of courses in " << i + 1 << " semester:\n";
    cin >> subjectsno[i];
    cout << "Enter the required components:\n";
    for (j = 0; j < subjectsno[i]; j++)
    {
      cout << "Enter Details for Subject " << j + 1 << ":";
      cout << "Enter subject name :";
      cin >> subjectname[i][j];
      cout << endl;
      cout << "Enter Grade :";
      cin >> grade[i][j];
      cout << endl;
      cout << "Enter Credit Hours:";
      cin >> credithr[i][j];
      cout << endl;
    }
  }
}
float CGPA::calculate()
{
  int i,j;
   int overall_credits=0;
   float overall_points=0.0;
  
  for (i = 0; i < semester; i++)
  {
    int sem_total_credithr = 0;
    float sem_total_points = 0.0;
  
    for (j = 0; j < subjectsno[i]; j++)
    {
      grade_points[i][j] = grade[i][j] * credithr[i][j];
      sem_total_credithr = sem_total_credithr + credithr[i][j];
      sem_total_points = sem_total_points + grade_points[i][j];
    }
    scgpa[i] = float(sem_total_points) / sem_total_credithr;
    overall_credits += sem_total_credithr;
    overall_points += sem_total_points;
  }
  cgpa=overall_points / overall_credits;
  
  return cgpa;
}
void CGPA::output()
{
  int i,j;
  calculate();
  for(i=0;i<semester;i++)
{
  cout<<"Details of semester"<<i+1<<" :";
  for (j = 0; j < subjectsno[i]; j++)
  {
    cout << "Details Of Subject " << j + 1 << ":" << endl;
    cout << "Subject Name:" << subjectname[i][j] << endl;
    cout << "Grade :" << grade[i][j] << endl;
    cout << "Credit Hours:" << credithr[i][j] << endl;
  }
  cout<<"SCPA = "<<scgpa[i]<<endl;
}
  cout << "\tCGPA:" << cgpa << endl;
}
int main()
{
  CGPA s1;
  s1.input();
  s1.output();
  return 0;
}
