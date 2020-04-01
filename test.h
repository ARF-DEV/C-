#include <iostream>
using namespace std;
class player{
    public:
    player():
    name{"Player"},
    HP{100},
    Damage{10}
    {}

    player(const char* _name,int _HP,int _Damage):
    name{_name},
    HP{_HP},
    Damage{_Damage}
    {}
    
    void Attack(player& target){
        int* TargetHP = target.GetHP();
        *TargetHP = *TargetHP - Damage;
        cout<<target.GetName()<<" Was Attack By "<<name<<"\n\n";
    }

    int* GetHP(){
        return &HP;
    }
    const char* GetName(){
        return name;
    }
    int* GetDamage(){
        return &Damage;
    }

    void print(){
        cout<<"Name = "<<name<<'\n';
        cout<<"HP = "<<HP<<'\n';
        cout<<"Damage = "<<Damage<<"\n\n";
    }


    private:
    const char* name;
    int HP;
    int Damage;


};