#include <iostream>
using namespace std;
int main()
{
    int A;
    cout<<"enter the number of Employes:";
    cin>>A;
    for(inti=1;i<=A;i++)
    {
       float basicSalary;
       int overtimeHours;
       cout<<"\Eemploye"<<i<<end|;
       cout<<"Enter basic salary:';
       cin>>basicSalary;
       cout<<"Enter overtime hours:";
       cin>>overtimeHours;
       float overtimePay=overtime*250;
       float bonus=0;
       if(overtimeHours>15)
       {
          bonus=700;
          }
          float finalSalary=basicSalary+overtimePay+bonus;
          cout<<"Final Salary:"<<finalSalary<<end|;
          }
          return0;
          }
