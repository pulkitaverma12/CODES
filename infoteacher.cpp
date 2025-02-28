# include <iostream>
using namespace std;
    class teacher{
        public:
        string name;
        string dept;
        string subject;
        double salary;

        void changedept(string newdept)
        {
            dept = newdept;
        }
};
 int main()
 {
    teacher t1;
    t1.name ="pulkita";
    t1.dept= "cse";
    t1.subject = "cpp";
    t1.salary = 2340;
    cout<<t1.name<<endl;
    cout<<t1.dept<<endl;
    cout<<t1.subject<<endl;
    cout<<t1.salary<<endl;
 }
