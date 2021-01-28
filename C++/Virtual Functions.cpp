static int i=0;
static int j=0;

class Person{
    public:
        string name;
        int age,score,id;
        virtual void putdata()=0;
        virtual void getdata()=0;
        
};

class Professor : public Person{
    void putdata(){
        cout<<name<<" "<<age<<" "<<score<<" "<<++i<<endl;
    }
    void getdata(){
        cin>>name>>age>>score;
    }
};
class Student : public Person{
    void putdata(){
        cout<<name<<" "<<age<<" "<<score<<" "<<++j<<endl;
    }
    void getdata(){
        cin>>name>>age;score=0;
    }
};
