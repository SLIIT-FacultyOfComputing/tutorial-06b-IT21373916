#include<stdio.h>

class Student {
  // private section
  //    int studentId
  //    name <- 20 charcters
    private:
      int studentID;
      char name[20];
  
  // public section
  //    assignDetails() method declaration
  //    display() method declaration
     public:
      void assignDetails(int sID, char name[]);
      void display();
};
