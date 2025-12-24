 There are few problem with array or vector which are 
 for array main problem is Fixed size but it can solve using vector.
 also there are problem with vector and array is that they use sequential memory allocation so to define array or vector we need sequential memory but suppose we have memory of ten space like { 1},{2},{3},{ 4},{5},{6},{7},{ 8},{9},{10}
 and we declare an int x = 10;
 it take the block {4} 
 now we declare 10 size array but in this memory the {4}th address is already occupied so the array or vector can not be initialize or defined cause it needs sequential memory allocation.
 therefore it is a problem to solve this problem now we can use linked list type data structure now we discuss about the linked list.

 now the idea of linked list: to solve the previous problem if we have something that can hold the data like if we want to store 3 data we can store it in any location like 20{on f1},30{on d7},40{on c4} how ever now we can store data but here occur another problem which is how we know that the first element is 20 and then 30 and then 40 so we can not access using 20 or on {f1} address to go to next.  then lets think that if there is any way to store in {f1} address the value(on this address) and also the address of the next element. so now we found a solution so to do that we need a ds called linked list and in which point that store data and address of next element is also called a node in terms.
 therefore each {not found suitable word} that store some value like the data and address is called a node .
 also note that each element is pointing only the next element so only one way thats why it called singly linked list. but there is a catch we just can not store the address of the next data it will just give the value and we lost the connection to get both data and the address of next we need the address of the specific node so in that case in address of first node we store the address of next node not the address of specific data it needs to be remember. now we discuss that in array we can access using index because it is contiguous memory. and now we also can do the same with code or singly linked list. now how we know that this is last value or node. to solve this problem in array or vector or we have their size or an identifier to end so in this case in singly linked list in the last node we give the address field with null so when it find in a node that in the address section is null it is the last node. also remember that it create an imaginary connection. it store data in many random memory but we create a connection.

 creating a node:- 
 to create a singly linked list we need to store two thing
 which are 
 1. value with desire input type
 2. address of second node address (in this cases it is a pointer)
   
to archive this we need to use most importent part in programming which is called class or user define data type

like bellow
```cpp
#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int val;
    Node *next; // cause pointer is pointing a node;
};

int main()
{
    Node a, b, c;
    // manually
    a.val = 10;
    b.val = 20;
    c.val = 30;

    a.next = &b;
    b.next = &c;
    c.next = NULL;

    cout << a.val << endl; // this print a
    cout << (*a.next).val << endl;// this print b using a with node connection
    cout << (*(*a.next).next).val << endl; // this print c using a with node connection
    // or we can use shortcut
    cout << a.next->next->val << endl;
    return 0;
}
```

in this example we created a singly_linked_list the first element or node is also called head in terms.

here comes another issue which is static and dynamic memory
so far we learn to do that in static memory in that case if we return any object and we can get it in main function but then the function or static memory erase all thing so we can not get it like if we want to add another node using a function it will add and then we do not want to return anything then when execution is complete the function will errase all memory thus our goal is not met to add another node . to solve this problem we have dynamic memory allocation whil can help us to achive our goal .

now lets do it using dynamic memory

```cpp
#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int val;
    Node *next;

    Node(int val)
    {
        this->val = val;
        this->next = NULL;
    }
};

int main()
{
    Node *head = new Node(10);
    Node *a = new Node(20);
    Node *b = new Node(40);

    // connection to nodes
    // (*head).next = a;
    // or
    head->next = a;
    a->next = b;

    cout << head->val << endl;
    // cout << (*(*head).next).val << endl;
    // or
    cout << head->next->val << endl;
    cout << head->next->next->val << endl;

    return 0;
}
```

now if we want to print values of the singly linked list in this example there are 3 nodes but in real life we are going to use more in that case we need some thing in loop to print all values in linked list.
so lets do it remember here we have head so we can do it with this and lets see what heppend.

```cpp
#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int val;
    Node *next;

    Node(int val)
    {
        this->val = val;
        this->next = NULL;
    }
};
int main()
{
    Node *head = new Node(10);
    Node *a = new Node(20);
    Node *b = new Node(30);
    Node *c = new Node(40);

    // connection
    head->next = a;
    a->next = b;
    b->next = c;
    //  c no need we use constructor to make all address is null so c is already null
    while (head != NULL)
    {
        cout << head->val << endl;
        head = head->next;
    }

    return 0;
}
```
output
```
10
20
30
40

```
ok but there is a catch what is it? the catch is if we want to print it again then see what happend
```cpp
#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int val;
    Node *next;

    Node(int val)
    {
        this->val = val;
        this->next = NULL;
    }
};
int main()
{
    Node *head = new Node(10);
    Node *a = new Node(20);
    Node *b = new Node(30);
    Node *c = new Node(40);

    // connection
    head->next = a;
    a->next = b;
    b->next = c;
    //  c no need we use constructor to make all address is null so c is already null
    while (head != NULL)
    {
        cout << head->val << endl;
        head = head->next;
    }

    while (head != NULL)
    {
        cout << head->val << endl;
        head = head->next;
    }

    return 0;
}
```
output
```
10
20
30
40

```

ohh why we can not see this two times because we move the head after first loop we lost the head into null thats why we can not use it so what is the solution the solution is very easy we can not use head but we can use a temp variable and re use it like bellow
```cpp
#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int val;
    Node *next;

    Node(int val)
    {
        this->val = val;
        this->next = NULL;
    }
};
int main()
{
    Node *head = new Node(10);
    Node *a = new Node(20);
    Node *b = new Node(30);
    Node *c = new Node(40);

    // connection
    head->next = a;
    a->next = b;
    b->next = c;
    //  c no need we use constructor to make all address is null so c is already null
    // we can not use head it will lose then we lose the full list
    /*   while (head != NULL)
      {
          cout << head->val << endl;
          head = head->next;
      }

      while (head != NULL)
      {
          cout << head->val << endl;
          head = head->next;
      } */

    // the way
    Node *temp = head;

    while (temp != NULL)
    {
        cout << temp->val << endl;
        temp = temp->next;
    }

    temp = head;
    while (temp != NULL)
    {
        cout << temp->val << endl;
        temp = temp->next;
    }

    return 0;
}
```
output
```
10
20
30
40
10
20
30
40
```
so we solve our problem those are we print using loop snd we did not lost our node or head

remember the node is created on heap nut the pointer head and a or b is in the stack