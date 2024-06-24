

# Chapter 5: Object-Oriented Programming in C++

In this chapter, we'll dive into the fundamental concepts of Object-Oriented Programming (OOP) in C++, including classes, objects, encapsulation, inheritance, and polymorphism.

## Classes and Objects

In C++, a class is a user-defined data type that encapsulates data (attributes) and functions (methods) that operate on that data. An object is an instance of a class.

Here's an example of a simple `Car` class:

```cpp
class Car {
private:
    std::string make;
    std::string model;
    int year;

public:
    void setMake(std::string newMake) {
        make = newMake;
    }

    void setModel(std::string newModel) {
        model = newModel;
    }

    void setYear(int newYear) {
        year = newYear;
    }

    void displayInfo() {
        std::cout << "Make: " << make << std::endl;
        std::cout << "Model: " << model << std::endl;
        std::cout << "Year: " << year << std::endl;
    }
};

int main() {
    Car myCar;
    myCar.setMake("Toyota");
    myCar.setModel("Corolla");
    myCar.setYear(2022);
    myCar.displayInfo();

    return 0;
}
```

In this example, the `Car` class has three private attributes (`make`, `model`, and `year`) and four public methods (`setMake`, `setModel`, `setYear`, and `displayInfo`).

## Inheritance

Inheritance is a fundamental concept in OOP that allows you to create new classes based on existing ones. The new class (called the derived class or child class) inherits the data and behavior of the existing class (called the base class or parent class).

Here's an example of a `ElectricCar` class that inherits from the `Car` class:

```cpp
class ElectricCar : public Car {
private:
    int batteryCapacity;

public:
    void setBatteryCapacity(int capacity) {
        batteryCapacity = capacity;
    }

    void displayInfo() {
        Car::displayInfo(); // Call the base class method
        std::cout << "Battery Capacity: " << batteryCapacity << " kWh" << std::endl;
    }
};

int main() {
    ElectricCar myEVCar;
    myEVCar.setMake("Tesla");
    myEVCar.setModel("Model S");
    myEVCar.setYear(2023);
    myEVCar.setBatteryCapacity(100);
    myEVCar.displayInfo();

    return 0;
}
```

In this example, the `ElectricCar` class inherits from the `Car` class and adds a new attribute (`batteryCapacity`) and overrides the `displayInfo` method to include the battery capacity information.

## Polymorphism

Polymorphism is the ability of objects of different classes to be treated as objects of a common superclass. This allows for code reuse and flexibility in your program.

Here's an example of polymorphism using the `Car` and `ElectricCar` classes:

```cpp
void printCarInfo(Car* car) {
    car->displayInfo();
}

int main() {
    Car regularCar;
    regularCar.setMake("Toyota");
    regularCar.setModel("Corolla");
    regularCar.setYear(2022);

    ElectricCar evCar;
    evCar.setMake("Tesla");
    evCar.setModel("Model S");
    evCar.setYear(2023);
    evCar.setBatteryCapacity(100);

    printCarInfo(&regularCar);
    printCarInfo(&evCar);

    return 0;
}
```

In this example, the `printCarInfo` function can accept either a `Car*` or an `ElectricCar*` pointer, and it will call the appropriate `displayInfo` method based on the actual type of the object.

These are just a few of the fundamental concepts in object-oriented programming in C++. In the next chapter, we'll explore more advanced topics, such as operator overloading and templates.