#include<bits/stdc++.h>
using namespace std;
struct Node
{
    int data;
    struct Node* next;
    
    Node(int x){
        data=x;
        next=NULL;
    }
};


void printList(Node* node)
{
    while(node != NULL){
        cout << node->data <<" ";
        node = node->next;
    }
    cout<<"\n";
}










class Solution
{
    public:
    //Function to count nodes of a linked list.
    int getCount(struct Node* head)
    {
        int count = 0;  
        
        //using a pointer for the linked list.
        struct Node* current = head; 
        
        //using a loop to count nodes until we get null in link part of node.
        while (current != NULL)
        {
            //updating counter.
            count++;
            
            //updating pointer to the next node.
            current = current->next;
        }
        
        //returning the number of nodes.
        return count;
    }
    int TesTing(struct Node* head)
    {
        int count = 5;  
        
        //using a pointer for the linked list.
        struct Node* current = head; 
        
        //using a loop to count nodes until we get null in link part of node.
        while (current != NULL)
        {
            //updating counter.
            count++;
            
            //updating pointer to the next node.
            current = current->next;
        }
        
        //returning the number of nodes.
        return count;
    }
};













int main()
{
    srand(time(NULL));
    int t = rand()%2+1;
    cout<<"this is t : "<<t<<endl;
    while(t--)
    {
        int n = rand()%5+2;
        cout<<"This is number of elements in linked list : "<<n<<endl;
        int data = rand()%2+1;
        cout<<"this is element is linked list "<<data<<endl;
        // cin>>data;
        struct Node* head = new Node(data);
        struct Node* tail = head;
        for(int i=0;i<n-1;i++)
        {
            // cin>>data;
            data=rand()%5+2;
            cout<<"this is element in linked list : "<<data<<endl;
            tail->next = new Node(data);
            tail = tail->next;
        }
        // printList(head); // this part*****
        Solution ob;
        auto correctAns = ob.getCount(head);
        auto TesTingAns = ob.TesTing(head);
        cout<<"this is correct ans : "<<correctAns<<endl; // correct answer;
        cout<<"this is testing ans : "<<TesTingAns<<endl; // and this part ***** // example of wrong answer;
        
        
        
        if(correctAns!=TesTingAns){
            cout<<n<<endl;
            printList(head);
             
        }
        
    }
    return 0;
}



























































































https://practice.geeksforgeeks.org/problems/count-nodes-of-linked-list/1/?category[]=Linked%20List&category[]=Linked%20List&difficulty[]=-1&page=1&sortBy=submissions&query=category[]Linked%20Listdifficulty[]-1page1sortBysubmissionscategory[]Linked%20List
