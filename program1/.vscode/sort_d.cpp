#include <iostream>
using namespace std;

class D_linked_list
{

    class Node
    {
    public:
        Node *next;
        Node *prev;
        int data;
        Node()
        {
            next = NULL;
            prev = NULL;
            data = 0;
        }
        Node(int d)
        {
            next = NULL;
            prev = NULL;
            data = d;
        }
    };

private:
    Node *head;
    Node *tail;
    int size;

public:
    D_linked_list()
    {
        head = NULL;
        tail = NULL;
        size = 0;
    }
    void insert_at_head(int data)
    {
        Node *temp = new Node(data);
        if (head == NULL)
        {
            head = temp;
            head->prev = NULL;
            head->next = NULL;
            tail = temp;
        }
        else
        {

            head->prev = temp;
            temp->next = head;
            head = temp;
        }
    }
    void insert_at_mid(int data, int key)
    {
        Node *temp = new Node(data);
        Node *curr = head;
        if (head == NULL)
        {
            head = temp;
            head->prev = NULL;
            head->next = NULL;
        }
        else
        {

            for (int i = 0; i < key; i++)
            {
                curr = curr->next;
            }
            temp->next = curr->next;
            curr->next = temp;
            temp->next->prev = temp;
            temp->prev = curr;
        }
    }
    void insert_at_tail(int data)
    {
        Node *temp = new Node(data);
        Node *curr = head;

        if (head == NULL)
        {
            head = temp;
            tail = temp;
            head->prev = NULL;
            head->next = NULL;
        }
        else
        {
            tail->next = temp;
            temp->prev = tail;
            tail = temp;
        }
    }

    void delete_from_head()
    {
       head = head->next;
       delete head->prev;
//head->prev = NULL;
  //      return head;
    }
    void delete_from_tail()
    { 
       // cout << tail->prev->data;
//system("pause");
       tail = tail->prev;
       
       delete tail->next;
       tail->next = NULL;
    }
    Node *delete_from_mid(int key)
    {
        Node *temp = head;
        Node *prevnode = NULL;
        for (int i = 0; i < key-1; i++)
        {
            prevnode = temp;
            temp = temp->next;
        }
        prevnode->next = temp->next;
        temp->next->prev = prevnode;
        delete temp;
        return head;
    }
    void display()
    {
        Node *temp = head;
        while (temp != NULL)
        {
            cout << temp->data;
            if (temp->next != NULL)
            {
                cout << "->";
            }
            temp = temp->next;
        }
        cout << endl;
    }
    Node* sort()
    {
        

    }
};

int main()
{
    cout << "Which!\n";
    

    D_linked_list a;
    a.insert_at_head(1);
    a.insert_at_tail(2);
    a.insert_at_tail(3);
    a.insert_at_tail(4);
    a.insert_at_tail(5);
    a.display();
    a.delete_from_head();
    a.delete_from_tail();
    a.delete_from_mid(2);
    a.display();
}