/* #include <iostream>
// д/з переробити на вектори
struct People
{
    std::string name;
    std::string surname;
    int age = 5;
    int zp = 0;
};

int main()
{
   People *pPeople = nullptr;
   pPeople = new People[3];

   pPeople[0].name = "Nata";
   pPeople[0].surname = "Mart";
   pPeople[0].age = 30;
   pPeople[0].zp = 250000;

   pPeople[1].name = "Orest";
   pPeople[1].surname = "Guy";
   pPeople[1].age = 39;
   pPeople[1].zp =5656554;

   pPeople[2].name = "Taras";
   pPeople[2].surname = "Lepa";
   pPeople[2].age = 32;
   pPeople[2].zp =8656554;

   for (int i = 0; i < 3; ++i)
   {
       std::cout << "Name = " << pPeople[i].name << std::endl;
       std::cout << "Surname = " << pPeople[i].surname << std::endl;
       std::cout << "Age = " << pPeople[i].age << std::endl;
       std::cout << "Zp = " << pPeople[i].zp << std::endl;
   }
       delete []pPeople;
}
*/

#include <iostream>
#include <vector>
// д/з переробити на вектори

int main()
{
    std::vector <std::string> name = {"Orest\n Taras \n Nata"};
    std::vector <std::string> surname = {"Guy \n Lepa \n Martynovych"};
    std::vector <int> age = {39, 32, 18};
    std::vector <int> zp = {25989,48874,54684};

for (auto const &element: name)
    std::cout << "Name:" << element << std::endl;

for (auto const &element: surname)
    std::cout << "Surname:"  <<  element << std::endl;

for (auto const &element: age)
    std::cout << "Age:" << element << std::endl;

for (auto const &element: zp)
    std::cout << "ZP:" << element << std::endl;

   //for (int i = 0; i < 3; ++i)
  // {
     //  std::cout << "Name = " << name << std::endl;
    //   std::cout << "Surname = " << pPeople[i].surname << std::endl;
//       std::cout << "Age = " << pPeople[i].age << std::endl;
//       std::cout << "Zp = " << pPeople[i].zp << std::endl;
//   }
 }
