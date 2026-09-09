#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <cmath>
using namespace std;

struct node{
    int data;
    node* next;
};

int main(){
    int n;
    cout << "Enter the number of nodes: " << endl;
    cin >> n;

    node* head = NULL;
    node* temp = NULL;

    for(int i=1;i<=n;i++){
        int value;
        cout << "Enter value of node" << endl;
        cin >> value;

        node* Newnode = new node;
        Newnode->data = value;
        
        if(head == NULL){
            head = Newnode;
            temp = head;
        }else{
            temp->next = Newnode;
            temp = Newnode;
        }   
    }
    cout << "Display Linked List" << endl;
    temp = head;
    while(temp!= NULL){
        cout << temp->data << " " << endl;
        temp = temp->next;
    }
    
    return 0;
}