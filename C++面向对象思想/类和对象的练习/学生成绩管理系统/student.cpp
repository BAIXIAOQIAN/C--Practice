#include<iostream>
#include<string>
using namespace std;

class Student{
    private:
        string stu_name; string stu_num;
        int    stu_age; int stu_grade[4];
    public:
        void student_info();
        double student_avage();
        void student_print();
};

void Student::student_info() {
     cin>>stu_name>>stu_age>>stu_num;
     for(int i=0; i < 4; i++){
         cin>>stu_grade[i];
     }
}

double Student::student_avage(){
    double sum = 0.0;
    for(int i=0;i<4;i++){
        sum+=stu_grade[i];
    }
    return sum/4;
}

void Student::student_print(){
    cout<<stu_name<<","<<stu_age<<","<<stu_num<<","<<student_avage()<<endl;
}

int main(){
    Student T;
    T.student_info();
    T.student_print();
    return 0;
}
