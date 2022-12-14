#include<iostream>
using namespace std;

template<class T>
class Node
{
    public:
    T data;
    Node<T> *link;
};
 template<class T>
 class StackLinked
 {
 private:
    Node<T> *top;
    int len;

 public:
    StackLinked();
    ~StackLinked();
    void Push(T);
    void Pop(T&);
    bool Find(int,T&);
    int Search(T);
    int length();
    void Display();
 };
 template<class T>
 StackLinked<T>::StackLinked()
 {
     top=NULL;
     len=0;
 }
 template<class T>
 void StackLinked<T>::Push(T Element)
 {
     Node<T> *temp;
     temp=new Node<T>;
     temp->data = Element;
     temp->link = NULL;
     if(temp=NULL)
     {
         cout<<"\nStack Overflow...";
         return;
     }
     if(top=NULL)
     {
         top=temp;
     }
     else
    {
     temp->link=top;
     top=temp;
     }
     len++;
 }
 template<class T>
 void StackLinked<T>::Pop(T &Element)
 {
   if(len=0)
   {
       cout<<"\nStack underflow";
       return;
   }
   else
   {
       Node<T> *temp;
       temp=top;
       top=top->link;
       Element = temp->data;
       delete temp;
    }
   len --;
 }
 template<class T>
 void StackLinked<T>::Display()
 {
     Node<T> *temp=top;
     while(temp)
     {
         cout<<temp->data<<"->";
         temp=temp->link;
     }
 }
 template<class T>
StackLinked<T>::~StackLinked()
 {
     Node<T> *temp=top;
     while(temp)
     {

         top=top->link;
         cout<<"\nDeleted Node is..."<<temp->data;
         delete temp;
         temp=top;
     }
 }
 int main()
 {
     char x;
     StackLinked<char> st;
     st.Push('a');
     st.Push('b');
     st.Push('c');
     st.Push('d');
     st.Push('e');

     st.Display();

     st.Pop(x);
     cout<<"\nElement deleted is..."<<x<<endl;

     cout<<"\nStack after Deletion is...\n";
     st.Display();

 }
