#include<iostream>
#include<utility>
using namespace std;
class MyClass{

    private:
        int *data;
    
    public:

    //Pearamerterized constructor
        MyClass(int value) : data(new int(value)){
            cout<<"Parameterized Constructor: Allocated data with value "<<*data<<endl;
        }

        //Destructor
        ~MyClass(){
            cout<<"Destructor: Relesing Data"<<endl;
        }

        //copy constructor

        MyClass(const MyClass& other) : data(new int(*other.data)){
            cout<<"Copy Constructor copied value = "<<*data<<endl;
        }

        //copy Assignment operator

        MyClass& operator = (const MyClass& other){
            cout<<"Copy Assignment : Copying Value = "<<*other.data<<endl;
            if(this != &other){
                delete  data;
                data = new int(*other.data);
            }
            return *this;
        }

        //Move Constructor

        MyClass(MyClass&& other) noexcept {
            cout<<"Move Constructor: Moving resource"<<endl;
            data = other.data;
            other.data = nullptr;
        }
 // Move Assignment Operator
 MyClass& operator=(MyClass&& other) noexcept {
    cout << "Move Assignment: Moving resource\n";
    if (this != &other) {
        delete data;
        data = other.data;
        other.data = nullptr;
    }
    return *this;
}

// Utility function to print the value
void print() const {
    if (data)
        cout << "Value: " << *data << "\n";
    else
        cout << "Value: nullptr\n";
}
};

// ---------------- Main Function ----------------

int main() {
cout << "--- Creating a\n";
MyClass a(42); //Parameterized constructor

cout << "\n--- Copying a to b\n";
MyClass b = a;  // Copy constructor

cout << "\n--- Moving a to c\n";
MyClass c = move(a);  // Move constructor

cout << "\n--- Assigning b to d\n";
MyClass d(0);
d = b;  // Copy assignment

cout << "\n--- Move assigning c to e\n";
MyClass e(0);
e = move(c);  // Move assignment operator

cout << "\n--- Final values:\n";
b.print();
d.print();
e.print();

cout << "\n--- Exiting main\n";
return 0;
}
