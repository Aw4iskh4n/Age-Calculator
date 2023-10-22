// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

int main() {
    
int tyear, tmonth, tdate, byear, bmonth, bdate, ageyear, agemonth, agedate;

 time_t now = time(0);
 tm *ltm = localtime(&now);
 
 tyear = 1900 + ltm->tm_year;
 tmonth = 1 + ltm->tm_mon;
 tdate = ltm->tm_mday;
 
 cout<<"Enter your date of birth (1-31): ";
 cin>>bdate;
 
 cout<<"Enter your month of birth (1-12): ";
 cin>>bmonth;
 
 cout<<"Enter your year of birth (4 digits): ";
 cin>>byear;
 
 ageyear = tyear - byear;
 
 
 if(tmonth >= bmonth)
 {
     agemonth = tmonth - bmonth;
 }
 
 else
 {
     agemonth = (12 + tmonth) - bmonth;
     ageyear = ageyear - 1;
 }
 
 if(tdate < bdate )
 
{
    agedate = (31 + tdate) - bdate;
    agemonth = agemonth - 1;
}
 
else if (tdate == bdate)

{
    agedate = tdate - bdate;
}
 
else
{
    agemonth = agemonth + 1;
    agedate = tdate - bdate;
}
 

 cout<<endl<<endl<<endl<<"Your age is " <<ageyear<<" years "<<agemonth <<" months "<<agedate <<" days "<<endl;
 
 
 
  return 0;


}
