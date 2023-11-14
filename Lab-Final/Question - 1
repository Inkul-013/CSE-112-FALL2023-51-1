#include <iostream>
using namespace std;
class Manchester_United
{
private:
    int coach;
    int player;
public:
    Manchester_United():coach(0),player(0) {}
    Manchester_United(int a,int b):coach(a),player(b) {}
    void getData()
    {
        cout<<"Coach:"<<coach<<" "<<"Player:"<<player<<endl;
    }
     Manchester_United operator++()
        {
        coach++;
        player++;
        return *this;
        }
    bool operator==(const Manchester_United&other)const
     {
        return (coach==other.coach) && (player==other.player);
     }
};
int main()
{
    Manchester_United ronaldo;
    Manchester_United fernandes;
    cout<<"Before increment:"<<endl;
    cout<<"ronaldo:";
    ronaldo.getData();
    cout<<"fernandes:";
    fernandes.getData();
    ++ronaldo;
    cout<<"After increment:"<<endl;
    cout<<"ronaldo:";
    ronaldo.getData();
    cout<<"fernandes:";
    fernandes.getData();
    if(ronaldo==fernandes)
        {
        cout<<"ronaldo is equal to fernandes."<<endl;
        }
    else
        {
        cout<<"ronaldo is not equal to fernandes."<<endl;
        }
    return 0;
}
