#include <iostream>
using namespace std;
class bda;
class aiml
{
private:
    int aiml_data;

public:
    aiml()
    {
        aiml_data = 30;
    }
    void display_aiml()
    {
        cout << aiml_data << endl;
    }
    friend void swap(aiml&, bda&);
};
class bda
{
private:
    int bda_data;

public:
    bda()
    {
        bda_data = 25;
    }
    void display_bda()
    {
        cout << bda_data << endl;
    }
    friend void swap(aiml&, bda&);
};
void swap(aiml& aiobj, bda& bdobj)
{
    int temp;
    temp=aiobj.aiml_data;
    aiobj.aiml_data = bdobj.bda_data;
    bdobj.bda_data = temp;
}
int main()
{
    aiml aiml_obj;
    bda bda_obj;
    aiml_obj.display_aiml();
    bda_obj.display_bda();
    swap(aiml_obj, bda_obj);
    aiml_obj.display_aiml();
    bda_obj.display_bda();
    return 0;
}