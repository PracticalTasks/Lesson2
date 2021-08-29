#include<iostream>

class Person
{
	std::string name;
	int age;
	std::string gender;
	int weight;

public:
	Person(std::string _name = "", int _age = 0, std::string _gender = "", int _weight = 0) : name(_name), age(_age),
		gender(_gender), weight(_weight) {}

	void setName(std::string _name)
	{
		name = _name;
	}
	void setAge(int _age)
	{
		age = _age;
	}
	void setGender(std::string _gender)
	{
		gender = _gender;
	}
	void setWeight(int _weight)
	{
		weight = _weight;
	}

	std::string getName()
	{
		return name;
	}

	int getAge()
	{
		return age;
	}

	std::string getGender()
	{
		return gender;
	}

	int getWeight()
	{
		return weight;
	}
};

class Student : public Person
{
	int yearStudy;

public:
	Student(int _yearStudy = 0) : yearStudy(_yearStudy) {}

	void setYearStady(int _yearStady)
	{
		yearStudy = _yearStady;
	}

	int getYearStudy()
	{
		return yearStudy;
	}
};

class Fruit
{
	std::string name;
	std::string color;

public:
	Fruit(std::string _name, std::string _color) : name(_name), color(_color) {}

	std::string getName()
	{
		return name;
	}

	std::string getColor()
	{
		return color;
	}
};

class Apple : public Fruit
{
public:
	Apple(std::string _color, std::string _name = "apple") : Fruit(_name, _color) {}
};

class Banana : public Fruit
{
public:
	Banana(std::string _name = "banana", std::string _color = "yellow") : Fruit(_name, _color) {}
};

class GrannySmith: public Apple
{
public:
	GrannySmith(std::string _name ="Granny Smith apple", std::string _color = "green") : Apple(_color, _name){}
};

int main()
{
	//Task 1
	{
		std::cout << "Task 1\n";
		std::string name;
		int age{};
		std::string gender;
		int weight{};
		int yearStudy{};
		const int SZ{ 100 };
		Student arr[SZ];
		int countStudents{};
		for (int i{}; i < SZ; i++)
		{
			std::cout << "Enter student name "<<i+1<<" or if want to escape !q: ";
			std::cin >> name;
			if (name == "!q")
				break;
			arr[i].setName(name);
			std::cout << "Enter age student: ";
			std::cin >> age;
			arr[i].setAge(age);
			std::cout << "Enter gender student: ";
			std::cin >> gender;
			arr[i].setGender(gender);
			std::cout << "Enter weight student: ";
			std::cin >> weight;
			arr[i].setWeight(weight);
			std::cout << "Enter the student's years of study: ";
			std::cin >> yearStudy;
			arr[i].setYearStady(yearStudy);
			countStudents++;
		}

		std::cout << "We have " << countStudents << " students choose one of them or press 0 to exit: \n";
		int numb{ 0 };
		while (true)
		{
			std::cin >> numb;
			if (numb == 0)
				break;
			std::cout <<"Name: "<< arr[numb - 1].getName() <<" Age: "<< arr[numb - 1].getAge() <<" Gender: "<< 
				arr[numb - 1].getGender()<<" Weight: "<< arr[numb - 1].getWeight() <<" Years of study: "<< arr[numb - 1].getYearStudy() << '\n';
			std::cout << "We have " << countStudents << " students choose one of them or press 0 to exit: \n";
		}
	}
	//Task 2
	{
		std::cout << "\n\nTask 2\n";
		Apple a("red");
		Banana b;
		GrannySmith c;

		std::cout << "My " << a.getName() << " is " << a.getColor() << ".\n";
		std::cout << "My " << b.getName() << " is " << b.getColor() << ".\n";
		std::cout << "My " << c.getName() << " is " << c.getColor() << ".\n";
	}
}

//Задание 3
/*
Классы для игры в Blackjack
Главный класс Blackjack, колода карт, карта, игрок, дилер наследуется от игрока, карты на руках, стопка карт.
*/