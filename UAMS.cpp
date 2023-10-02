#include <iostream>
#include <windows.h>
using namespace std ;
void name();
void givingchoice() ;
void management() ;
void choice1() ;
void choice2() ;
void calculateAggregate(string name1,float matricMarks,float interMarks, float ecatMarks);
main()
{
 
           management();
           givingchoice();
 





}
           void name()
{


           system ("color 04");
           cout<<"University of Engineering and Technology"<<endl;
           system("color 0B");       
           cout<<"_________________________________________________________________________________________________________"<<endl;
} 
           void management()
{
           name();
           system("color 0B");
           int password;
           cout<<"Welcome to Uet Managment system"<<endl;
           system("color 0B");
           cout<<"E-mail password : ";
           cin>>password; 
 } 
           void givingchoice() 
 {
           system("cls");
           name();
           int choice;
           system("color 0B");
           cout<<"For calculating aggregate, tap 1"<<endl;
           system("color 0B");
           cout<<"For comparing marks, tap 2"<<endl;  

            system("color 0B");

            cout<<"Enter your choice: ";
            cin>>choice; 
            if(choice==1)
{ 
            choice1() ;
}
            if(choice==2)
{
            choice2() ;
}
}
            void choice1() 
{
            system("cls");
            name();
            system("color 0B");
            float matricmarks,intermarks,ecat;
            string namee;
            cout<<"Enter student name: ";
            cin>>namee;
            cout<<"Enter matric marks: ";
            cin>>matricmarks;
            cout<<"Enter inter marks: ";
            cin>>intermarks;
            cout<<"Enter ecat marks: ";
            cin>>ecat;
            calculateAggregate(namee, matricmarks, intermarks, ecat);
}
            void calculateAggregate(string name1,float matricMarks,float interMarks, float ecatMarks)
{
            float aggregate = (matricMarks/1100 * 30) + (interMarks/1100 * 30) + (ecatMarks/400 * 40);
            cout << "The aggregate of " << name1 << " is: " << aggregate << endl;

}
            void choice2() 
{
            string nameStd1;
            int ecatMarksStd1;
            string nameStd2;
            int ecatMarksStd2;

            cout << "Enter the name of student 1: ";
            cin >> nameStd1;

            cout << "Enter the ecat marks of student 1: ";
            cin >> ecatMarksStd1;

            cout << "Enter the name of student 2: ";
            cin >> nameStd2;

            cout << "Enter the ecat marks of student 2: ";
            cin >> ecatMarksStd2;

            

            if (ecatMarksStd1>ecatMarksStd2)
 {
                cout << nameStd1 << " will get the first roll number." << endl;
 }
            if (ecatMarksStd1<ecatMarksStd2)
 {
                cout << nameStd2 << " will get the first roll number." << endl;
            } 
            if (ecatMarksStd1 == ecatMarksStd2)
            {
                cout << "Both students have the same ecat marks." << endl;
            }

}



