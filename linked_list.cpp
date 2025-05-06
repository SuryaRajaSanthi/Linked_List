
#include <bits/stdc++.h>

using namespace std;

class Node
{
    public:
    int data;
    Node* Next;
    
    Node(int val)
    {
        data = val;
        Next = nullptr;
    }
};

class Single_list 
{
    public:
    Node* Head;
    
    Single_list ()
    {
         Head = nullptr;
    }
    
    void Insert_atbegin(int val)
    {
        Node* Newnode = new Node(val);
        Newnode -> Next = Head;
        Head = Newnode;
    }
    
    
    void display()
    {
        if(Head == nullptr)
        {
            return ;
        }
        Node* temp = Head;
        while(temp!=nullptr)
        {
            cout << temp -> data <<"-> " ;
            temp= temp->Next;
        }
        
        cout << "NUll"<< endl;;
    }
    
    void Inser_atend(int val)
    {
        Node* Newnode = new Node(val);
        if(Head == nullptr)
        {
            Head= Newnode;
        }
        
        Node* temp = Head;
        while(temp ->Next != nullptr)
        {
            temp = temp -> Next;
            
        }
        
        temp -> Next = Newnode;
    }
    
    void Del_atbegin()
    {
        if(Head == nullptr)
        {
            return;
        }
        Node* temp = Head;
        Head = Head-> Next ;
        
        delete(temp);
    }
    
    void Del_atend()
    {
        if(Head == nullptr)
        {
            return;
        }
        
        Node* temp = Head;
        
        while (temp -> Next->Next != nullptr)
        {
            temp = temp -> Next;
        }
        
        
        
        delete temp->Next;
        temp ->Next = nullptr;
    }
    
    int count1()
    {
        Node* temp = Head;
        if(Head == nullptr)
        {
            return 0;
        }
        int count=0;
        while(temp  != nullptr)
        {
            count++;
            temp = temp -> Next;
        }
        return count;
    }
};
int main()
{
    Single_list list;
    list.Insert_atbegin(10);
    list.Insert_atbegin(20);
    list.display();
    int res=list.count1();
    cout<< res << endl;
    return 0;
}