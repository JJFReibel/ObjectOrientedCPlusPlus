/*
MIT License

Copyright (c) 2020 Jean-Jacques François Reibel

Permission is hereby granted, free of charge, to any person obtaining a copy
of this software and associated documentation files (the "Software"), to deal
in the Software without restriction, including without limitation the rights
to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
copies of the Software, and to permit persons to whom the Software is
furnished to do so, subject to the following conditions:

The above copyright notice and this permission notice shall be included in all
copies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
SOFTWARE.
*/

#include <iostream>
using namespace std;

class Car {
  public:
    int wheels, doors, cylinders;
    Car(int wheelsInput, int doorsInput, int cylindersInput){
      wheels = wheelsInput;
      doors = doorsInput;
      cylinders = cylindersInput;
    }
    void addWheels (int wheels) {
      this->wheels = this->wheels + wheels;
    }
    void addDoors (int doors) {
      this->doors = this->doors + doors;
    }
    void addCylinders (int cylinders) {
      this->cylinders = this->cylinders + cylinders;
    }
    void deleteWheels (int wheels) {
      this->wheels = this->wheels - wheels;
    }
    void deleteDoors (int doors) {
      this->doors = this->doors - doors;
    }
    void deleteCylinders (int cylinders) {
      this->cylinders = this->cylinders - cylinders;
    }
};

int main () {
  cout << "Creating car. \n";
  Car subaru(4, 4, 4);
  cout << "Wheels check: " << subaru.wheels << "\n";
  cout << "Doors check: " << subaru.doors << "\n";
  cout << "Cylinders check: " << subaru.cylinders << "\n \n";
  cout << "Adding wheel directly to car object. \n";
  subaru.wheels = 5;
  cout << "Wheels check: " << subaru.wheels << "\n";
  cout << "Doors check: " << subaru.doors << "\n";
  cout << "Cylinders check: " << subaru.cylinders << "\n \n";
  cout << "Removing wheel using object method. \n";
  subaru.deleteWheels(1);
  cout << "Wheels check: " << subaru.wheels << "\n";
  cout << "Doors check: " << subaru.doors << "\n";
  cout << "Cylinders check: " << subaru.cylinders << "\n \n";

  return 0;
}