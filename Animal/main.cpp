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
    void Speak(string noise){
        this->noise = noise;
        cout << noise;
    }
private:

};

class Cat : public Animal{
public:
    Cat (int age) : Animal(age){};
    void Say(){
        noise = "MEOW";
        Speak(noise);
    }
};

class Cow : public Animal{
public:
    Cow (int age) : Animal(age){};
    void Say(){
        noise = "MUU";
        Speak(noise);
    }
};

int main()
{
    Cat Boris(4);
    Boris.Say();
}
