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
        cout << noise << endl;
    }
};

class Cat : public Animal{
public:
    Cat (int age) : Animal(age){};
    void Say(){
        if(age > 5)
            noise = "MEOW";
        else
            noise = "meow";
        Speak(noise);
    }
};

class Cow : public Animal{
public:
    Cow (int age) : Animal(age){};
    void Say(){
        if(age > 5)
            noise = "MUU";
        else
            noise = "muu";
        Speak(noise);
    }
};

int main()
{
    Cat* A[100];
    int k;
    for(int i = 0; i < 5; i++){
        cin >> k;
        A[i] = new Cat(k);
        A[i] -> Say();
    }
}
