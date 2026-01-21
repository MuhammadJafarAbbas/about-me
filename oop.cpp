#include <iostream>
using namespace std;

// Base class with members of different access levels
class Base {
public:
    int publicVar;
    void publicMethod() {
        cout << "Base::publicMethod() called, publicVar = " << publicVar << endl;
    }

protected:
    int protectedVar;
    void protectedMethod() {
        cout << "Base::protectedMethod() called, protectedVar = " << protectedVar << endl;
    }

private:
    int privateVar;
public:
    // Public getter to access privateVar
    int getPrivateVar() {
        return privateVar;
    }
    void setPrivateVar(int value) {
        privateVar = value;
    }

    Base() : publicVar(10), protectedVar(20), privateVar(30) {}
};

// Derived class using public inheritance
class PublicDerived : public Base {
public:
    void accessBaseMembers() {
        publicVar = 100; // Accessible (public in base, remains public)
        protectedVar = 200; // Accessible (protected in base, remains protected)
        // privateVar = 300; // Error: privateVar is inaccessible
        setPrivateVar(300); // Accessible via public method

        cout << "PublicDerived::accessBaseMembers()" << endl;
        cout << "publicVar = " << publicVar << endl;
        cout << "protectedVar = " << protectedVar << endl;
        cout << "privateVar (via getter) = " << getPrivateVar() << endl;
        publicMethod(); // Accessible
        protectedMethod(); // Accessible
    }
};

// Derived class using protected inheritance
class ProtectedDerived : protected Base {
public:
    void accessBaseMembers() {
        publicVar = 100; // Accessible (public in base, becomes protected)
        protectedVar = 200; // Accessible (protected in base, remains protected)
        // privateVar = 300; // Error: privateVar is inaccessible
        setPrivateVar(300); // Accessible via public method (now protected)

        cout << "ProtectedDerived::accessBaseMembers()" << endl;
        cout << "publicVar = " << publicVar << endl;
        cout << "protectedVar = " << protectedVar << endl;
        cout << "privateVar (via getter) = " << getPrivateVar() << endl;
        publicMethod(); // Accessible (now protected)
        protectedMethod(); // Accessible
    }
};

// Derived class using private inheritance
class PrivateDerived : private Base {
public:
    void accessBaseMembers() {
        publicVar = 100; // Accessible (public in base, becomes private)
        protectedVar = 200; // Accessible (protected in base, becomes private)
        // privateVar = 300; // Error: privateVar is inaccessible
        setPrivateVar(300); // Accessible via public method (now private)

        cout << "PrivateDerived::accessBaseMembers()" << endl;
        cout << "publicVar = " << publicVar << endl;
        cout << "protectedVar = " << protectedVar << endl;
        cout << "privateVar (via getter) = " << getPrivateVar() << endl;
        publicMethod(); // Accessible (now private)
        protectedMethod(); // Accessible
    }
};

// Class to demonstrate protected members are accessible in further derived classes
class SubPublicDerived : public PublicDerived {
public:
    void accessMore() {
        publicVar = 400; // Accessible (public in PublicDerived)
        protectedVar = 500; // Accessible (protected in PublicDerived)
        // privateVar = 600; // Error: privateVar is inaccessible
        setPrivateVar(600); // Accessible via public method

        cout << "SubPublicDerived::accessMore()" << endl;
        cout << "publicVar = " << publicVar << endl;
        cout << "protectedVar = " << protectedVar << endl;
        cout << "privateVar (via getter) = " << getPrivateVar() << endl;
    }
};

int main() {
    cout << "1. Public Inheritance Demo" << endl;
    PublicDerived pubObj;
    pubObj.publicVar = 150; // Accessible (public)
    // pubObj.protectedVar = 250; // Error: protectedVar is protected
    // pubObj.privateVar = 350; // Error: privateVar is private
    pubObj.publicMethod(); // Accessible
    // pubObj.protectedMethod(); // Error: protectedMethod is protected
    pubObj.accessBaseMembers();

    cout << "\n2. Protected Inheritance Demo" << endl;
    ProtectedDerived protObj;
    // protObj.publicVar = 150; // Error: publicVar is protected in ProtectedDerived
    // protObj.protectedVar = 250; // Error: protectedVar is protected
    // protObj.publicMethod(); // Error: publicMethod is protected
    // protObj.protectedMethod(); // Error: protectedMethod is protected
    protObj.accessBaseMembers();

    cout << "\n3. Private Inheritance Demo" << endl;
    PrivateDerived privObj;
    // privObj.publicVar = 150; // Error: publicVar is private in PrivateDerived
    // privObj.protectedVar = 250; // Error: protectedVar is private
    // privObj.publicMethod(); // Error: publicMethod is private
    // privObj.protectedMethod(); // Error: protectedMethod is private
    privObj.accessBaseMembers();

    cout << "\n4. Further Inheritance from PublicDerived" << endl;
    SubPublicDerived subPubObj;
    subPubObj.accessMore();

    return 0;
}
