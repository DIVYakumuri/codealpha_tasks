#include<iostream>
using namespace std;//It tells the compiler:“I want to use things from the standard library (std) without writing std:: again and again.”
class CGPA
{
 private:
  int subjectsno;
  char subjectname[15];
  int credithr;
  int grade_points;
  int grade;
  int total_credithr=0;
  float total_points=0.0;
  float cgpa;
  public:
  void input();
  int calculate();
  void output();
};
void CGPA::input()
{
  int i;
  cout<<"Enter the Number of courses:\n";
  cin>>subjectsno;
  cout<<"Enter the required components:\n";
  for(i=1;i<=subjectsno;i++)
  {
    cout<<"Enter Details for Subject "<<i<<":";
    cout<<"Enter subject name :";
    cin>>subjectname;
    cout<<endl;
    cout<<"Enter Grade :";
    cin>>grade;
    cout<<endl;
    cout<<"Enter Credit Hours:";
    cin>>credithr;
    cout<<endl;
  }
}
int CGPA::calculate()
{
  int i;
  for(i=1;i<=subjectsno;i++)
  {
    grade_points=grade*credithr;
    total_credithr=total_credithr+credithr;
    total_points=total_points+grade_points;

  }
  cgpa=float(total_points/total_credithr);
  return cgpa;
}
void CGPA::output()
{
  int i;
  calculate();
  for(i=1;i<=subjectsno;i++)
  {
    cout<<"Details Of Subject "<<i<<":"<<endl;
    cout<<"Subject Name:"<<subjectname<<endl;
    cout<<"Grade :"<<grade<<endl;
    cout<<"Credit Hours:"<<credithr<<endl;
  }
  cout<<"\tCGPA:"<<cgpa<<endl;
}
int main()
{
  CGPA s1;
  s1.input();
  s1.output();
  return 0;
}
