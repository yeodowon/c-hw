#include <iostream>
#include <cstring>

#define NUMBER 10 

using namespace std;

typedef struct profile
{
    char name[20];
    int english;
    double score;
    char department[80];
} t_profile;

void all_person(t_profile* p, int num)   // 전체사원출력 
{
    cout << "===== 사원 관리 프로그램 ====" << endl;
    cout << "이름    영어    학점    부서명" << endl;
    cout << "=============================" << endl;

    for (int i = 0; i < num; i++)
    {
        cout << p[i].name << "\t" << p[i].english << "\t" << p[i].score << "\t" << p[i].department << endl;
    }

    cout << "=============================" << endl;
}
void elite_person(t_profile* p, int num) // elite 사원 출력 
{
    cout << "===== elite 사원 ====" << endl;
    cout << "이름    영어    학점    부서명" << endl;
    cout << "=============================" << endl;

    for (int i = 0; i < num; i++)
    {
        if (p[i].english >= 900 && p[i].score >= 4.0)
        {
            cout << p[i].name << "\t" << p[i].english << "\t" << p[i].score << "\t" << p[i].department << endl;
        }
    }

    cout << "=============================" << endl;
}

int main()
{
    t_profile p1[NUMBER];
    int count = 0;

    while (1)
    {
        cout << "Enter Name(종료: end): ";
        cin >> p1[count].name;

        if (strcmp(p1[count].name, "end") == 0)
        {
            break;
        }
        cout << "Enter English: ";
        cin >> p1[count].english;

        cout << "Enter Score: ";
        cin >> p1[count].score;

        cout << "Enter Department: ";
        cin >> p1[count].department;

        count++;
    }

    all_person(p1, count);

    elite_person(p1, count);

    return 0;
}