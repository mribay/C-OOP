#include <iostream>

using namespace std;

class Student {

private:
	string Section;
	int Age;
	bool isRegular;

protected:
	string Name;

public:

	string getName() {
		return Name;
	}

	string getSection() {
		return Section;
	}

	int getAge() {
		return Age;
	}

	void setName(string name) {
		Name = name;
	}

	void setSection(string section) {
		Section = section;
	}

	void setAge(int age) {
		Age = age;
	}

	void switchRegularity() {
		isRegular = !isRegular;
	}

	string Regularity() {
		if (isRegular == true) {
			return "Regular";
		}
		else if (isRegular == false) {
			return "Iregular";
		}
	}

	void printInfo() {
		cout << "Name: " << Name << "\n" << "Section: " << Section << "\n" << "Age: " << Age << "\n" << Regularity() << "\n";
	}

	Student(string name, string section, int age, bool isreg) {
		Name = name;
		Section = section;
		Age = age;
		isRegular = isreg;
	}

};

class Employee: public Student {

private:
	float SalaryRate;
	int WorkingDays;

public:

	int getWorkingDays() {
		return WorkingDays;
	}

	float getSalary() {
		float Salary = SalaryRate * WorkingDays;
		return Salary;
	}

	void setSalaryRate(float salaryRate) {
		SalaryRate = salaryRate;
	}

	void setWorkingDays(int workingDays) {
		WorkingDays = workingDays;
	}

	void printInfo() {
		cout << "Name: " << Name << "\n" << "Section: " << getSection() << "\n" << "Age: " << getAge() << "\n" << "Working Days: " << WorkingDays << "\n" << "Salary: $" << getSalary() << "\n" << Regularity() << "\n";
	}

	Employee(string name, string section, int age, bool isreg, float salaryRate, int workingDays):Student(name, section, age, isreg) {
		SalaryRate = salaryRate;
		WorkingDays = workingDays;
	}


};

int main()
{

/*
	Student student1;
	student1.Name = "Jimwell Ibay";
	student1.Section = "IT11C";
	student1.Age = 18;
	student1.isRegular = true;
*/

	Student student2 = Student("Justine Bustos", "IT12B", 20, false);
	student2.printInfo();

	student2.setName("Jimwell Ibay");
	student2.setSection("IT11C");
	student2.setAge(18);
	student2.switchRegularity();

	student2.printInfo();

	Employee employee1 = Employee(student2.getName(), "IT Department 3", student2.getAge() + 2, true, 19, 7);
	employee1.printInfo();

}

