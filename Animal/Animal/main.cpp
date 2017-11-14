#include <iostream>
#include <bits/stdc++.h>

using namespace std;

class  Animal{
protected:
    int age;
    string noise;
    Animal(int age){
        this->age = age;
    }
public:
    void Say(){
        cout << noise << endl;
    }
};

class Cat : public Animal{
public:
    Cat (int age) : Animal(age){
    if(age > 5)
        noise = "MEOW";
    else
        noise = "meow";
    };
};

class Cow : public Animal{
public:
    Cow (int age) : Animal(age){
    if(age > 5)
        noise = "MUU";
    else
        noise = "muu";
    };
};

int main()
{
    Cow* A[100];
    int k;
    for(int i = 0; i < 5; i++){
        cin >> k;
        A[i] = new Cow(k);
        A[i] -> Say();
    }
}
