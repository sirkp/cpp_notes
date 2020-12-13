#include<bits/stdc++.h>
using namespace std;

class Person{
        protected:
            string name;
            int age;
        public:
            Person(){
                cout<<"Person constructor\n";
            }

            Person(string name, int age){
                cout<<"Person constructor\n";
                this->name = name;
                this->age = age;
            }
        };

        class Student: virtual public Person{
        protected:
            int roll;
        public:
            Student(){
                cout<<"Student constructor\n";
            }

            Student(string name, int age, int roll):Person(name, age){
                cout<<"Student constructor\n";
                this->roll = roll;
            }
        };

        class Teacher: virtual public Person{
        protected:
            int empId;
        public:
            Teacher(){
                cout<<"Teacher constructor\n";
            }

            Teacher(string name, int age, int empId):Person(name, age){
                cout<<"Teacher constructor\n";
                this->empId = empId;
            }
        };

        class TeachingAssistant: public Student, public Teacher{
        protected:
            string sub;
        public:
            TeachingAssistant(){
                cout<<"TeachingAssistant constructor\n";
            }

            TeachingAssistant(string name, int age, int roll, int empId, string sub): Teacher(name, age, empId), Student(name, age, roll){
                cout<<"TeachingAssistant constructor\n";
                this->sub = sub;
            }
        };


void test(){
            TeachingAssistant ta("Pradeep", 22, 19, 70, "DSA");
            // output
            // Person constructor
            // Student constructor
            // Person constructor
            // Teacher constructor
            // TeachingAssistant constructor
            
            TeachingAssistant t;
            // output
            // Person constructor
            // Student constructor
            // Person constructor
            // Teacher constructor
            // TeachingAssistant constructor
        }

int main() {
    #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin);
        freopen("output.txt","w",stdout);
    #endif
        test();
}