#include <iostream>
#include <fstream>
#include <string>
#include <sstream> // For parsing lines
Name: John
Age: 23
Initial: J
IsStudent: true
Grade: B
   Name: Miguel
Age: 22
Initial: M
IsStudent: true
Grade: a
   Name: Amos
Age: 20
Initial: A
IsStudent: true
Grade: B
   Name: Gloria
Age: 21
Initial: G
IsStudent: true
Grade: A
   Name: Farah
Age: 25
Initial: F
IsStudent: true
Grade: C
   Name: Fiona
Age: 22
Initial: F
IsStudent: true
Grade: D
using namespace std;

void parseCSV(const string&);

int main() {
   parseCSV("students.csv");

   return 0;
}
