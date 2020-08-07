#include"teacher.h"
using namespace std;
class course: public teacher
{
private:
    string code;
   string co[900];
    string result;
public:
    course();
   void setcoursename();
    string getcoursename();
    void setcode();
    string getcode();
    void setnumberstd();
   // string getnumberstd();
    void setteachercourse();
    string getteachercourse();
    void setenroll();
    string getenroll();
    void setchangeteacher();
    string getchangeteacher();
    void setdeenroll();
    string getdeenroll();

};
