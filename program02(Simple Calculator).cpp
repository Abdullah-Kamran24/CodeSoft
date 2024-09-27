#include <iostream> //Standard input and output iostream library
using namespace std; //use standard namespace instead of write std::

struct calculator{ //Here making an  structure (struct) name as calculator
    public: //Declare the public variable
        double num1; // Declare the vaiable  as num1
        double num2; //Declare the variable as num2
        char choice; //Declaring the variable choice to choose opeartor
  
  //function of defination
  void arithmetic_operator(){
      
      do{
    
    cout<<"\t\tEnter your First number: ";
    cin>>num1; //taking the first name from the user
    
    cout<<"\t\tEnter your  Second Number: ";
    cin>>num2; //taking second name from the user
    
    cout<<endl;
          
      //Here, displayig the list of operators
       cout<<"Calculator Operators are given below:"<<endl;
       cout<<"\t1) Addition (+)" <<endl;
       cout<<"\t2) Substraction (-) " <<endl;
       cout<<"\t3) Multiplication (*)" <<endl;
       cout<<"\t4) Division(/)" <<endl;
       
       cout<<endl;
       
       cout<<"Enter which operator you want to print: ";
       cin>> choice;//to choose the operator by the user 
      
      cout<< "Outcome: "<<endl;
      
        switch(choice){ //using switch to perform operaor according to the selected choice of user
        
           case '+': //for addition
            cout<< num1 <<" + "<< num2 <<" = "<< num1 + num2;
            break;
           
           case '-': //for substration
            cout<< num1 <<" - "<< num2 <<" = "<< num1 - num2;
            break;
           
           case '*': //for multiplication
            cout<< num1 <<" * "<< num2 <<" = "<< num1 * num2;
            break;
           
           case '/': //for division
            cout<< num1 <<" / "<< num2 <<" = "<< num1 / num2;
            break;
        
           default: //if the user put invalid symbol
           cout<<"Invalid Operator!"<<endl;
           
        }

        cout<<endl<<endl << "x - x - x - x - x - x - x - x - x - x - x - x";
        
        cout<<endl<<endl;

      }while(choice >= 4); //repeat the loop till the choice is not greater to 4
  }
  
};

calculator c1; //create an object of calculator strut 
       
int main() 
{
     cout<< "\t\t\t\t\tSIMPLE CALCULATOR"<<endl<<endl; //display message
    c1.arithmetic_operator(); //Function of calling 
    
    return 0; //progam execute successfully
}


