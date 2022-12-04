#include<iostream>
using namespace std;

class Student
{
    protected:
        char name[25],gender[25],address[25];
        int age,roll_no;
        
    public:
        void sdetails()
        {
            cout<<"\t\t\t**************************************************************\n";
            cout<<"\t\t\t\t\tPERSONAL DETAILS\n";
            cout<<"\t\t\t**************************************************************\n";
            cout<<"\t\t\tEnter your name:";
            cin>>name;
            
            cout<<"\n\t\t\tEnter your roll number:";
            cin>>roll_no;
            
            cout<<"\n\t\t\tEnter your age:";
            cin>>age;
            
            cout<<"\n\t\t\tEnter your gender:";
            cin>>gender;
            
            cout<<"\n\t\t\tEnter your address:";
            cin>>address;

        }
        void stud_display();
};

void Student::stud_display()
{
    cout<<"\t\t\t**************************************************************\n";
     cout<<"\t\t\t\t\tPERSONAL DETAILS\n";
    cout<<"\t\t\t**************************************************************\n";
    
    cout<<"\t\t\tName="<<name;
    cout<<"\n\t\t\tRolll Number="<<age;
    cout<<"\n\t\t\tAge="<<age;
    cout<<"\n\t\t\tGender="<<gender;
    cout<<"\n\t\t\tAddress="<<address;
    
}


class Academics
{
    protected:
        int marks,result,subject,distinction;
        
    public:
        void result1()
        {
            cout<<"\t\t\t**************************************************************\n";
            cout<<"\t\t\t\t\tACADEMIC PERFORMANCE";
            cout<<"\n\t\t\t**************************************************************\n";
            cout<<"\t\t\tEnter your Last Semester Total Marks:";
            cin>>marks;
            
            if(result>100 && result<0)
            {
                cout<<"\n\t\t\tEnter valid marks:";
            }
            
            cout<<"\n\t\t\tEnter number of subjects you had in last semester:";
            cin>>subject;
            
            result=marks/subject;
            
            
        }
        
        void res_display()
        {
            cout<<"\t\t\t**************************************************************\n";
            cout<<"\t\t\t\t\tACADEMIC PERFORMANCE";
            cout<<"\n\t\t\t**************************************************************\n";
            
            
            if(result>100 && result<0)
            {
                cout<<"\n\t\t\tEnter valid marks:";
            }
            
            else if(result>=90)
            {
                cout<<"\n\t\t\tA+ GRADE";
            }
            
            else if(result>=80)
            {
                cout<<"\n\t\t\tA GRADE";
            }
            
            else if(result>=70)
            {
                cout<<"\n\t\t\tB+ GRADE";
            }
            
            else if(result>=60)
            {
                cout<<"\n\t\t\tB GRADE";
            }
            
            else if(result>=50)
            {
                cout<<"\n\t\t\tC GRADE";
            }
            
            else if(result>=35)
            {
                cout<<"\n\t\t\tD GRADE";
            }
            
            else
            {
                cout<<"\n\t\t\tFAIL";
            }
        }
};

class Confirmation:public Student,public Academics
{
    int ch;
    
        public:
            void final()
            {
                cout<<"\t\t\t**************************************************************\n";
                cout<<"\t\t\t Confirm to add these details:"; 
                cout<<"\t\t1.YES\t\t2.NO\n";
                cout<<"\t\t\tEnter your choice: ";
                cin>>ch;
                
                switch(ch)
                {
                
                    case 1:
                        cout<<"\n\n\t\t\tEntered Details are:";
                        break;
                    
                    case 2:
                    cout<<"\t\t\t**************************************************************\n";
                    cout<<"\n\n\t\t\t\t\tFAILED TO ENTER DETAILS";
                    cout<<"\t\t\t**************************************************************\n";
                }
            }   
    
};

int main()
{
    Confirmation c;
    
        c.sdetails();
        c.result1();
        c.final();
        c.stud_display();
        c.res_display();
    return 0;
}




