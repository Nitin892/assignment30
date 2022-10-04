//1. Write a C++ program to demonstrate the use of try, catch block with the argument as an
//integer and string using multiple catch blocks.

#include <iostream>

using namespace std;

int main() {
    try {
        int a = 0;
        string name = "nitin";
        if (a == 0)
            throw (a);
        else {
            cout << a;
        }
        if (name == "nitin")
            throw (name);
        else {
            cout << name;
        }
    }
    catch (int a) {
        cout << "NUmber is zero" << endl;
    }
    catch (string name) {
        cout << name << " is nitin" << endl;
    }
    return 0;
}

//2. Write a C++ program to demonstrate try, throw and catch statements.


#include <iostream>

using namespace std;

int main() {
    try {
        //try to execute but if there any error
        //handle with throw keyword;
        int a=0;
        throw (a);
    }
    catch (int ){
        //catch keyword catch exception thrown by the throw keyword;
    }
    return 0;
}

//3. Write a C++ program to perform arithmetic operations on two numbers and throw an
//exception if the dividend is zero or does not contain an operator.


#include <iostream>

using namespace std;

int main() {
    try {

        int a,b;
        cin>>a>>b;
        if(b==0){
            throw (b);
        }
        else{
            cout<<a/b;
        }

    }
    catch (int e){
        cout<<"Zero division error";
    }
    return 0;
}
//4. Write a C++ program to accept an email address and throw an exception if it does not
//contain @ symbol.

#include <iostream>

using namespace std;
int validemail(string email){
    for (int i = 0; i < email[i]; ++i) {
        if(email[i]=='@')
            return 1;
    }
    return 0;
}

int main() {
    try {
        string email;
        cin>>email;
        if(validemail(email)==0){
            throw(email);
        }
        else{
            cout<<"Valid Email";
        }
    }
    catch (string email){
        cout<<"Invalid Email";
    }

    return 0;
}

//5. Write a C++ program to accept a mobile number and throw an exception if it does not
//contain 10 digits.

#include <iostream>

using namespace std;
int validNumber(long int num){
    int c=0;
    while (num>0){
        c++;
        num=num/10;
    }
    if(c==10)
        return 1;
    return 0;
}

int main() {
    try {
        long int num;
        cin>>num;
        if(validNumber(num)==0){
            throw(num);
        }
        else{
            cout<<"Valid Mobile Number";
        }
    }
    catch (long int num){
        cout<<"Invalid Mobile Number";
    }
    return 0;
}

//6. Write a C++ program to accept area pin code and throw an exception if it does not
//contain 6 digits.

#include <iostream>

using namespace std;

int validPinCode(int pin){
    int c=0;
    while (pin>0){
        c++;
        pin=pin/10;
    }
    if(c==6)
        return 1;
    return 0;
}

int main(){
    try {
        int pin;
        cin>>pin;
        if(validPinCode(pin)==0)
            throw(pin);
        else{
            cout<<"valid pin code"<<endl;
        }
    }

    catch (int pin){
        cout<<"invalid Pin code"<<endl;
    }
    return 0;
}

//7. Write a C++ program to accept a username if the username has less than 6 characters
//or does contain any digit or special symbol

#include <iostream>
using namespace std;
bool validUsername(string name){
    for (int i = 0; name[i]; ++i) {
        if(!((name[i]>=65 && name[i]<=90) || (name[i]>=97 && name[i]<=122)))
            return false;

    }
    return true;
}
int main(){
    try{
        string name;
        cin>>name;
        if (validUsername(name)){
            cout<<"Valid Username"<<endl;
        }
        else{
            throw (name);
        }
    }
    catch (string name){
        cout<<"Invalid username"<<endl;
    }
    return 0;
}

//8. Write a C++ program to accept a password and throw an exception if the password has
//less than 6 characters or does not contain a digit or does not contain any special
//character or does not contain any capital letter.
#include <iostream>
using namespace std;
bool ispassword(char name[]){
    int i = 0;
    for (; name[i]; ++i);
    if (i>8||i==0)
        return false;
    for (int j = 0; name[j]; ++j) {
        if(!((name[j]>='A' && name[j]<='Z') || (name[j]>='a' && name[j]<='z')))
            return false;
    }
    return true;
}

int main(){
    try{
        char name[]="";
        if(ispassword(name)== true)
            cout<<name<<" is valid password";
        else throw (name);
    }

    catch (char name[]){
        cout<<name<<" is invalid password";
    }

 return 0;
}

//9. Write a C++ program to accept Gmail id only and throw an exception if the id does not
//contain @ and gmail.com

#include <iostream>

using namespace std;

bool isGmailid(char name[]) {

    int i = 0;
    for (; name[i]; i++);
    char s[] = "@gmail.com";
    int size = i-10;
    if(i<=10)
        return false;
    for (int j = 0,k=size; s[j]; ++j,k++) {
        if(s[j]!=name[k])
            return false;
    }
    return true;

}

int main() {


    try{
        char name[] = "nitin@gmail.com";
        if(isGmailid(name)==1)
            cout<<name<<" is valid gmail";
        else
            throw(name);
    }

    catch (const char name[]){
        cout<<name<<" is invalid gmail";
    }


    return 0;
}

//10. Write a C++ program to accept Nickname and throw an exception if it has greater than 8
//characters or does contain a digit or special symbol or space.

#include <iostream>

using namespace std;

bool isvalidname(char name[]) {
    int i = 0;
    int digit = 0;
    int charflag = 0;
    int space = 0;
    int special = 0;
    for (; name[i]; ++i);
    if (i > 8 || i == 0)
        return false;

    for (int j = 0; name[j]; ++j) {
        if((name[j]>='A' && name[j]<='Z') || (name[j]>='a' && name[j]<='z'))
            charflag =1;
        if(name[j]>=48 && name[j]<=57)
            digit = 1;
        else if(name[j]==' ')
            space = 1;
        else if((name[j]>=32 &&name[j]<=47)||(name[j]>=58 &&name[j]<=64)||(name[j]>=91 &&name[j]<=96)||(name[j]>=123 &&name[j]<=126)  )         // 32–47 / 58–64 / 91–96 / 123–126
            special = 1;
    }

    if( charflag==1 && (digit==1|| space==1 || special==1))
        return true;
    return false;
}

int main() {
    try {
        char name[] = "n";
        if (isvalidname(name) == true)
            cout << name << " is valid nickname";
        else throw (name);
    }

    catch (char name[]) {
        cout << name << " is invalid nickname";
    }

    return 0;
}
