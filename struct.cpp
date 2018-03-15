#include<iostream>
#include<cstring>

using namespace std;

typedef struct Books
{
  char title[50];
  char author[50];
  int book_id;
}MyBooks;

void printBook(MyBooks *book);


/*typedef struct Books 
{
 char title[50];
 char author[50];
 int book_id;
}MyBooks;
*/

int main()
{
  MyBooks book1;

  strcpy(book1.title,"C++");
  strcpy(book1.author,"Runoob");
  book1.book_id=123;

  printBook(&book1);
  
  return 0;
}

void printBook(MyBooks *book)
{
  cout << book->title<<endl;
  cout << book->author<<endl;
  cout << book->book_id<<endl;
}
