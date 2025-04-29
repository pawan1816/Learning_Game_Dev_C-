#include<iostream>
#include<vector>
#include<fstream>

class Student{
	private:
		std:: string name = "FULL NAME";
		int          uid= 72;
		float        cgpa= 10;
		std ::string universityname="chandigarh University";
	public:
		Student(){}

		Student(std:: string s_name, int s_uid, float s_cgpa)
			:name (s_name)
			,uid  (s_uid)
			,cgpa (s_cgpa)
		{}
		std :: string get_name()const {
		           return name;
	        	}
		       int get_uid(){
			       return uid;
	           }
		       float get_cgpa()const{
			       return cgpa;
		       }
		       void print() const{
			       std:: cout<<name<<" "<<uid<<" "<<cgpa<<std::endl;
		       }
               void display() const{
			       std:: cout<<"NAME"<<" "<<"UID"<<" "<<"CGPA"<<std::endl;
		       }

};

class Course{

	private:
		std:: string course_name="course";
		std:: vector<Student>s_vec;

	public:
		Course(){}

		Course(const std::string& course)
			: course_name(course)
		{
		}

		void add_students(const Student& student)
		{
			s_vec.push_back(student);
		}	

		std:: vector<Student> get_student() const
		{
			return s_vec;
		}
        void loadFromFile(const std:: string& filename)
        {
                std:: ifstream fin(filename);
                std:: string name;
                int uid;
                float cgpa;
                
                while(fin>>name)
                { 
                    fin>>uid>>cgpa;
                    add_students(Student(name,uid,cgpa));
                   
                }               
        }
              
		void print() 
		{
		    std:: cout<<course_name<<std::endl;
			for(const auto& s: s_vec)
			{
				s.print();
			}
		}

};
int main(int argc,char *argv[]){
      Student s1;
	  Student s2("Pawan Kumar Paik",67,0);
	  Student s3("rohan",15,8.7);
	  Student s4("komal",9,4.3);
	  Student s5("hasan",10,8.3);
	  Student s6("hiteshi",34,7.3);
	  Student s7("jagrity love",16,9.3);
	  Student s8("lovleen friend",27,8.3);
	  Student s9("aditya friend",54,7.5);

//	  s1.print();
//	  s2.display();
//	  s3.display();
//	  s4.display();
//	  s5.display();
//	  s6.display();
//	  s7.display();
//	  s8.display();
//	  s9.display();
          


	  Course c;

	  Course c1("COMP 4300");

	  c1.add_students(s1);
   	  c1.add_students(s2);
   	  c1.add_students(s3);
   	  c1.add_students(s4);
   	  c1.add_students(s5);
   	  c1.add_students(s6);
      c1.add_students(s7);
      c1.add_students(s8);
      c1.add_students(s9);
      

      c1.loadFromFile("students.txt");

	  c1.print();


      std:: cout<<"applied setting over the command to compile and the run the code by F5 only.123.."<<std::endl;






//	int age=24;
//	std:: string name="Pawan Kumar Paik";
//	std::cout<<age<<" "<<name<<" "<<std::endl;
//	std:: vector<int>vec;
//	vec.push_back(2);
//	vec.push_back(4);
//	vec.push_back(4);
//	vec.push_back(8);
//	vec.push_back(8);
//	for(size_t i=0;i<vec.size();i++){
//	std:: cout<<i<<" "<<vec[i]<<std::endl;
//	}




//	std:: vector<float>v2;
//	v2.push_back(12.4f);
//	v2.push_back(23.32f);
//	v2.push_back(25.43f);
//	v2.push_back(232.f);
//	for(auto it:v2){
//		std:: cout<<it<<" "<<std::endl;
//	}
//	return 0;



}
