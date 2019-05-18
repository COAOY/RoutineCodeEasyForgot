//如果要在class的member function使用的話只要在物件中做overloading就可以了
//如果有多個比較需求的話也可以設定static並透過選擇方式決定比較法
class Node
{
public:
	int s,e;
    bool operator< (const Node &s)const
	{
		return (this->s > s.s);
	}
};
//static的多種比較，不過要記得在不同的CPP裡要預先定義好static的數字
class Node
{
public:
    static choice; 
	int s,e;
    bool operator< (const Node &s)const
	{
	    if(choice==1)
		    return (this->s > s.s);
		else
		    return (this->e > s.e);
	}
};


//透過寫好的函式做比較
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
class Node
{
public:
	Node(int i):a(i*2){};
	~Node(){};
	int a;
};
bool compare1(Node s, Node t){return s.a > t.a;};
bool compare2(Node s, Node t){return s.a < t.a;};
int main()
{
    vector<Node> arr;
    for(int i=0;i<10;i++){
    	arr.push_back( Node (i) );
    }
    for(int i=0; (i+2)<10; i+=2)swap(arr[i],arr[i+2]);
   
    sort(arr.begin(),arr.end(),compare1);
	sort(arr.begin(),arr.end(),compare2);
	return 0;
}
