/*Salma Salsabila Kurnia Annifa
185150300111059
Tekkom D
Program Overriding*/
#include <iostream>  
using namespace std;  

//coding untuk multiple inheritance
class boy { 
public: 
    boy(int x)  { cout << "This is the boy constructor" << endl;   } 
    boy()     { cout << "This is the boy constructor" << endl;   } }; 
class girl : virtual public boy { 
public: 
    girl(int x):boy(x) { 
        cout<<"This is the girl one"<< endl;  } };
class human : public girl { 
public: 
//pemangilan akan ditampilkan dari belakang
    human(int x):girl(x), boy(x)   { 
        cout<<"And this one is human"<< endl;  } }; 

//Coding untuk overriding
class Class {	
	public:  
		void definition(){    
		cout<<"A place where student study"<<endl;     }      };   
class student: public Class {    
 	public:  
 		void definition()    {   
 		cout<<"======================================================="<<endl;
		cout<<"OUTPUT FOR OVERRIDING CODING : "<<endl;
        cout<<"A place where a bunch of students study"<<endl;
		cout<<"======================================================="<<endl; 
		cout<<endl; 
		cout<<"OUTPUT FOR MULTIPLE INHERITANCE CODING : "<<endl; }    };  
        
//pemanggilan overriding berserta dengan multiple inheritance
int main(void) {  ;
   student x= student();    
   x.definition();  
   human ta1(50); 
   return 0; }
   
