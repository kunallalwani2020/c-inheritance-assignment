#include"student.h"
using namespace std;
class teacher : public student
{
private:
     string teachingcourse[30000];
     string courseremove;
public:
    teacher();
    void setteachingcourse();
    string getteachingcourse();
    void setcourseremove();
    string getcourseremove();
};

