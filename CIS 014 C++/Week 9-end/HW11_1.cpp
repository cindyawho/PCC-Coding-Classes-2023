#include <iostream>
using namespace std;

class Node
{
public:
    int val;
    Node* next;
    Node(int x) : val(x), next(nullptr) {}
};
class CIS14
{
public:
    Node* addLists(Node*, Node*);
};
// ------------------------------------------------------------
// DO NOT MODIFY ABOVE THIS LINE. The above is your C++ class
// named CIS14 with its method and the Node class you will use.
// ------------------------------------------------------------

// Optional: you may add any global function, variables here

Node* reverse(Node* list)
{
    if (list == NULL || list->next == NULL)
        return list; 
    Node* rest = reverse(list->next);
    list->next->next = list;
    list->next = NULL;
    return rest;
}

/**
 * PURPOSE: to add 2 numbers together
 * PARAMETERS: two linked lists will be provided to us created
 *             by the class Node
 * RETURN VALUE: we need to return our own linked list that is 
 *             created by our own initialized Nodes
*/
Node* CIS14::addLists(Node* l1, Node* l2) {
    // YOUR CODE HERE
    cout << "This is the start of the class function: addLists" << endl;
    Node* answer = NULL;
    Node *temp = new Node(0);
    Node *prev = NULL;

    Node* l1Rev = reverse(l1);
    Node* l2Rev = reverse(l2);
    
    int sum = 0;
    int carry = 0;

    while(l1Rev != nullptr || l2Rev != nullptr){
        if(l1Rev != nullptr) {
            sum = carry + l1Rev->val;
        } else {
            sum = carry;
        }
        if(l2Rev != nullptr){
            sum += l2Rev->val;
        }

        if(sum >= 10){
            carry = 1;
            sum -= 10;
        } else {
            carry = 0;
        }

        temp = new Node(sum);

        if(answer == nullptr){
            answer = temp;
        }
        else{
            if (prev != nullptr) {
                prev->next = temp;
            } else {
                answer = temp;
            }
            prev = temp;
        }

        if(l1Rev){
            l1Rev = l1Rev->next;
        }
        if(l2Rev){
            l2Rev = l2Rev->next;
        }
    }

    if(carry>0){
        prev->next = new Node(carry);
    }

    answer = reverse(answer);
    return answer;
};

int main()
{
    // Instantiate an instance of the CIS14 class
    CIS14 cis14;

    // Your target method will be tested with random input such
    // as the following example; the actual test cases will vary
    // The example uses declared node instances. You may dynamically
    // allocate your nodes as well for the same effect. If so, 
    // just remember to deallocate them after use to avoid memory
    // leaks.

    // First input list: 2->3->4->8
    Node first1(2), first2(3), first3(4), first4(8);
    first1.next = &first2;
    first2.next = &first3;
    first3.next = &first4;

    // Second input list: 9->9
    Node second1(9), second2(9);
    second1.next = &second2;

    // Adding:
    //    2->3->4->8
    //          9->9
    // -------------
    //    2->4->4->7
    Node* ans = cis14.addLists(&first1, &second1);

    // You may use the following code to print your list
    Node* tmp = ans;
    while (tmp != nullptr)
    {
        (tmp->next != nullptr) ? 
            cout << tmp->val << "->" : 
            cout << tmp->val;
        tmp = tmp->next;
    }
    cout << endl;

    // If your add(...) method allocated heap memory, you
    // should deallocate them here to avoid memory leaks. 
    Node* current = ans;
    while (current != nullptr) {
        Node* next = current->next;
        delete current;
        current = next;
    }

    return 0;
}