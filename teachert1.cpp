# include <iostream>
using namespace std;
    class teacher{
        private:
        double salary;
        public:
        string name;
        string dept;
        string subject;

        void changedept(string newdept)
        {
            dept = newdept;
        }
        // setter func
        void setsalary(double s)
        {
            salary = s;
        }
        // getter func
        int getsalary()
        {
            return salary;
        }
};
 int main()
 {
    teacher t1;
    t1.name ="pulkita";
    t1.dept= "cse";
    t1.subject = "cpp";
    t1.setsalary(2500);
    cout<<t1.getsalary()<<endl;
    cout<<t1.name<<endl;
    cout<<t1.dept<<endl;
    cout<<t1.subject<<endl;
 }
