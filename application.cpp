#include <conio.h>
#include <iostream>
using namespace std;
int main() {
  system("cls");
  int totalstu = 20;

  int index = 0;
  string names, departments, issuedbooks;
  int age;
  int rollnum;
  string namearr[totalstu];
  string departmentarr[totalstu];
  string issuedbooksarr[totalstu];
  int agearr[totalstu];
  int rollnumarr[totalstu];
  while (true) {
    system("cls");
    cout << " -----------------------------------------------------------------"
            "-------------------"
         << endl;
    cout << " ------------------------ LIBRARY MANAGMENT SYSTEM "
            "----------------------------------"
         << endl;
    cout << " -----------------------------------------------------------------"
            "-------------------"
         << endl
         << endl;

    cout << " user menue" << endl;
    cout << "1 . student " << endl;
    cout << "2 . librarian " << endl;
    cout << "3 .  exit the system " << endl;

    int choseoption;
    cout << " chose option ";
    cin >> choseoption;
    cout << " you choose option " << choseoption << endl;
    system("cls");

    if (choseoption == 1) {
      cout << " WELCOME TO THE STUDENT MENUE " << endl;

      cout << " ENTER STUDENT NAME :";
      cin >> names;
      cout << " Enter student AGE :";
      cin >> age;
      cout << " ENTER STUDENT DEPARTMENT  : ";
      cin >> departments;
      cout << " ENTER STUDENT ROLL NUMBER :";
      cin >> rollnum;
      cout << " BOOK ISSUED TO " << names << " : ";
      cin >> issuedbooks;
      namearr[index] = names;
      agearr[index] = age;
      departmentarr[index] = departments;
      rollnumarr[index] = rollnum;
      issuedbooksarr[index] = issuedbooks;
      cout << " YOU HAVE SUCCESFULLY STORED DATA " << endl;
      cout << "\n\n \t\t Press Any Key to Continue";
      getch();
      system("cls");

      index++;

    } else if (choseoption == 2) {

      system("cls");
      for (int i = 0; i < 3; i++) {
        system("cls ");

        cout << " WELCOME TO THE LIBRARIAN MENUE " << endl;

        string password;
        cout << " ENTER PASSWORD ";
        cin >> password;
        string username;
        cout << " Enter user name  ";
        cin >> username;

        if (password == "123" && username == "admin") {
          system("cls");
          cout << " logged in succesfully " << endl << endl << endl;

          while (true) {
            system("cls");
            cout << " 1 . SHOW STUDENT RECORD " << endl;
            cout << " 2 . SEARCH STUDENT " << endl;
            cout << " 3 . SEARCH book" << endl;
            cout << " 4 . UPDATE RECORD " << endl;
            cout << " 5 . SORT RECORDS " << endl;
            cout << " 6 . LOGOUT " << endl;
            int selec;
            cout << " SELECT ONE OPTION TO PROCEEDE ";
            cin >> selec;
            system("cls");
            if (selec == 1) {

              cout << " NAME \t AGE \tROLL\t DEPARTMENTS \t ISSUED "
                      "books "
                   << endl;
              for (int i = 0; i < index; i++) {

                cout << namearr[i] << "\t" << "  " << agearr[i] << "\t" << "  "
                     << rollnumarr[i] << "\t" << "  " << departmentarr[i]
                     << "\t\t\t" << issuedbooksarr[i] << "\t" << endl;
              }
              cout << "\n\n \t\t Press Any Key to Continue";
              getch();
              system("cls");

            } else if (selec == 2) {
              cout << "\n\n \t\t Press Any Key to Continue";
              getch();
              system("cls");
              string search;
              cout << " ENTER NAME YOU WANT TO SEARH ";
              cin >> search;
              bool isfound = false;
              for (int i = 0; i < index; i++) {
                if (namearr[i] == search) {
                  system("cls");
                  cout << " NAME \t AGE \tROLL\t DEPARTMENTS \t ISSUED "
                          "books "
                       << endl;
                  cout << namearr[i] << "\t" << agearr[i] << "\t"
                       << rollnumarr[i] << "\t" << departmentarr[i] << "\t\t\t"
                       << issuedbooksarr[i] << "\t" << endl;
                  isfound = true;
                  getch();
                }
              }
              if (isfound == false) {
                cout << " result not found ";
                getch();
              }

            } else if (selec == 3) {
              cout << "\n\n \t\t Press Any Key to Continue";
              getch();
              system("cls");
              string book;
              cout << " ENTER  Book NAME YOU WANT TO SEARH ";
              cin >> book;
              bool isfound = false;
              for (int i = 0; i < index; i++) {
                if (issuedbooksarr[i] == book) {
                  system("cls");
                  cout << " NAME \t AGE \tROLL\t DEPARTMENTS \t ISSUED "
                          "books "
                       << endl;
                  cout << namearr[i] << "\t" << agearr[i] << "\t"
                       << rollnumarr[i] << "\t" << departmentarr[i] << "\t\t\t"
                       << issuedbooksarr[i] << "\t" << endl;
                  isfound = true;
                  getch();
                }

                else if (isfound == false) {
                  cout << " RECORD NOT FOUND ";
                  getch();
                }
              }
            } else if (selec == 4) {
              cout << "\n\n \t\t Press Any Key to Continue";
              getch();
              system("cls");
              cout << " show old record " << endl;

              cout << " NAME \t AGE \tROLL\t DEPARTMENTS \t ISSUED "
                      "books "
                   << endl;
              for (int i = 0; i < index; i++) {
                cout << namearr[i] << "\t" << agearr[i] << "\t" << rollnumarr[i]
                     << "\t" << departmentarr[i] << "\t\t\t"
                     << issuedbooksarr[i] << "\t" << endl;
              }
              bool isfound = false;
              string update;
              cout << " ENTER Student Name YOU WANT TO UPDATE HIS RECORD ";
              cin >> update;

              for (int i = 0; i < index; i++) {
                if (namearr[i] == update)

                {
                  cout << "\n\n \t\t Press Any Key to Continue";
                  getch();
                  system("cls");
                  cout << " ENTER NEW STUDENT NAME :";
                  cin >> names;
                  cout << " Enter New Student AGE :";
                  cin >> age;
                  cout << " ENTER New STUDENT DEPARTMENT  : ";
                  cin >> departments;
                  cout << " ENTER New STUDENT ROLL NUMBER :";
                  cin >> rollnum;
                  cout << " New BOOK ISSUED TO " << names << " : ";
                  cin >> issuedbooks;
                  namearr[i] = names;
                  agearr[i] = age;
                  departmentarr[i] = departments;
                  rollnumarr[i] = rollnum;
                  issuedbooksarr[i] = issuedbooks;
                  cout << " YOU HAVE SUCCESFULLY UPDATE DATA " << endl;
                  isfound = true;
                  break;
                }
              }

              if (isfound == false) {
                cout << "\n\n \t\t Press Any Key to Continue";
                getch();
                system("cls");
                cout << " RECORD NOT FOUND ";
                getch();
              }

            }

            else if (selec == 5) {

              system("cls");

              cout << " 1. Sort by Name " << endl;
              cout << " 2. Sort by Roll Number " << endl;

              int choice;
              cout << " Enter choice: ";
              cin >> choice;

              if (choice == 1) {

                for (int i = 0; i < index - 1; i++) {
                  for (int j = 0; j < index - i - 1; j++) {

                    if (namearr[j] > namearr[j + 1]) {

                      string tempName = namearr[j];
                      namearr[j] = namearr[j + 1];
                      namearr[j + 1] = tempName;

                      int tempAge = agearr[j];
                      agearr[j] = agearr[j + 1];
                      agearr[j + 1] = tempAge;

                      int tempRoll = rollnumarr[j];
                      rollnumarr[j] = rollnumarr[j + 1];
                      rollnumarr[j + 1] = tempRoll;

                      string tempDept = departmentarr[j];
                      departmentarr[j] = departmentarr[j + 1];
                      departmentarr[j + 1] = tempDept;

                      string tempBook = issuedbooksarr[j];
                      issuedbooksarr[j] = issuedbooksarr[j + 1];
                      issuedbooksarr[j + 1] = tempBook;
                    }
                  }
                }

                cout << "\n Records Sorted by Name Successfully!\n";
              }

              else if (choice == 2) {
                for (int i = 0; i < index - 1; i++) {
                  for (int j = 0; j < index - i - 1; j++) {

                    if (rollnumarr[j] > rollnumarr[j + 1]) {

                      string tempName = namearr[j];
                      namearr[j] = namearr[j + 1];
                      namearr[j + 1] = tempName;

                      int tempAge = agearr[j];
                      agearr[j] = agearr[j + 1];
                      agearr[j + 1] = tempAge;

                      int tempRoll = rollnumarr[j];
                      rollnumarr[j] = rollnumarr[j + 1];
                      rollnumarr[j + 1] = tempRoll;

                      string tempDept = departmentarr[j];
                      departmentarr[j] = departmentarr[j + 1];
                      departmentarr[j + 1] = tempDept;

                      string tempBook = issuedbooksarr[j];
                      issuedbooksarr[j] = issuedbooksarr[j + 1];
                      issuedbooksarr[j + 1] = tempBook;
                    }
                  }
                }

                cout << "\n Records Sorted by Roll Number Successfully!\n";
              }

              else {
                cout << " Invalid Choice ";
              }

              cout << "\n\n NAME \t AGE \t ROLL \t DEPARTMENT \t ISSUED BOOK\n";

              for (int i = 0; i < index; i++) {
                cout << namearr[i] << "\t" << agearr[i] << "\t" << rollnumarr[i]
                     << "\t" << departmentarr[i] << "\t\t" << issuedbooksarr[i]
                     << endl;
              }

              getch();
            }

            else if (selec == 6) {
              break;

            } else
              cout << " INVALID option \n";
          }
          cout << "\n \nYou are Going Back To Main Menu\n";
          getch();
          break;

        }

        else {

          cout << " ERROR ! YOUR USERNAME OR PASSWORD IS WRONG " << endl;

          cout << " press any key to continue ";
          getch();
          system("cls");
        }
      }
    }

    else if (choseoption == 3) {
      break;
    } else {
      cout << " YOU ENTERED INVALID OPTION  " << endl;
    }
  }

  cout << " THanks for using this software ";
  return 0;
}
