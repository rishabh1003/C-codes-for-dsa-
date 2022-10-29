#include <bits/stdc++.h>

using namespace std;

class hero
{
    //`s char name[100];

    int health;

public:
    char *name;
    char level;

    hero()
    {
        cout << "default constructor called" << endl;
        name=new char[100];
    }

    hero(int health)
    {
       // cout << "this-> " << this << endl;
        this->health = health;
    }

    hero(int health, char level)
    {
       // cout << "this-> " << this << endl;
        this->health = health;
        this->level = level;
    }

    hero (hero &temp){
        char * ch=new char[strlen(temp.name)+1];
        strcpy(ch, temp.name);
        
        cout<<"copy constructor called"<<endl;
       this->health=temp.health;
       this->level=temp.level;
    }

    void print()
    {    cout<<endl;
         cout<<"[name:-"<<this->name<<",";
        cout << "level " << this->level << ",";
        cout << "health " << this->health << "]"<<endl;

        cout<<endl;
    }

    int gethealth()
    {
        return health;
    }
    /*char getlevel(){
      return  level;
     }
  */
    void sethealth(int h)
    {
        health = h;
    }
    void setlevel(char l){
         level=l;
      }
   

  void setname(char name[]){
    strcpy(this->name,name);
  }
};

int main()
{

   hero h;
   h.sethealth(12);
   h.setlevel('d');
   char name[7]="Babbar";
   h.setname(name);

   h.print();


   // use default  copy constructor
     hero h2(h);
     h2.print();

    // hero h2=h

    h.name[0]='G';
    h.print();

    h2.print();












  /* hero suresh(70, 'c');
    suresh.print();
     // copy constructor
    hero rishabh(suresh);
    rishabh.print();*/ 

    // staic allocation

    /* hero ramesh(3);
       // cout<< "address of ramesh "<<&ramesh<<endl;
        //ramesh.gethealth();
        ramesh.print();
        // dynamically

        hero *h=new hero(43);
        h->print();

        hero temp(23,'b');

        temp.print();*/
}