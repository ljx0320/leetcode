This is a very typical, easy recursive solution.

Though it is not efficient enough, here is O(n) [solution.](https://leetcode.com/problems/maximum-binary-tree/discuss/106146/C++-O(N)-solution)

It is important to learn:
1. recursion

2. [pass by pointer vs pass by reference](https://stackoverflow.com/questions/41413663/pass-a-vector-by-reference-c)


Firstly you need to learn the differences between references and pointers and then the difference between pass-by-reference and pass-by-pointer.

A function prototype of the form:
```
void example(int *);  //This is pass-by-pointer
```
expects a function call of the type:
```
int a;         //The variable a
example(&a);   //Passing the address of the variable
```
Whereas, a prototype of the form:
```
void example(int &);  //This is pass-by-reference
```
expects a function call of the type:
```
int a;       //The variable a
example(a);
```
Using the same logic, if you wish to pass the vector by reference, use the following:
```
void funct(vector<string> &vec)  //Function declaration and definition
{
//do something
}

int main()
{
vector<string> v;
funct(v);            //Function call
}
```

3. Know to use dynamic objects, otherwise it will be completely wrong!
```
TreeNode *root = new TreeNode(); // Assume it supports default constructor!
```
