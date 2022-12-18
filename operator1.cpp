#include<iostream>
using namespace std;
int main()
{
    int num1,num2,a;
    cout<<"num1:";
    cin>>num1;
    cout<<"num2:";
    cin>>num2;

   //AIRTHMATIC OPERATORS--------------------------------------------------
    cout<<"The addition is:"<<num1+num2<<endl;
    cout<<"The substractio is:"<<num1-num2<<endl;
    cout<<"The multiplication is:"<<num1*num2<<endl;
    cout<<"The division is:"<<num1/num2<<endl;

    //RELATIONAL OPERATORS---------------------------------------------------
    cout<<"Relational operators are:"<<endl<<(num1==num2)<<endl;
    cout<<(num1!=num2)<<endl;
    cout<<(num1>=num2)<<endl;

    //LOGICAL OPERATOR--------------------------------------------------------
    cout<<"Logical operators are:"<<endl;
    cout<<(num1&&num2)<<endl;
    cout<<(num1||num2)<<endl;
    cout<<(!num1)<<endl;

    //ASSIGNMENT OPERATORS-----------------------------------------------------
    cout<<"Assignment operators are:"<<endl;
    cout<<(num1+=1)<<endl;
    cout<<(num2-=1)<<endl;
    cout<<(num1/=2)<<endl;
    cout<<(num1%=2)<<endl;  

    //BITWISE OPERATORS----------------------------------------------------------
    cout<<"Bitwise operator are:"<<endl;
    cout<<(num2<<2)<<endl;
    cout<<(num1>>2)<<endl;
    cout<<(num1&num2)<<endl;
    cout<<(num1|num2)<<endl;    

    //MISC OPERATOR-------------------------------------------------------------
    cout<<"Misc Operators are:"<<endl;
    cout<<sizeof(num1)<<endl;    //sizeof operator...........
    cout<<(num1=1,2,3)<<endl;    //comma operator.............
                                 //dot and arrow operator..........
                                 //casting operator..............
                                 //& address operator............
                                 //* pointer operator..........     

    //UNARY OPERATOR--------------------------------------------------------------
    //(+unary plus,-unary minus,++increment operator,--decrement operator,!logical complement operator)
    cout<<"Unary operators are:"<<endl;
    cout<<(num1++)<<endl;
    cout<<(++num2)<<endl;

    //OPERATOR PRECEDENCE AND ASSOCIATION-------------------------------------------
    //(Given in table box in book)

  









    
     return 0;
}