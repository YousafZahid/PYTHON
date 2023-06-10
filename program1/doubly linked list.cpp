#include<iostream>
using namespace std;



class D_linked_list{



class Node {

public:
Node* next;
Node* prev;
int data;
        Node()
        {
            next = NULL;
            prev = NULL;
            data =0;
            
        }
        Node(int d)
        {
            next = NULL;
            prev = NULL;
            data = d;
            
        }


};


private:
    Node* head;
    int size;

public:

    void insert_at_tail(int data)
    {

        Node* temp = new Node();
        temp->data = data;
        Node* curr = head;
        if(head == NULL)
        {
            head= temp;
            head->prev = NULL;
            head->next  = NULL;
        }
        else
        {
            while(curr->next != NULL)
            {
                
                curr = curr->next;                
            
            }
            curr->next = temp;
            curr->next->prev = curr;
        }
    }

    Node* delete_from_head()
    {
        Node* temp = head->next;

        delete head;
        temp->prev = NULL;
        head = temp;
        return head;

    }
    Node* delete_from_tail()
    {
        Node* temp = head;
        
        while(temp->next!= NULL)
        {   
            temp = temp->next;
        }
            delete temp;
    }
    Node* delete_from_mid(int key)
    {
        Node* temp = head;
        


    }

};