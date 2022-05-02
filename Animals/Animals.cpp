#include <iostream>
#include <Windows.h>
#include <cstdlib>

using namespace std;

class Animals {
public:
    string name;
    string type;

  virtual  void Show() = 0;
  virtual void Type() = 0;
  virtual void Sound() = 0;
};

class Dog : virtual public Animals {
public:
    Dog() {
        this->name = "Rex";
        this->type = "mammal";
    }
    void Show() override {
        cout << "Info: " << endl;
        cout << "Name: " << this->name << endl;
   }
    void Type() override {
        cout << "Type: " << this->type << endl;
    }

    void Sound() override {
        cout << "Sound: GAV-GAV" << endl;
    }
};

class Cat : virtual public Animals {
public:
    Cat() {
        this->name = "Ryzhik";
        this->type = "mammal";
    }
    void Show() override {
        cout << "Info: " << endl;
        cout << "Name: " << this->name << endl;
    }
    void Type() override {
        cout << "Type: " << this->type << endl;
    }

    void Sound() override {
        cout << "Sound: MAU-MAU" << endl;
    }
   
};

class Parrot : virtual public Animals {
public:
    Parrot() {
        this->name = "Kesha";
        this->type = "bird";
    }
    void Show() override {
        cout << "Info: " << endl;
        cout << "Name: " << this->name << endl;
    }
    void Type() override {
        cout << "Type: " << this->type << endl;
    }

    void Sound() override {
        cout << "Sound: KAR-KAR" << endl;
    }
};

class Hamster : virtual public Animals {
public:
    Hamster() {
        this->name = "Vasyl";
        this->type = "hamster";
    }
    void Show() override {
        cout << "Info: " << endl;
        cout << "Name: " << this->name << endl;
    }
    void Type() override {
        cout << "Type: " << this->type << endl;
    }

    void Sound() override {
        cout << "Sound: FR-FR" << endl;
    }
};

int main()
{
    uint32_t size = 4;
    Animals** animals = new Animals * [size] {
        new Dog(),
            new Cat(),
            new Parrot(),
            new Hamster() 
    };

    for (size_t i = 0; i < size; i++)
    {
        cout << "Animal" << i + 1 << endl;
        animals[i]->Show();
        animals[i]->Type();
        animals[i]->Sound();
        cout << endl << endl;
    }
}